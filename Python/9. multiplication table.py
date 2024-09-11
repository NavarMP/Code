print ('Multiplication table')
num = int(input('Enter a number: '))
lim = int (input ('Enter number of rows: '))
for i in range (1,lim+1):
    print (i,' x ',num,'=', i*num)