#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int answer[10000];
    int N,B,index=0;
    scanf("%d %d",&N,&B);
    
    while(N>=B){ // B = 몇진법
        answer[index++] = N%B;
        N /= B; // B진법씩 나눌때마다 index가 1씩 증가 
        
    }
    answer[index] = N;
    
    for(int i = index;i>=0 ; i--){
        if(answer[i]<10) printf("%d",answer[i]);
        else printf("%c",answer[i]-10+'A');
    }
    return 0;
}