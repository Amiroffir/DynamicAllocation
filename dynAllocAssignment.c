#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
	int num;
	FILE* TARGIL = fopen("C://Users//Amir Offir//Desktop//Allocation Instructions.txt", "r");
	if (TARGIL == NULL)
	{
		printf("NULL - File is empty");
	}
	else
	{
		char ch = fgetc(TARGIL);
		num = ch - '0';
		while (ch != EOF)
		{

			ch = fgetc(TARGIL);
			if (ch == 'c') {
				char* ptr2 = malloc(num * sizeof(char));
				char* origin2 = ptr2;
				printf("Please enter %d charachters\n", num);
				for (int i = 0; i < num; i++) {
					scanf(" %c", &*ptr2);
					ptr2++;
				}
				free(origin2);
			}

			else if (ch == 'i') {

				int* ptr = malloc(num * sizeof(int));
				int* origin = ptr;
				printf("Please enter %d numbers\n", num);
				for (int i = 0; i < num; i++) {
					scanf(" %d", &*ptr);
					ptr++;
				}
				free(origin);
			}
			else {
				num = ch - '0';
			}
		}
		fclose(TARGIL);
	}
	return 0;
}