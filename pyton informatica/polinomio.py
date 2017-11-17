def polinomio():
    a=input("valor de x**2:")
    b=input("valor de x:")
    c=input("valor de :")
    raiz=b**2-4*a*c
    if(raiz<0):
        print ("no corta con el eje")
    if(raiz==0):
        print ("corta en un punto y tiene solucion")
    if(raiz>0):
        print ("corta en dos puntos tiene dos soluciones")
polinomio()
    
