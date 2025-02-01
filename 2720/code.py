num  = int(input())
money = []
for i in range(num) :

    money.append(int(input()))
for i in range(num) :

    q_count = money[i] // 25
    d_count = (money[i] % 25) // 10
    n_count = ((money[i] % 25)%10) // 5
    p_count = ((money[i] % 25)%10)%5

    print(q_count, d_count, n_count, p_count)
    


   
