// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr,int size) {

    int i;
    int j;
    char* temp;
    int counter = 0;

    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(mx_strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }

    return counter;
}

// int main() {
//     char *arr[] = {"abc", "acb", "a"};
//     int a = mx_bubble_sort(arr, 3);
//     printf("%d\n", a);
//     return 0;
// }
