def ordenanumeros():
    n_cifras=0
    numero=input("dime un numero de tres cifras")
    while numero>0:
        numero=numero/10
        n_cifras=n_cifras+1
        return n_cifras
ordenanumeros()
       
