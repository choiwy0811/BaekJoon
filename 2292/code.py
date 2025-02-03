num = int(input())
a = 2
b = 7
k = 1
count = 2
while True :

    if a<=num<=b :
        print(count)
        break

    a = a + 6*k
    b = b + 6*(k+1)
    k = k+1
    count = count+1

