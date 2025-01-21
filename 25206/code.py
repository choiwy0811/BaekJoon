def average(grade) :

    num1 = -1.0

    if grade == "A+" :
        num1 = 4.5
    elif grade == "A0" :
        num1 = 4.0
    elif grade == "B+" :
        num1 = 3.5
    elif grade == "B0" :
        num1 = 3.0
    elif grade == "C+" :
        num1 = 2.5
    elif grade == "C0" :
        num1 = 2.0
    elif grade == "D+" :
        num1 = 1.5
    elif grade == "D0" :
        num1 = 1.0
    elif grade == "F" :
        num1 = 0.0
    elif grade == "P" :
        num1 = -1.0
    
    return num1
    

weight = 0.0
total_sum = 0.0



for i in range(0, 20) :

    subject, num, grade = input().split()

    num = float(num)
    score = average(grade)
    if score >= 0 :

        total_sum = total_sum + score*num
        weight = weight + num

total_record = total_sum / weight

print(total_record)





  
