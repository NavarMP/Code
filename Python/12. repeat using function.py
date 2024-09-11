print ("Word Repeater")
def repeat():
    word = input ('Enter a word: ')
    lim = int (input ('Enter number of times to get repeated: '))
    for i in range (lim):
        print (word)
    while True:
        try:
            again = input ('Do you want to try another word? (yes/no)')
            if again == 'yes':
                repeat()
            else:
                print ('Ok, Thank you. See you later.')
        except ValueError:
            print ('invalid entry')
repeat()