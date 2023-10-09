#include <stdio.h>

int main()
{
/*    int a[7];
    int sum[7] = {0};
    // 1 1 2 2 2 8
    for(int i = 0 ; i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i <= 1 ; i++){
        if(a[i]==1) a[i] = 0;
        else if(a[i]>1){
            while(a[i]!=1)
            {
                a[i] = a[i] + sum[i];
                sum[i]--;
            }
            
        }
        else if(a[i]<1){
            while(a[i]!=1)
            {
                a[i] = a[i] +sum[i];
                sum[i]++;
            }
        }
    }
    for(int i = 2 ; i <= 4 ; i++){
        if(a[i]==1) a[i] = 0;
        else if(a[i]>2){
            while(a[i]!=2)
            {
                a[i] = a[i] + sum[i];
                sum[i]--;
            }
            
        }
        else if(a[i]<2){
            while(a[i]!=1)
            {
                a[i] = a[i] +sum[i];
                sum[i]++;
            }
        }
    }
    if(a[5]==8) a[5] = 0;
        else if(a[5]>8){
            while(a[5]!=8)
            {
                a[5] = a[5] + sum[5];
                sum[5]--;
            }
            
        }
        else if(a[5]<8){
            while(a[5]!=8)
            {
                a[5] = a[5] +sum[5];
                sum[5]++;
            }
        }
    for(int i = 0 ; i < 6 ; i++){
        printf("%d ",&sum[i]);
    }
    return 0;
*/
    int arr[7] = { 1, 1, 2, 2, 2, 8 };
    int a;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a);
        printf("%d ", arr[i] - a);
    }

    return 0;
}