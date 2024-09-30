print ('Total and Average Calculator')
def total():
    num = int(input('Enter number of subjects: '))
    global markList
    markList = []
    for i in range(num):
        marks = int(input(f"Enter marks {i+1}: "))
        markList.append(marks)
    totalMark = sum (markList)
    print (f"Total Mark: {totalMark}")
    
def avg():
    print (f'Average mark: {sum(markList)/len(markList)}')

total()
avg()