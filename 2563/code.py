num = int(input())
square = [[0] * 100 for i in range(100)]
count = 0
for i in range(num) :

    a, b = map(int, input().split())

    for j in range(a, a+10) :
        for k in range(b, b+10) :

            square[k][j] = 1
    
for i in range(100) :
    for j in range(100) :

        if(square[j][i]==1) :

            count += 1

print(count)


