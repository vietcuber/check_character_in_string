#include <stdio.h>

int main() {
	char string[99];
	int c, count = 0;
	printf("How many 'c' characters appear in the string you just entered?\n");
	printf("Enter a string (less than 100 characters): ");
	fgets(string, 99, stdin);
	printf("Enter a character 'c': ");
	c = getchar();
	for (int i = 0; string[i] != '\0'; i++) {
		if (c != string[i])
			continue;
		count += 1;
	}
	printf("The number of characters '%c' in the string just entered is: %d", c, count);
	return 0;
}