#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char S[1000] = ""; 
    scanf("%s",S);
    scanf("%d",&i);
    char *a = (char*)malloc(sizeof(char)*(1+strlen(S)));
    
    //for(char x = 0 ; x < strlen(S) ; x++){
    //    a[x] = S[x]; 
    //}
    
    
    printf("%c", S[i-1]);
    return 0;
    
}