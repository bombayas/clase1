def sumadordecifraslargas():
    suma=0;
    numero=input("Dime un numero de varias cifras")
    while(numero>0):
        suma=suma+numero%10
        numero=numero/10
    print "La suma de los digitos es",suma
sumadordecifraslargas()
