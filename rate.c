//THE POPULATION OF A TOWN IS 1000 THE POPULATION STEADILY INCREASES AT THE RATE OF 10% PER ANUM WHAT WILL BE THE POPULATION AFTER 10 YEARS 
#include <stdio.h>
#include <math.h>

int main() {
    int initial_population = 1000;
    float rate = 10;
    int years = 10;

    
    double future_population = initial_population * pow(1 + rate / 100, years);

    printf("Population after %d years: %.0lf\n", years, future_population);

    return 0;
}
