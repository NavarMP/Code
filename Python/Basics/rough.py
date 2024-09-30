A = []
lim = int(input('Enter number of subjects: '))
for i in range(lim):
    a = int(input(f'Enter your mark {i+1}: '))
    A.append(a)
min_mark = A[0]
for i in range(lim):
    if A[i] < min_mark:
        min_mark = A[i]
print(f'The minimum mark is: {min_mark}')