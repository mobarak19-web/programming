# Calculator
a= float(input("Enter the 1st num:"))
b= float(input("Enter the 2nd num:"))
op=input("Enput oparetor :(*,/,+,-.**,%):")

if op=='+':
    print(a+b)

elif op=='-':
    print(a-b)
elif op=='*':
    print(a*b)
elif op=='/':
    print(f"{a/b:.3f}")
elif op=='%':
    print(a%b)
elif op=='**':
    print(a**b)
else:
    print("INVAILT OPRETIONS")
    