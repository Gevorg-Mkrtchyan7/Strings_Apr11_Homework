#include <stdio.h>

void reverse_string(char *str);

int main(){
	char str[30] = {};
	fgets(str, sizeof(str), stdin);
	reverse_string(str);
}
