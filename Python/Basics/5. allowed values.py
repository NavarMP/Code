num1 = int (input ('enter first number: '))
num2 = int (input ('enter second number: '))

allowed = ['addition','subtraction','multiplication','division','+','-','*','/','1','2','3','4']
while True:
    userInput = input ('Enter your preferred operation (1. addition (+), 2. subtraction (-), 3. multiplication (*), 4. division (/)): ')
    if userInput.lower() in allowed:
        break
    else:
        print ("Operation can't be done. please select one from the bracket.")
        
if userInput == 'addition' or '+' or '1':
    print (num1+num2)
elif userInput == 'subtraction' or '-' or '2':
    print (num1-num2)
elif userInput == 'multiplication' or '*' or '3':
    print (num1*num2)
elif userInput == 'division' or '/' or '4':
    print (num1/num2)