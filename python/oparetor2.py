#Arithnetic oparetor 

a=int (input("Enter the A:"))
b=int (input("Enter the B:"))
sum=a+b
sub=a-b
mul=a*b
div=a/b
modulo=a%b
power=a**b
sum *=5
print("Sum :",sum)
print("Sub :",sub)
print("Mul :",mul)
print("Div :",f"{div:.3f}")
print("Modulo :",modulo)
print("Power :",power)
# print("Sum :",sum)

#oparetor precedance (),>,*,/,<,+,-
ans=10+(5-6)*3/2
print("ANS",ans)

#compare oparetor >or <  any condition 
ans = 4>6
print(ans)

# logical eorror 3type 
# 1/ AND 2/OR, 3/NOT
str1=3>5
str2=3>6
print(str1 and str2)
print(str1 or str2)
print(not str1)

