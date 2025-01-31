arr, num = input().split()
sum = 0

num  = int(num)

for i in range(len(arr)) :

    if '0'<=arr[i]<='9' :

        digit = int(arr[i])
    else :
        digit = ord(arr[i]) - ord('A') + 10
    new_num = digit * pow(num, i)
    sum = sum + new_num


print(sum)
    
        
