#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int a[30] = {0};
    int stdnum;
    
    for(int i = 0 ; i < 28 ; i++){
        scanf("%d",&stdnum);
        a[stdnum-1]=true;
    }
    for(int i = 0 ; i < 30 ; i++){
        if(a[i]==false){
            printf("%d",i+1);
            printf("\n");
        }
    }
    return 0;
}