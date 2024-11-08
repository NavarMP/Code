def primeno():
    print ("Find prime numbers")

    lowLt = int (input ("Enter lower limit: "))
    upLt = int (input ("Enter upper limit: "))
    
    print (f"Prime numbers between {lowLt} and {upLt} are: ")
    
    for n in range (lowLt, upLt + 1):
        flag = 1
        for i in range (2, (n*0.5) + 1):
            if (n % i == 0):
                flag = 0
                break
    if (flag == 1):
        return n

print (primeno())
