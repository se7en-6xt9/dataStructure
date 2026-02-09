n = int(input("Enter number : "))
match n:
    case 10|0|30:
        print("10/20/30")
    case 40|50|60:
        print("40/50/60")
    case _:
        print("Default")

