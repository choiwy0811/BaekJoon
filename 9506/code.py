while True :
    
    sum = 0
    arr = []
    num = int(input())
    
    if num == -1 :

        break

    for i in range(1, num) :

        if num%i == 0 :

            sum = sum + i
            arr.append(i)
    if sum == num :
        print(num, "=", arr[0], end="")
        for i in range(1, len(arr)) :
            print(" +", arr[i], end ="")
        print()
    else :
        print(num, "is NOT perfect.", end="")
    
        print()
        
        

    
    
