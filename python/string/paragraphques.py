string="python is ver good language\nand this langue has very\ngood syntax as compare to\nc++ but this language use c/c++\nfor it to work"
print(string)
space,line,word=0,1,1
for ch in string:
    if ch==" ":
        space+=1
        word+=1
    elif ch=="\n":
        line+=1
        word+=1
print("Line : ",line,"\nSpace : ",space,"\nword : ",word)
