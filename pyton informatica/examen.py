def exam():
    num1=float(input("enter first number: "))
    num2=float(input("enter second number: "))
    num3=float(input("enter third number: "))
    if (num1>=num2) and (num1>=num3):
        largest=num1
    else:
        if (num2>=num1) and (num2>=num3):
            largest=num2
        else:
            if (num3>=num1) and (num3>=num2):
                largest=num3
    print "the largest number between",num1,num2,num3, "is",largest
exam()
        
