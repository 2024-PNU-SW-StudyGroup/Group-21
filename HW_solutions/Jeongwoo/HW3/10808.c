#include <stdio.h>

int main(void) {
	char alpha[26] = {0,};
	char word[101];
	scanf("%s", word);
	for(int i = 0; word[i] != '\0'; i++) {
		alpha[word[i]-97]++;
	}
	for(int i = 0; i < 26; i++) {
		printf("%d ",alpha[i]);
	}
	printf("\n");
	return 0;
}