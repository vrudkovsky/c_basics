// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count){

    int left;
    int right;
    int middle;

    left = 0;
    right = size - 1;

    while(left <= right){
        *count += 1;
        middle = (left + right)/2;

        if(mx_strcmp(arr[middle], s) == 0)
            return middle;
        else if(mx_strcmp(arr[middle], s) < 0)
            left = middle + 1;
        else
            right = middle - 1;
    }

    *count = 0;
      
    return -1;
}

// int main(){
//    int count = 0;
//    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//    printf("%d\n", mx_binary_search(arr, 6, "aBz", &count));
//    printf("%d\n", count);
//    return 0;
// }
