#include <stdio.h>

int find_character(const char *str, char c){
	for(int i = 0; i < sizeof(str); ++i){
		if(*(str + i) == c){
			return i;
		}
	}
	return -1;
}
