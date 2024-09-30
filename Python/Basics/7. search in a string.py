txt = input ('Enter a sentence: ')
wordToSearch = input ('Enter a word to search in the sentence: ')
if wordToSearch in txt:
    print (f"yes, the word '{wordToSearch}' is present in {txt}")
else:
    print (f"No, the word '{wordToSearch}' isn't present in '{txt}'")