#include <unistd.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {

	int i = 1;

	for(; i < argc; i++){
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
