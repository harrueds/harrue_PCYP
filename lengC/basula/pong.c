#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

#define WIDTH 80
#define HEIGHT 20
#define PADDLE_SIZE 4
#define BALL 'o'
#define PADDLE '#'

struct Ball {
    int x, y;
    int dx, dy;
};

struct Paddle {
    int y;
};

void initGame(struct Ball *ball, struct Paddle *leftPaddle, struct Paddle *rightPaddle) {
    // Inicializar la pelota en el centro
    ball->x = WIDTH / 2;
    ball->y = HEIGHT / 2;
    ball->dx = 1;
    ball->dy = 1;

    // Inicializar las paletas
    leftPaddle->y = (HEIGHT - PADDLE_SIZE) / 2;
    rightPaddle->y = (HEIGHT - PADDLE_SIZE) / 2;
}

void drawGame(struct Ball *ball, struct Paddle *leftPaddle, struct Paddle *rightPaddle) {
    system("clear");

    // Dibujar la parte superior de la pantalla
    for (int i = 0; i < WIDTH + 2; i++) {
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        printf("|");
        for (int j = 0; j < WIDTH; j++) {
            if (i == ball->y && j == ball->x) {
                printf("%c", BALL);
            } else if (i >= leftPaddle->y && i < leftPaddle->y + PADDLE_SIZE && j == 0) {
                printf("%c", PADDLE);
            } else if (i >= rightPaddle->y && i < rightPaddle->y + PADDLE_SIZE && j == WIDTH - 1) {
                printf("%c", PADDLE);
            } else {
                printf(" ");
            }
        }
        printf("|\n");
    }

    // Dibujar la parte inferior de la pantalla
    for (int i = 0; i < WIDTH + 2; i++) {
        printf("-");
    }
    printf("\n");
}

int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int main() {
    struct Ball ball;
    struct Paddle leftPaddle, rightPaddle;
    char input;

    initGame(&ball, &leftPaddle, &rightPaddle);

    while (1) {
        drawGame(&ball, &leftPaddle, &rightPaddle);

        if (kbhit()) {
            input = getchar();
            if (input == 'q') {
                break;
            }

            if (input == 'w' && leftPaddle.y > 0) {
                leftPaddle.y--;
            }
            if (input == 's' && leftPaddle.y < HEIGHT - PADDLE_SIZE) {
                leftPaddle.y++;
            }
        }

        // Actualizar la posición de la pelota
        ball.x += ball.dx;
        ball.y += ball.dy;

        // Rebotar la pelota en las paredes
        if (ball.y <= 0 || ball.y >= HEIGHT - 1) {
            ball.dy = -ball.dy;
        }

        // Comprobar colisiones con las paletas
        if ((ball.x == 1 && ball.y >= leftPaddle.y && ball.y < leftPaddle.y + PADDLE_SIZE) ||
            (ball.x == WIDTH - 2 && ball.y >= rightPaddle.y && ball.y < rightPaddle.y + PADDLE_SIZE)) {
            ball.dx = -ball.dx;
        }

        // Comprobar si la pelota se sale de la pantalla
        if (ball.x < 0 || ball.x >= WIDTH) {
            break;
        }

        // Mover la paleta derecha automáticamente
        if (ball.y < rightPaddle.y + PADDLE_SIZE / 2) {
            rightPaddle.y--;
        } else {
            rightPaddle.y++;
        }

        usleep(100000);
    }

    return 0;
}

