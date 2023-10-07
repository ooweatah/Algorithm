#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;
    int i,j;
    int temp;
    scanf("%d %d",&N,&M);
    int *a = (int*)malloc(sizeof(int)*N);
    for(int i = 0 ; i < N ; i++){
        a[i] = i+1; // 1,2,3,4,5
    }
    while(M>0){
            
        scanf("%d %d",&i,&j);
        temp = a[i-1];
        a[i-1] = a[j-1];
        a[j-1] = temp;
        M--;
    }
    for(int k = 0; k<N;k++){
        printf("%d ",a[k]);
    }
    return 0;
}
