#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char S[10000];
    int B;
    int result = 0;
    
    scanf("%s %d",S,&B);
    
    int len = strlen(S);
    
    for(int i = 0 ; i < len ; i++){
        int stonum;
        if(S[i]>='0'&&S[i]<='9'){
            stonum = S[i] - '0';
        }
        else if(S[i]>='A'&&S[i]<='Z'){
            stonum = S[i] +10 -'A';
            
        }
        result = result + stonum * pow(B,len-1-i); // 문자의 길이 
    }
    printf("%d",result);
    return 0;
}