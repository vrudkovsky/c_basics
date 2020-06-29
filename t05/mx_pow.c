// #include <stdio.h>

double mx_pow(double n, unsigned int pow) {
	double result = 1;

	for (unsigned int i = 0; i < pow; i++)
		result *= n;
	return result;
}

// int main(){
//    double num = mx_pow(2, 4);
//    printf("%f", num);
//    return 0;
// }
