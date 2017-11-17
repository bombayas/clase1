def triangulo():
    x=input("dime el cateto1:")
    y=input("dime el cateto2:")
    z=input("dime la hipotenusa:")
    hipo=z*z
    cate=(y*y)+(x*x)
    if (hipo==cate):
        print ("este triangulo es rectangulo")
    else:
        print ("este triangulo no es rectangulo")
triangulo()
