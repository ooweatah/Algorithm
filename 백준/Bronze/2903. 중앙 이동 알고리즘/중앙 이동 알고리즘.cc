#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int N,num;
    int *arr;
    scanf("%d",&N);
    int temp = 0;
    arr = (int*)malloc(sizeof(int)*(N+1));
    arr[0] = 4;
    int width;
    
    for (int temp = 1; temp <= N; temp++) {
        width = 2*(sqrt(arr[temp-1])) -1;
        arr[temp] = pow(width, 2);
        
    }
    //num = arr[N];
    num = arr[N];
    
    printf("%d",num);
    free(arr);
    return 0;
}