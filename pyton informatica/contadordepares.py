def contadordepares():
    pares=0
    numero=input("Dime un numero")
    while numero!=0:
        resto=numero%10
        if resto%2==0:
            pares=pares+1
        numero=numero/10
    print "tiene",pares,"cifras pares"
contadordepares()
            
        
    
    
