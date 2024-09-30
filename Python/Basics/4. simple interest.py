"""
program to calculate simple interest.
Read the principal amount,
rate of interest and time period from the user.
simple interest =principal amount*rate of interests*time period/100
"""
print ("Simple interest Calculator")
princ = int (input ('enter the principal amount'))
rate = int (input ('Enter the rate of interest'))
time = int (input ('Enter the time period'))
simInt = princ*rate*time/100
print ('Your simple Interest is',simInt)