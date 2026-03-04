l1=[1,2,3]
l2=[3,4,5]
#print(l1+l2)
#print(l1*10)
n = int(input("How many items? ")) # Don't forget to define 'n'
list1 = []

for i in range(n):
    # Using an f-string to combine the text and the variable
    item = int(input(f"Enter item {i+1}: ")) 
    list1.append(item)

print(list1)


