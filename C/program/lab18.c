//Number of vowels in a string

#include <stdio.h>
#include <string.h>

int main() {
    printf ("Find vowels in a string\n");
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0;str[i]!='\0';i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;
        }
    }
    
    printf("Number of vowe l:%d\n",count);

    return 0;
}