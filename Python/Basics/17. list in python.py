no = int (input ('Enter number of subjects: '))
A = []
for i in range (no):
    marks = int (input (f'Enter your mark {i+1}: '))
    A.append(marks)
    print (f'Your marks are {A}')