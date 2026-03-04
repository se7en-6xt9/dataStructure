l1=list(range(23,234,23))
l2=["abc","se","coe"]
l3=l2.copy()
# l3=l2 referce se jate ek me change kro dono me change ho jata hai
#append Method 
l2.append(l1)
print("Append : ",l2)
l3.extend(l1)
print("Extend : ",l3)
#count Method
n=l1.count(23)
print(n)
#first OCcurance listNAMe.index(element,start,end)
n=l3.index(46,2,18)
print("Find index : ",n)
#TO insert element listname.insert(index,element)
l3.insert(4,2322323234)
print("Inserted : ",l3)
#listANMe.pop delte from last
l3.pop()
print("POP : ",l3)
#to remove OBJ listNAME.remove(element)
l3.remove(23)
print("remove : ",l3)
#listANME.reverse
l3.reverse()
print("Reverse : ",l3)
#Listname.sort()
#can't sort string and int
#l3.sort(reverse=True)
#print(l3)
l4=[4,2,46,3,5,3]
l4.sort(reverse=True)
print("l4.reverse=True",l4)
l4.sort(reverse=False)
print("l4.reverse=False : ",l4)
l4.clear()
print("l4.clear() : ",l4)


