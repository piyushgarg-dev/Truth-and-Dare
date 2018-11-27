#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int choice_dare()
{
    int random;
    //void tostring(char [], int);
    char id[15]="";
    char ch[1000];
    char *p;
  
    FILE *fp;
    fp=fopen("dare.txt","r");
    printf("Please Complete the Dare : \n");

    random=rand()%10;
    //tostring(id, random);
    sprintf(id, "%d", random);

    while(!feof(fp))
    {
        fgets(ch,1000,fp);
        p=strstr(ch,id);
        if(p)
        {
            printf("\n");
            puts(ch);
        
        }
    }
    fclose(fp);
    return 0;
}