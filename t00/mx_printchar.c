#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1 );
}

// int main()
// {
// 	/* code */
// 	mx_printchar('A');

// 	return 0;
// }
