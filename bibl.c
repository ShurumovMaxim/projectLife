#include <math.h>
#include <stdlib.h>
#include "bibl.h"

Square func1(float a, float b, float c)
{
    Square result;
    int f = 0;
    float D, x1 = 0, x2 = 0;
    D = b * b - 4 * a * c;
    
    if (D == 0)
    {
        x1 = -b / (a * 2);
        f = 1;
        result.state = 1;
        result.res1 = x1;
        return result;
    }
    
    if(D < 0)
    {
        result.state = 0;
        return result;
        
    }
    
    if(D > 0)
    {
        x1 = (-b + sqrt(D))/(2 * a);
        x2 = (-b - sqrt(D))/(2 * a);
        f = 0;
        result.state = 2;
        result.res1 = x1;
        result.res2 = x2;
        return result;
    }
    
}
