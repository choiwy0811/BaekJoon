def word(word) : 

    previous = ''
    alphabet = [0]*26

    

    for i in range(len(word)):
        if word[i] != previous :
            index = ord(word[i]) - ord('a')
            if alphabet[index] ==1 :
        
                return 0
        alphabet[index] = 1
        
        previous = word[i]
    
    return 1

            

num = int(input())
count = 0


for i in range(0, num) :

    word_input = input()
    if word(word_input)==1 :

        count += 1

print(count)




