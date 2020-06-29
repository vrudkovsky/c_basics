// #include <stdio.h>
int mx_strlen(const char *s) {
	int length = 0;

	for (int i = 0; s[i] != 0; i++) {
		length++;
	}
	return length;
}

// int main()
// {
// 	/* code */
// 	int n = mx_strlen("qwertyuiopasdfghjklqwertyuiopasdfghjklqwertyuiopasdfghjklqwertyuiopasdfghjklqwertyuiopasdfghjklqwertyuiopasdfghjklqwertyuiopasdfghjkl");

// 	printf("%d \n", n);

// 	return 0;
// }
