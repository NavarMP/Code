print ("Binary Calculator")

n1 = float (input ('Enter your first operand: '))
n2 = float (input ('Enter your second operand: '))
operator = input ('Type your preferred operation [1. addition(+), 2. subtraction (-), 3. multiplication (*), 4. division (/) 5. modulus (%)]: ')

def calculation():
    if operator == 'addition' or operator == '1' or operator == '+':
        print (n1,'+',n2,'=',n1+n2)
    elif operator == 'subtraction' or operator == '2' or operator == '-':
        print (n1,'-',n2,'=',n1-n2)
    elif operator == 'multiplication' or operator == '3' or operator == '*':
        print (n1,'*',n2,'=',n1*n2)
    elif operator == 'division' or operator == '4' or operator == '/':
        print (n1,'/',n2,'=',n1/n2)
    elif operator == 'modulus' or operator == '5' or operator == '%':
        print (n1,'%',n2,'=',n1%n2)
    else:
        print ('Invalid operator')
calculation()