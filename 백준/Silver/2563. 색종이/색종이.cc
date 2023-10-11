#include <stdio.h>

int sum = 0;
int arr[101][101];
int visited[101][101];
void Calculate_sum(int x,int y)
{

    for(int i = x ; i < x + 10 ; i++){
        for(int j = y ; j < y + 10 ; j++){
            if(visited[i][j]==1) continue;
            arr[i][j]++;
            visited[i][j]++;
            sum++;
        }
    }
}

int main()
{
    int N;
    int x,y ;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d %d",&x,&y);
        Calculate_sum(x,y);
    }
    printf("%d",sum);
    return 0;
}