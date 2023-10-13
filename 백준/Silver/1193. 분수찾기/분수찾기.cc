#include <stdio.h>

int main()
{
	int direction;
	int N;
	int count = 1;
	int i = 1, j = 1;

	scanf("%d", &N);

	direction = 0; //  0 : 대각 아래로 , 1 : 대각 위로

	while (count != N) {

		if (direction == 0) {
			j++; // 1/2
			count++; // 2
			if (count == N) break;
			while(j > 1) {
				i++;  
				j--; // 2/1
				count++; // 3
				if (j == 1) direction = 1;
				if (count == N) break;
			}
		}
		else {
			i++; // 3/1
			count++; // 4 
			if (count == N) break;
			while(i > 1) {
				i--; 
				j++; // 2/2 
				count++; // 5
				if (i == 1) direction = 0;
				if (count == N) break;
			}
		}
	}
	printf("%d/%d", i, j);
	return 0;
}
