#include <stdio.h>
#include <string.h>

void genpass(char *username) {
	int i;
	int userlen = strlen(username);
	int tmp;
	while (i < userlen/2) {
		tmp = username[i];
		username[i] = username[userlen-i-1];
		username[userlen-i-1] = tmp;
		i++;
	}
}

int main() {
	char username[255];
	char userpass[255];
	printf("Username: ");
	scanf("%s", username);
	printf("Password: ");
	scanf("%s", userpass);
	genpass(username);
	strcat(username, "42");
	if (strcmp(username, userpass) == 0) {
		printf("Bien joué\n");
	}
	else {
		printf("Perdu\n");
	}
	return 0;
}
