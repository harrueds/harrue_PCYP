#Este programa pide los coeficientes de una ecuación cuadrática y la resuelve.
print("RESOLUCIÓN DE ECUACIÓN CUADRÁTICA DADOS LOS COEFICIENTES\n\n")
A = float(input("Ingrese el coeficiente cuadrático A: "))
B = float(input("\nIngrese el coeficiente lineal B: "))
C = float(input("\nIngrese el coeficiente libre C:"))
disc = B*B-4*A*C
if(disc < 0):
    print("\nNo hay solución real\n\n")
elif(disc == 0):
    x=-B/(2*A)
    print(f"\nLa solución es {x}\n\n")
else:
    x1 = (-B-(B*B-4*A*C)**0.5)/(2*A)
    x2 = (-B+(B*B-4*A*C)**0.5)/(2*A)
    print(f"\nLas soluciones son {x1} y {x2}\n\n")