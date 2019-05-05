#include "XMAL.h"
#include <malloc.h>
#define MAX 1000
void analysis()
{
;
}
void UnSerialize(XAML *xaml)
{
    while(!feof(xaml->stream))
    {
        fgets(xaml->content,MAX,xaml->stream);

    }
}
void ConfigureFile(XAML *xaml,FILE *files)
{
    xaml->stream=files;
    xaml->Analysis=analysis;

    xaml->content=malloc(sizeof(char)*MAX);
    for(int i=0;i<MAX;++i)
        xaml->content[i]='\0';
}

