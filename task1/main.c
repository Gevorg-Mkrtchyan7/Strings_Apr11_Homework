#include <stdio.h>

int string_length(const char*);


int main(){
	char str[30] = {};
	fgets(str, sizeof(str), stdin);
	string_length(str);
}
