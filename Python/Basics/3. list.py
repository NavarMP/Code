print('Total and Average Calculator')

def total():
    num = int(input('Enter number of subjects: '))
    marks_list = []  # create an empty list to store the marks
    for i in range(num):
        marks = int(input(f"Enter marks {i+1}: "))
        marks_list.append(marks)  # add each mark to the list
    total_marks = sum(marks_list)  # calculate the sum of the marks
    print(f"Total marks: {total_marks}")

total()