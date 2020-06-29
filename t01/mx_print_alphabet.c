void mx_printchar(char c);

void mx_print_alphabet(void) {
    int i = 65, j = 97;
    while( (i <= 90 && i >= 65) || (j <= 122 && j >= 97)) {
        if (i % 2) mx_printchar(i);
        if (j % 2) mx_printchar(j + 1);
        i++; j++;
    }
    mx_printchar('\n');
}

// int main() {
//     mx_print_alphabet();
//     return 0;
// }
