#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isGroupWord(char* word) {
	int alpha[26] = { 0 };

	for (int i = 0; i < strlen(word); i++) {
		if (i > 0 && word[i] != word[i - 1] && alpha[word[i]- 'a']>0) return 0;
		alpha[word[i] - 'a']++;
	}
	return 1;
}



int main()
{
	int N;
	char text[101];
	int answer = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", text);

		if (isGroupWord(text)) {
			answer++;
		}
	}

	printf("%d", answer);
	return 0;
}
