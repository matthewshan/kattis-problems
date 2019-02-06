import sys
#Input R1 and S 
#Output R2 = 2*S - R1
for i in sys.stdin:
    line = i.split()
    r1 = int(line[0])
    s = int(line[1])
    print(2*s - r1)


