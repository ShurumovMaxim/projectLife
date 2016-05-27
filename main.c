#include <stdio.h>

#define CTEST_MAIN

// uncomment lines below to enable/disable features. See README.md for details
#define CTEST_SEGFAULT
//#define CTEST_NO_COLORS
//#define CTEST_COLOR_OK

#include "ctest.h"
#include "bibl.h"

int main()
{
    float a, b, c;
    printf("vvedite a: "); scanf("%f", &a);
    printf ("vvedite b: "); scanf("%f", &b);
    printf("vvedite c: "); scanf("%f", &c);
    func1(a, b, c);
    return 0;
    
}


