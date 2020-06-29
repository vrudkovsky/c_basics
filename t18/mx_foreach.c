// #include <unistd.h>

// void mx_printchar(char c) {
//     write(1, &c, 1);
// }
  
// void mx_printint(int n) {
//     long num = n;

//     if(num < 0){
//         mx_printchar('-');
//         num *= -1;
//     }

//     if(num > 9){
//         mx_printint(num / 10);
//     }

//     mx_printchar(num % 10 + 48);
// }

void mx_foreach(const int *arr, int size, void (*f)(int)) {
	  for (int i = 0; i < size; i++) {
	    	f(arr[i]);
	  }
}

// int main() {
// 	int array[] = {1, 2, 3, 4, 5};
// 	mx_foreach(array, 5, mx_printint);
// 	return 0;
// }
