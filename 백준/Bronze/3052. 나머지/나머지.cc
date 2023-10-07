#include <stdio.h>
#include <stdlib.h>

// 10개가 있어. 0번부터 9번까지 순회하는데 만약에 나눠진 값이 같으면 1씩 빼면 돼
// 
int main()
{
    int k;
    int count = 10;
    int a[10] = {0};
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < 10 ; i++){
        k = i+1;
        while(k<10)
        {
            if(a[i]%42==a[k]%42)
            {
                count--;
                break;
            }
            else
            {
                k++;
            }
        }
    }
    printf("%d",count);
    return 0;
}