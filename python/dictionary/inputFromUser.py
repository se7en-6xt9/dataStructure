n=int(input("Enter no of items : "))
user_dict={}
for i in range(0,n):
    key=input("Enter key : ")
    value=input("Enter value : ")
    user_dict[key]=value
print(user_dict)
