//Leap years in a range

#include <stdio.h>

int leapYear (int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);  // Check if year is a leap year
}

int main() {
    printf ("Find leap years in a range \n");

    int startYear, endYear;
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    //validate input range
    if (startYear > endYear) {
        printf ("Invalid range. Start year should be less than or equal to the end year.\n");
        return 1;
    }

    int count = 0;
    for (int i = startYear; i <= endYear; i++) {
        if (leapYear(i)) {
            count++;
        }
    }

    printf("The number of leap years in the range %d to %d is %d\n", startYear, endYear, count);
    
    return 0;
}