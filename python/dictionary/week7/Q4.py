key_list=["boby","Raju","Tejo","karan","Arjun"]
word_dict={}
for i in range(5):
    value=input("Enter word : ")
    word_dict[key_list[i]]=value
    i+=1
correct,wrong,almost_correct=0,0,0
for ch in word_dict:
    cross=0
    l1=max(len(ch),len(word_dict[ch]))
    l2=min(len(ch),len(word_dict[ch]))
    if l1-l2>=2:
        cross=2
    else:
        for j in range(l2):
            if ch[j]!=word_dict[ch][j]:
                cross+=1
    if cross>=2:
        wrong+=1
    elif cross==0 and l1-l2==1 or cross==1:
        almost_correct+=1
    else:
        correct+=1


print("correct : ",correct)
print("almost_correct : ",almost_correct)
print("wrong : ",wrong)

