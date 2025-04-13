#include <stdio.h>

int compare_strings(const char *str1, const char *str2);

int main(){
	char str1[20] = {};
	char str2[20] = {};
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	compare_strings(str1, str2);
}
