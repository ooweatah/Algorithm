#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int i,j,k;
    int N,M; // 바구니 1~N개
    int arr[MAX] = {0};
    scanf("%d %d",&N,&M);
    while(M>0){
        scanf("%d %d %d",&i,&j,&k);
        for(int a = i ; a<=j ; a++){
            arr[a-1] = k;
        }
        M--;
    }
    
    for (int b = 0; b < N; b++) {
        printf("%d ", arr[b]);
    }
    
    return 0;

}