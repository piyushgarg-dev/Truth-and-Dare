#include <stdio.h>
#include <stdlib.h>
#include "truth.c"
#include "dare.c"

int main()
{
    int choice;
    int cont=1;
    printf("Truth And Dare by Piyush Garg \n");

    do{
        
        printf("\n\n");
    printf("Choose One \n");
    printf("1. Truth \n");
    printf("2. Dare \n");
    printf("0. Exit \n");
    printf(" --> ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: system("@cls||clear");
        choice_truth();
        
        break;

        case 2: system("@cls||clear");
        choice_dare();
        
        break;

        case 0: cont=0;
        break;

        default:    main();
        break;
    }

    }
    while(cont);
    system("@cls||clear");
    printf("Thankyou! Hope You Enjoyed\n");


    return 0;
}