#include <stdio.h>

void reverse_string(char *str){
	for(int i = sizeof(str); i >= 0; --i){
		printf("%c", *(str + i)); 	
	}
	printf("\n");
}
