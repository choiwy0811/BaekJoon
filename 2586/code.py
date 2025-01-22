arr = []
max_j = 0
max_i = 0
for i in range(9) :
   arr.append(list(map(int, input().split())))

max = arr[0][0]

for i in range(9) :
    for j in range(9) :
        if arr[i][j]>max :

            max = arr[i][j]
            max_i = i
            max_j = j

print(max)
print(max_i+1, max_j+1)

