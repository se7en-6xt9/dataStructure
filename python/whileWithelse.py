#Normal Exit: Loop condition becomes False \rightarrow else runs.
#Forced Exit: break statement is hit \rightarrow else is skipped.
i=0
while(i<5):
    print(i)
    i=i+1
else :
    print("Else statement")

print("Next example")
i=0
while i<5:
    print("Checking i : ",i)
    if(i==3):
        print("Enterd if statement break \n executed else will never be\n printed")
        break
    i=i+1
else:
    print("Will never executed \n Else statement")

