#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *mx_strnew(const int size) {

	char *str = NULL;
	int i = 0;

	if (size < 0 || !(str = (char *)malloc((size + 1) * sizeof(char))))
		return NULL;
	        
	while (i < size + 1) 
		str[i++] = '\0';

	return str;
}

// int main() {
// 	char *string = mx_strnew(10);
// 	for (int i = 0; i < 10; ++i) {
// 		string[i] = '@';
// 	}
// 	printf("%s\n", string);
// 	return 0;
// }
