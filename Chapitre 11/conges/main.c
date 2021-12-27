#include <stdio.h>

#define YEAR 365
#define WEEKS 52
#define WORKINGDAYS 5
#define HOLIDAYS 6


int main()
{
    int joursOff;
    int workingWeeks = WEEKS-HOLIDAYS;

    joursOff = YEAR-(workingWeeks*WORKINGDAYS);
    printf("Ma guitariste préférée a %d jours off par an.\n", joursOff);
    return 0;
}
