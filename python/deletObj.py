n=int(input("Enter no of element : "))
l=[]
for i in range(n):
    key = input("Enter item : ")
    l.append(key)
l2=[]
for i in range(0,n):
    if l[i]=="was":
        l2.append("is")
    else:
        l2.append(l[i])
print(l2)
