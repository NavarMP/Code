num = int (input ("Enter limit: "))
for n in range (2, num + 1):
    flag = 1
    for i in range (2,n):
        if (n % i == 0):
            flag = 0
            break
    if (flag == 1):
        print (n)