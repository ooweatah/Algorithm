#include <stdio.h>
#include <string.h>
int main()
{
    int N,len;
    char S[1001] = "";
    scanf("%d",&N);
    
    for(int i = 0 ; i < N ; i++){
        scanf("%s",S);
        len = strlen(S);
        printf("%c%c\n",S[0],S[len-1]);
    }
    return 0;
}