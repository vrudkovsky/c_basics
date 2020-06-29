// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {
	while (*s1 && *s1 == *s2) {
		s1++;
		s2++;
	}
	
	return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

// int main() {
// 	char *str1 = "ewnvgnv";
// 	char *str2 = "wcjejgcw";
// 	int a = mx_strcmp(str1, str2);
// 	printf("%d\n", a);
// 	return 0;
// }
