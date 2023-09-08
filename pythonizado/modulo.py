#uso de módulo de un número
num = int(input("Ingrese un número: "))
divisor = int(input("Ingrese el divisor: "))
resto = num % divisor
if resto == 0:
    print("El número ",num,"es disidible por ",divisor,"\n")
else:
    print(f"El numero {num} no es divisible por {divisor}\n")