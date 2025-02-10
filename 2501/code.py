num, min = map(int, input().split())

arr = []

for i in range(1, num+1) :

    if num % i == 0 :

       arr.append(i)
        

if len(arr)<min :
    print("0")
else :
    print(arr[min-1])
