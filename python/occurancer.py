s = input("Enter String: ")
subStr = "abc"

subStrCount = 0
j = 0
for i in range(len(s)):
    if s[i] == subStr[j]:
        j += 1
        if j == len(subStr):   # matched full substring
            subStrCount += 1
            j = 0              # reset for next match
    else:
        j = 0

print("Occurrences:", subStrCount)
