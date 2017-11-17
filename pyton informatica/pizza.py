def pizza():
    diametro=input("dime el diametro de la pizza")
    radio=diametro/2
    pi=3.1416
    area=pi*(radio*radio)
    precio=input("dime cuanto vale la pizza entera")
    cm=precio/area
    print cm
pizza()
