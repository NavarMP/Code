//Short form of a string eg:- Computer Science : CS

#include<stdio.h>
#include <ctype.h>

#define MAX_INPUT 80
#define MAX_SHORTFORM 10

int main () {
    printf ("Get short form of a name\n");
    
    char input[MAX_INPUT];
    char shortForm[MAX_SHORTFORM];

    printf ("Enter a string: ");
    fgets (input, sizeof(input), stdin);

    int shortFormIndex = 0;
    for (char *c = input; *c; c++) {
        if (isspace(*c) || !isalpha(*c)) {
            continue;
        }

        if (shortFormIndex == 0 || isspace(*(c - 1))) {
            shortForm[shortFormIndex++] = toupper(*c);
        }
    }

    shortForm[shortFormIndex] = '\0';

    printf ("\nShort form of %s is %s", input, shortForm);

    return 0;
}
/*
Output:
Enter a string : Computer Science
Short form is CS
*/
