int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char *argv[]) {

	int i;
	int j;

	for(i = 1; i < argc; i++) {
		for(j = 1; j < argc - i; j++) {
			if(mx_strcmp(argv[j], argv[j + 1]) > 0) {
				char* temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}

	for(i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}

	return 0;
}
