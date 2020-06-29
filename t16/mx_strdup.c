#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {

	char *duplicate = NULL;

	if (!(duplicate = mx_strnew(mx_strlen(str))))
		return NULL;

	if (!mx_strcpy(duplicate, str))
		return NULL;

	return duplicate;
}

// int main(){
// 	char *string = "Hello";
// 	char *string1 = mx_strdup(string);
// 	printf("%s\n", string1);
// 	return 0;
// }
