#include <stdio.h>

int main() {
    enum Months {
        JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };
    
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
    
    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("Month %d has %d days\n", m, days[m]);
    }
    return 0;
}
