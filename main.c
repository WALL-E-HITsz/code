#include <stdio.h>
#include <stdlib.h>
#include "XMAL.h"

int main()
{
    FILE * stream;
    XAML xaml;

    if( (stream=fopen("configure.txt","r"))==NULL)
        printf("error to open file");
    else
        ConfigureFile(&xaml,stream);

    printf("%d,%d",xaml.stream,stream);
    UnSerialize(&xaml);


    return 0;
}
