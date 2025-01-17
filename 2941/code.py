str = input()
leng = len(str)
count = len(str)

for i in range(0, leng) :
    
    if str[i] == '=' :

        if i>0 and (str[i-1] == 'c' or str[i-1] == 's') :
            count = count -1
        
        elif i>1 and (str[i-1]=='z' and str[i-2]=='d') :
            count = count -2
        elif i>0 and str[i-1] == 'z' :
            count = count-1

    elif str[i] == '-' :
        if i>0 and (str[i-1]=='c' or str[i-1]=='d') :
            count = count -1
    
    elif (str[i] == 'l' and str[i+1] == 'j') or (str[i] == 'l' and str[i+1] == 'j') :
        count = count -1
    
print(count)
