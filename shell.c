#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <unistd.h>

void open_shell() {
	printf("Welcome to my shell!");
	printf("%*s\n\n", 80, "*");
}

int main(int argc, char **argv) {
	char* dirname = malloc(256*sizeof(char));

	open_shell();
	getcwd(dirname, 256);
	printf("Current directory: %s\n>>>\n", dirname);
	return 0;
}
