def clasificador():
    num=input("dime un nuemro:")
    if num/2==0:
        if num/3==0:
            print "verde"
        else:
            print "rosa"
    else:
        if num/3==0:
            print"azul"
        else:
            print "negro"
clasificador()
