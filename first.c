//
// Created by Sumit Jha on 06/08/17.
//

/* calculation of simple interest */

#include <stdio.h>

int main()
{
    int p, n;
    float r, si;

    p = 1000;
    n = 3;
    r = 8.5;

    /*formula for simple interest*/
    si = p*r*n/100 ;

    printf("%f\n\n\n\n", si);
    return 0;
}

