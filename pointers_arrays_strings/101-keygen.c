#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomPassword(char *password, int length) {
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789";
	int charsetSize = sizeof(charset) - 1;

	for (int i = 0; i < length; i++) {
		password[i] = charset[rand() % charsetSize];
	}
	
	password[length] = '\0';
}

int main() {
	srand(time(NULL));

	int passwordLength = 8;
	char password[passwordLength + 1];

	generateRandomPassword(password, passwordLength);

	printf("Generated Password: %s\n", password);
	return 0;
}
