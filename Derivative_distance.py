from sympy import *
t = symbols('t')
deci = int(input("choce an operatin  \n1 - Deriving velocity from distance\n2 - Deriving acceleration from distance\n3- Deriving acceleration from velocity\n "))
if deci == 1:
    func = input("enter the distance equation on t as a*t**2+b*t+c \n")
    df = diff(func,t)
    print ("velocity equation is ",df)
    print_v_val=int(input("do you want to find velocity value 1-y 2-n"))
    if print_v_val == 1:
        df = diff(func,t)
        t_val = float(input("Enter the value of t:"))
        print ("the velocity is  ",round(df.subs(t, t_val),2))
elif deci == 2:
    func = input("enter the distance equation on t as a*t**2+b*t+c \n")
    df = diff(func,t,2)
    print ("the acceleration =",df)
elif deci == 3:
    func = input("enter the velocity equation on t as a*t+c \n")
    df = diff(func,t)
    print ("the acceleration =",df)

else:
    print("Invalid input. Please choose 1, 2, or 3")
