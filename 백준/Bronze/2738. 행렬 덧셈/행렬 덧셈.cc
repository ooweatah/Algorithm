#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int *A[N];
    int *B[N];
    
    for(int i = 0 ; i < N ; i++){
        A[i] = (int*)malloc(sizeof(int)*M);
        B[i] = (int*)malloc(sizeof(int)*M);
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j<M ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j<M ; j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j<M ; j++){
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    return 0;    
}