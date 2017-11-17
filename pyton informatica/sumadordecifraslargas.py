def sumadordecifras():
    suma=0
    numero=input("dime un numero")
    while numero>10:
        numero=numero/10
        suma=suma+numero%10
    print suma+numero
sumadordecifras()
            
