number_set=set(list(range(5)))
print(number_set) #{0, 1, 2, 3, 4}
number_set.add(5)
print(number_set) #{0, 1, 2, 3, 4, 5}
number_set.discard(5)
number_set.discard(1999) #no Error nothing happend
print(number_set) #{0, 1, 2, 3, 4}

number_set.remove(4)
#number_set.remove(232) #error
print(number_set) #{0, 1, 2, 3}
number_set.pop()
print(number_set) #{1, 2, 3}



