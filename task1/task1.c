#include <stdio.h>

int string_length(const char *str){
	int i = 0;
	while(*(str + i) != '\0'){
		++i;
	}
	return --i;
}
