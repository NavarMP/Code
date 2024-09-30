A = []
lim = int (input ('Enter number of subjects: '))
def max ():
    for i in range (lim):
        global a
        a = int (input(f'Enter your mark {i+1}: '))
        A.append(a)
    i = 0
    max = A[0]
    for i in range (lim):
        if A[i]>max:
            max = A[i]
        i+=1
    print (max)
def tot ():
    sum = 0
    for i in range (lim):
        sum=sum+A[i]
        i+=1
    print (sum)
    
print ('Maximum from your marks: ')
max ()
print ('Total of your marks: ')
tot()