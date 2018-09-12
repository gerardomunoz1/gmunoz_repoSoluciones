M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1

def arabigo_a_romano ():

    try:
        numero_ingresado=int(input("Ingrese un número para su conversión a números Romanos: "))
        print ("El número ingresado fue: ", numero_ingresado)

        while (numero_ingresado > 3999):
            print ("Número ingresado no válido.")
            print (" ")

            numero_ingresado=int(input("Ingrese un número nuevamente: "))
            print ("El número ingresado fue: ", numero_ingresado)



	#print ("El número ingresado en números romanos es: " , numero_ingresado)

    except:
        pass

def romano_a_arabigo ():

    try:
        numero_ingresado2=int(input("Ingrese un número para su conversión a números enteros: "))
        print ("El número ingresado fue: ", numero_ingresado2)

        while (numero_ingresado2 > 3999):
            print ("Número ingresado no válido.")
            print (" ")

            numero_ingresado=int(input("Ingrese un número nuevamente: "))
            print ("El número ingresado fue: ", numero_ingresado2)

    except:
        pass


	#print ("El número ingresado en números enteros es: ", numero_ingresado2)

print ("--------------------------------------------------------------")
print ("==BIENVENIDO AL CONVERSOR DE NÚMEROS==")
print (" ")

eleccion = int (input ("¿Qué desea convertir: romanos a enteros // enteros a romanos (1 // 2): "))

if (eleccion == 1):

    print (" ")
    print ("HA ESCOGIDO CONVERTIR DE N°ROMANOS A N°ENTEROS")
    print (romano_a_arabigo())


if (eleccion == 2):

    print (" ")
    print ("HA ESCOGIDO CONVERTIR DE N°ENTEROS A N°ROMANOS")
    print (arabigo_a_romano())

else:
    print ("ERROR, EJECUTE NUEVAMENTE EL PROGRAMA.")

