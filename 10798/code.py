
sentence = []

for i in range(5) :

    sentence.append(input()) 

for i in range(15) :
    for j in range(5) :
        if i < len(sentence[j]) :
        

         print(sentence[j][i], end="")
