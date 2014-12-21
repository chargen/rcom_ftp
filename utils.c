#include "utils.h"

int find_nth(char *str, char c, int start, int nth){

	if(start >= strlen(str)) return NOT_FOUND;

	for(; str[start] != NULL_CHAR; start++){
		if(str[start] == c){
			if(nth == ONE) return start;
			else nth--;
		}
	}

	return NOT_FOUND;
}

char* str_cpy(char *orig, int start, int end){

	int length = end - start;
	char *dest = malloc(length + ONE);

	memcpy(dest, &orig[start], length);
	dest[length] = NULL_CHAR;

	return dest;

}
