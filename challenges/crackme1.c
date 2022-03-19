#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Usage: %s <code>\n", argv[0]);
		return 1;
	}
	if (atoi(argv[1]) == 422022)
		printf("Bien joué\n");
	else
		printf("Perdu\n");
	return 0;
}
