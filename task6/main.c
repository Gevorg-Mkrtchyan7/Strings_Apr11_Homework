#include <stdio.h>

void replace_character(char*, char, char);

int main(){
	char str[30] = {};
	char old_char = 0;
	char new_char = 0;
	fgets(str, sizeof(str), stdin);
	scanf(" %c", &old_char);
	scanf(" %c", &new_char);
	replace_character(str, old_char, new_char);
}
