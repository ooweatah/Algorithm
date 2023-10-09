#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char N[1000001];
    int a[26] = {0};
    scanf("%s",N);
    
    //for(int i = 0; i<strlen(N);i++){
     //   if(N[i]>='a' && N[i]<='z'){
      //      N[i] = N[i] - ('A'-'a');
      //  }
   // }
    for (int i = 0; N[i]; i++) {
        char c = toupper(N[i]); // 대문자를 소문자로 변환
        
            a[c - 'A']++;
        
    }
    int maxCount = 0;
    char maxA = '?';
    
    for(int i = 0 ; i < 26 ; i++){
        if(a[i] > maxCount){
            maxCount = a[i];
            maxA = 'A' + i ; 
        }
        else if(a[i] == maxCount){
            maxA = '?';
        }
    }
    printf("%c",maxA);
    return 0;
}