#include <stdio.h>
#include <stdlib.h>
int main()
{
    int X,N;
    
    scanf("%d %d",&N,&X);
    int *a = (int*)malloc(sizeof(int)*N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < N ; i++){
        if(a[i]<X){
            printf("%d ",a[i]);
        }
    }
    return 0;
}