#include <stdio.h>
#include <stdlib.h>

void calc(unsigned int *N);

int main()
{
    unsigned int N;

    do {
      printf("Enter N (N>=1): ");
      scanf("%u", &N);
    } while (N < 1);

    system("cls");
    printf("N   value\n\t");
    calc(&N);
    printf("\n");
    getch();
}

void calc(unsigned int *N){

double value;
double sum;

for (double n = 1; n <= *N; n++){
    value = n/2 + 2/n;
    sum += value;
    printf("\n%.0f = %.3f\t", n, value);
    }
    printf("\n\nsum = %.3f", sum);

}
