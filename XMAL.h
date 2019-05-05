#ifndef XMAL_H_OUYJY
#define XMAL_H_OUYJY
#include <stdio.h>
#define MAX


//code by ouyjy
//2019 5/4
typedef struct
{
    FILE* stream;
    char* content;
    void (*Analysis)();
}XAML;

void UnSerialize();
void ConfigureFile(XAML *xaml,FILE *files);
void analysis();
/*vector<Data> v_data;
    Xaml(std::ifstream &_f):file(_f){content=new char[1250];};
    void unserialize();
    void init();
  double analysis(string name);
*/


#endif
