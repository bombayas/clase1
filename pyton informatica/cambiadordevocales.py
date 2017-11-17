def cambiadordevocales():
        texto=raw_input("escriba un texto")
        for cont in range(0,len(texto),1):
                if texto[cont]=='a' or texto[cont]=='u' or texto[cont]=='i' or texto[cont]=='o':
                        print 'e'
                else:
                        print texto [cont]
cambiadordevocales()
