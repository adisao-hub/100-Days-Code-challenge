#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to month abbreviation
    char monthName[4];

    if(strcmp(month, "01") == 0) strcpy(monthName, "Jan");
    else if(strcmp(month, "02") == 0) strcpy(monthName, "Feb");
    else if(strcmp(month, "03") == 0) strcpy(monthName, "Mar");
    else if(strcmp(month, "04") == 0) strcpy(monthName, "Apr");
    else if(strcmp(month, "05") == 0) s
