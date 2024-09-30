def total (maths,cPrgm,acc,eng1,eng2,arb):
    print (f'total mark={maths+cPrgm+acc+eng1+eng2+arb}')
    
maths = int (input (f'enter mark in maths: '))
cPrgm = int (input (f'enter mark in c program: '))
acc = int (input (f'enter mark in fma: '))
eng1 = int (input (f'enter mark in english 1: '))
eng2 = int (input (f'enter mark in english 2: '))
arb = int (input (f'enter mark in arabic: '))
total(maths,cPrgm,acc,eng1,eng2,arb)