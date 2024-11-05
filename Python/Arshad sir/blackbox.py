def primeno():
    print("Find prime numbers")

    lowLt = int(input("Enter lower limit: "))
    upLt = int(input("Enter upper limit: "))

    print(f"Prime numbers between {lowLt} and {upLt} are:")
    
    for n in range(lowLt, upLt + 1):
        if n > 1:  # Prime numbers are greater than 1
            flag = 1
            for i in range(2, int(n**0.5) + 1):  # Check up to the square root of n
                if (n % i == 0):
                    flag = 0
                    break
            if flag == 1:
                print(n)  # Print the prime number

primeno()