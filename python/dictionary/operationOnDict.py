dict1={"hello":"hi","sixtnine":69,100:"Hundred"};
d={'A':1,'B':2,'C':3,'D':4,'E':5}
d1={1:1,2:2,3:3,4:4,5:5}
#print(dict1['sixtnine'])
#updating a dictionary
dict1["hello"]=10
print(dict1["hello"])

#deleting a dictionary
del dict1["hello"]
print(dict1)
#clearing a  dictionary
#dict1.clear()
#print(dict1)

#copying element
dict2=dict1.copy()
print(dict2)
#dictionary lenght
print(len(dict1))

#search in dictionary
print(10 in dict1)
print(100 in dict1)


#deleting all element
del dict1
#print(dict1)

#sum of keys and values
print("Sum of vlues is : ",sum(d.values()))
print("Sum of keys are : ",sum(d1.keys()))

print(d.items())




