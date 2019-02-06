import sys

#Input X Y N
#Output R2 = 2*S - R1
for i in sys.stdin:
    line = i.split()
    x = int(line[0])
    y = int(line[1])
    n = int(line[2])

    for i in range(n):
        a = ((i+1) % x == 0)
        b = ((i+1) % y == 0)
        if a and b:
            print("FizzBuzz")
        elif a:
            print("Fizz")
        elif b:
            print("Buzz")
        else:
            print(i+1)
