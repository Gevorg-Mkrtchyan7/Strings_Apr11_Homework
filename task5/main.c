#include <stdio.h>

int find_character(char*, char);

int main(){
	char str[30] = {};
	char c = 'a';
	fgets(str, sizeof(str), stdin);
	scanf(" %c", &c);
	find_character(str, c);
}
