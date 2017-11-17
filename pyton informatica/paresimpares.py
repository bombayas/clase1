def pares():
    x=input("dime un numero:")
    y=input("dime tro numero:")
    if x/2==0 and y/2==0:
        print " son los dos pares"
    if x/2==0 and y/2!=0:
        print "uno es par y otro impar"
    if x/2!=0 and y/2!=0:
        print "los dos impares"
pares()
