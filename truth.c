#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int choice_truth()
{
    int random;
    //void tostring(char [], int);
    char id[15]="";
    char ch[1000];
    char *p;
  
    FILE *fp;
    fp=fopen("truth.txt","r");
    printf("Please Speak The Truth : \n");

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