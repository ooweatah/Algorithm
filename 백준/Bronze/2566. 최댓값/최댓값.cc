#include <stdio.h>

int main()
{
    int arr[9][9] = {0};
    int max = 0 ;
    int tempi=1,tempj=1 ;
    
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i < 9 ; i++ ){
        for(int j = 0 ; j < 9 ; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                tempi = i+1;
                tempj = j+1;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",tempi,tempj);
}