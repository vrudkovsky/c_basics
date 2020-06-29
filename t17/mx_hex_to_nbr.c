#include <stdlib.h>
// #include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex) {

    int len = 0;
    unsigned long result = 0;
    unsigned long base = 1;

    if (hex != NULL)
          while (hex[len])
            len++;
    else
        return result;

    for (int i = 0; i <= len; i++) {
        if (hex[len - i] >= '0' && hex[len - i] <= '9') {
            result = result + (hex[len - i] - 48) * base;
            base = base * 16;
        }
        if (hex[len - i] >= 'A' && hex[len - i] <= 'F') {
            result = result + (hex[len - i] - 55) * base;
            base = base * 16;
        }
        if (hex[len - i] >= 'a' && hex[len - i] <= 'f') {
            result = result + (hex[len - i] - 87) * base;
            base = base * 16;
        }
    }

    return result;
}

// int main()
// {
//     printf("%ld\n", mx_hex_to_nbr("C4"));
//     printf("%ld\n", mx_hex_to_nbr("FADE"));
//     printf("%ld\n", mx_hex_to_nbr("ffffffffffff"));

//     return 0;
// }
