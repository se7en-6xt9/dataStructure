m=int(input("Enter no of rows : "))
n=int(input("Enter no of colums : "))
matrix=[]
for i in range(m):
    row=[]
    for j in range(n):
        item=int(input(f"Enter item [{i}][{j}] : "))
        row.append(item)
    matrix.append(row)
print(matrix)
