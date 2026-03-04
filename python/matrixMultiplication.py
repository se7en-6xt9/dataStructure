
A = [
    [1, 2, 3],
    [4, 5, 6]
]

B = [
    [7, 8],
    [9, 10],
    [11, 12]
]

result = []

for i in range(len(A)):
    row = []
    for j in range(len(B[0])):
        row.append(0)
    result.append(row)

for i in range(len(A)):          
    for j in range(len(B[0])):   
        for k in range(len(B)):  
            result[i][j] = result[i][j] + A[i][k] * B[k][j]

for i in range(len(result)):
    print(result[i])
