def par_impar():
    n=input("dime un numero entero")
    resto=n%2
    if resto==0:
        print "el numero",n,"es par"
    if resto!=0:
        print "el numero",n,"es impar"
par_impar()
