#Take price of 3 product as input(eg-99.5,23.75,16.15)
  #1/ print the total Bill Account
  #2/ print the averge price
  #3/Take a superhero name as input & check if it start with 'S' or 's' or not 

a=float(input("Enter A:"))
b=float(input("Enter B:"))
c=float(input("Enter C:"))

sum=a+b+c
averge= sum/3
print("The  total bill Account:",sum)
print("The averge price:",f"{averge:.2f}")

name = input("Enter superhero Name: ")

if name.lower().startswith("s"):
    print("Starts with S")
else:
    print("Does not start with S")