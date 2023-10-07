#include <stdio.h>
#include <stdlib.h>

// i부터 j까지 가는데 j/2만큼만 swap하면 된다.
// i + j/2 까지만 하면 된다.
// j에서 i를 뺀 값이 j-i/2만큼만 swap한다.
int main()
{
    int M,N;
    int i,j,idx;
    int temp;
    scanf("%d %d",&N,&M);
    int *a = (int*)malloc(sizeof(int)*N);
    
    
    for (int k = 0; k < N; k++) {
        a[k] = k + 1;
    }
    
    for(int k = 0 ; k < M ; k++){
        scanf("%d %d",&i,&j);
        idx = j;
        for(int x = i ; x <= i+(j-i)/2 ; x++){
            temp = a[x-1];
            a[x-1] = a[idx-1];
            a[idx-1] = temp;
            idx--;
            
        }
    }
    for(int k = 0 ; k < N ; k++){
        printf("%d ",a[k]);
    }
    free(a);
    return 0;
}