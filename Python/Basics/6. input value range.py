while True:
    try:
        mark = int (input ('Enter a mark (0-100): '))
        if 0 <= mark <= 100:
            break
        else:
            print('Invalid mark. please enter a value between 0 and 100.')
    except ValueError:
        print ('Invalid input. Please enter a whole number.')