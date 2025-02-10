
while True :

    num1, num2 = map(int, input().split())

    if num2%num1==0 :
        print('factor')
    elif num1%num2==0 :
        print('multiple')
    elif num1==0 and num2==0 :
        break
    else :
        print('neither')



