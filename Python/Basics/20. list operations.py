print ('List Operations')
List = []
lim = int (input ('Enter length of your list: '))
for i in range (lim):
    a = int(input (f'Enter your list item {i+1}: '))
    List.append(a)
print (type(List),type(a))
print (len(List))
print (sum(List))