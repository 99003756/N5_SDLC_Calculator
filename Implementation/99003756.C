#include <check.h>

int main()
{
FILE *fp;
 char str[100];
    fp = fopen("code.txt","r");
    if(fp==NULL)
    printf("Failed opening the text\n");
    else
    printf("Opened successfully\n");
    while(fgets(str,100,fp)!=NULL)
    {
        l = strlen(str);
    }
    printf("\n%d\n",l);
    breaker(str);
    printf("\n%s;",s1);
    fclose(fp);
    return 0;
}



