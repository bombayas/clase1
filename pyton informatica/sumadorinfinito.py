def sumadorinfinito():
    n= input("dime que numero quieres sumar")
    r=0
    print "las sumas de:",n
    for cont in range(1,n+1,1):
        r=r+cont
        print r
        print cont
        print r
sumadorinfinito()
