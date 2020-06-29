// #include <stdio.h>
void mx_sort_arr_int(int *arr, int size) {
    int temp;
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// int main() {
//     int arr[] = {3, 55 , -11, 1, 0, 4, 22};
//     mx_sort_arr_int(arr, 7);
//     for(int i = 0; i < 7; ++i) {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }
