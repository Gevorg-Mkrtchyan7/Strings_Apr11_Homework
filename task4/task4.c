#include <stdio.h>
#include <string.h>

void count_vowels_and_consonants(const char *str, int vowels, int consonants){
	int space = 0;
	for(int i = 0; i <= strlen(str) - 1; ++i){
		int a = *(str + i);
		if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'o' || a == 'O' || a == 'i' || a == 'I' || a =='u' || a == 'U'){
			++vowels;
		}
		if(a == 32){
			++space;
		}
	}
	printf("%d \n", vowels);
	printf("%lu \n", strlen(str) - vowels - space - 1);
}
