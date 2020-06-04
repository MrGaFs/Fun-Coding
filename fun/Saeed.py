from math import *
def main():
    #the layout
    print("""
 _   _      _ _        __        __         _     _   _ 
| | | | ___| | | ___   \ \      / /__  _ __| | __| | | |
| |_| |/ _ \ | |/ _ \   \ \ /\ / / _ \| '__| |/ _` | | |
|  _  |  __/ | | (_) |   \ V  V / (_) | |  | | (_| | |_|
|_| |_|\___|_|_|\___/     \_/\_/ \___/|_|  |_|\__,_| (_)

-------------------------------------------

key | operation
1   | a + b
2   | a - b
3   | a * b
4   | a / b
5   | sin (θ)
6   | cos (θ)
7   | tan (θ)
          """)
    x=int(input("Choose an operation to be done: ")) 
    ans=0
    if x < 5 :
        a,b=map(int,input("enter a and b in the same line : ").split())
        if x==1:
            ans = (a+b)
        elif x == 2:
            ans = (a-b)
        elif x == 3:
            ans = (a*b)
        elif x == 4:
            ans = (a/b)
    else:
        a=radians(int(input("Enter θ:")))
        if x == 5:
            ans = sin(a)
        elif x == 6:
            ans = cos(a)
        elif x == 7:
            ans = tan(a)
    print("The answer is: "+str(ans))
if __name__ == "__main__":
    main()
