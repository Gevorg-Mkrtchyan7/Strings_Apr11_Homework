#include <stdio.h>

void replace_character(char *str, char old_char, char new_char){
	for(int i = 0; i < sizeof(str); ++i){
		if(*(str + i) == old_char){
			*(str + i) = new_char;
		}
	}
	puts(str);
}
