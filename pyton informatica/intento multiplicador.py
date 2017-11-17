def multiplicador_tabla():
    n= input("dime que tabla quieres que escriba")
    print "tabla del nº",n
    for cont in range (1,11,1):
        print n,"x",cont,"=",n*cont       
multiplicador_tabla()
