#include <stdio.h>

void count_vowels_and_consonants(char*, int, int);

int main(){
	char str[20] = {};
	int vowles = 0;
	int consonants = 0;
	fgets(str, sizeof(str), stdin);
	count_vowels_and_consonants(str, vowles, consonants);
}
