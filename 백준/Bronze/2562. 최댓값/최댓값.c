#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 0;
    int a[9];

    for(int i = 0 ; i < 9 ; i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i = 1 ; i < 9 ; i++){
        if(max < a[i]){
            max = a[i];
            index = i;
        }
    }
    printf("%d\n",max);
    printf("%d",index+1);
    return 0;
}