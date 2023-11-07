#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ceilFloorRound(double num);
int main()
{
    ceilFloorRound(123.456789);
    ceilFloorRound(123.499999);
    ceilFloorRound(123.500001);
    return 0;
}

void ceilFloorRound(double num){
    printf("Ceil of the %lf is %lf\n", num, ceil(num));
    printf("Floor of the %lf is %lf\n", num ,floor(num));

    double round = num * 100 + 0.5;

    int convert= (int)round;

    round = (double)convert / 100.0;

    printf("Rounded number %lf is %.2lf\n\n",num, round);
}
