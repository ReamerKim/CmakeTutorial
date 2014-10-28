#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"

#if defined(USE_MYMATH)
#include "MathFunctions.h"
#endif

int main(int argc, char *argv[])
{
    if( argc < 2)
    {
        fprintf(stdout, "Usage: %s number\n",argv[0]);
        return 1;
    }

    double inputValue = atof(argv[1]);
#if defined(USE_MYMATH)
    double outputValue = mysqrt(inputValue);
    printf("mysqrt\r\n");
#else
    double outputValue = sqrt(inputValue);
    printf("sqrt\r\n");
#endif
    fprintf(stdout,"The square root of %g is %g\n", inputValue, outputValue);
    return 0;
}
