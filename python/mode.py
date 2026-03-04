n=int(input("Enter no of element : "))
list=[]
for i in range(n):
    item=int(input("Enter item : "))
    list.append(item)
freq=1
freqItem=[]
for j in range(n-1):
    for k in range(j+1,n):
        if list[k]==list[j]:
            freq+=1
    freqItem.append(freq)
large=0
idx=0
for p in range(n):
    if freqItem[p]>large:
        large=freqItem[p]
        idx=p
print("Mode : ",list[idx])
for l in range(n):
    if freqItem[l]==large and list[p]!=list[idx]:
        print("Mode is : ",list[p])

