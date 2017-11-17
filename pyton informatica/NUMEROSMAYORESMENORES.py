def numeros():
    x=input("dime un numero")
    y=input("dime otro")
    z=input("sueltate otro maño")
    if x>y and x>z:
        print ("el numero mayor de los tres es el"),x
    if y>x and y>z:
        print ("el numero mayor de los tres es el"),y
    if z>x and z>y:
        print ("el numero mayor de los tres es el"),z
numeros()
