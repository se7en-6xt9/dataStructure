operator = input("Enter operator : ")
a = int(input("Enter number a : "))
b = int(input("Enter number b : "))
match operator:
    case '+':
        print("Sum :",a+b);
    case '-':
        print("Sub :",a-b)
    case '*':
        print("Multiply :",a*b)
    case '/':
        print("floatQuotien :",a/b)
    case '//':
        print("intQuotien :",a//b)
    case '%':
        print("Remainder :",a%2)
    case _:
        print("Wrong input")

