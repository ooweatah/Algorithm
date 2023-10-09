#include <stdio.h>

int main()
{
    int N;

    scanf("%d",&N);
    // 4 1 4 TRY 1
    // 3 3 3 TRY 2
    // 2 5 2 TRY 3
    // 1 7 1 TRY 4
    // 0 9 0 TRY 5
    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
	    printf(" ");
        }
		    
        for(int j=0;j<2*i+1;j++){
	        printf("*");
        }
        printf("\n");
    }
	
    for(int i=1;i<N;i++){
       for(int j=0;j<i;j++){
	        printf(" ");
       }
	
    for(int j=2*N-1;j>2*i;j--){
         printf("*");
        }
        printf("\n");
    }
    return 0;
}