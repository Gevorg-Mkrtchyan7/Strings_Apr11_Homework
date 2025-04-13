#include <stdio.h>
#include <stdlib.h>

int compare_strings(const char *str1, const char *str2){
	for(int i = 0; i <= sizeof(str1); ++i){
		if(*(str1 + i) == *(str2 + i)){
		}else if(*(str1 + i) > *(str2 + i)){
			return 1;
			exit(-1);
		}else if(*(str1 + i) < *(str2 + i)){
			return -1;
			exit(-1);
		}
	}
	return 0;
}
