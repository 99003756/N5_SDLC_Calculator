#include <check.h>

char*  breaker(char *str)
{
    
    int i,a=0,j,k=0;
   for(i=0;i<l;i++)
    {
        if(str[i]=='$')
        {
            a=i;
        }
    }
    for(j=a;str[j]!=';';j++)
    {
       s1[k]=str[j];
       k++;
    }
    //printf(";");
    return s1;
}

