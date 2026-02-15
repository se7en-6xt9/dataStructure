str=input("Enter String : ")
subStr="abc"
count=0
subStrCount=0
for i in range(0,len(str)):
  if str[i]==subStr[j]:
    j++;
  else:
  j=0
  if count==3:
  subStrCount++;

