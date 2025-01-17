str = input()

str = str.upper()
count = [0]*26
len = len(str)

for i in range(0, len) :

    count[ord(str[i])-ord('A')] = count[ord(str[i])-ord('A')] + 1

count_max = 0
result = '?'

for i in range(0, 26) :

    if count[i] > count_max :

        count_max = count[i]
        result = chr(i + ord('A'))
    elif count[i] == count_max :

        result = '?'

print(result)



