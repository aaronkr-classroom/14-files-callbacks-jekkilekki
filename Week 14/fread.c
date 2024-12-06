// fread.c
#include <stdio.h>

int main(void) {
	int data1;
	int data2;
	int data_list[5];
	FILE* p_file = fopen("jin.dat", "r"); // ¶Ç´Â "rb"

	if (NULL != p_file) {
		fread(&data1, sizeof(int), 1, p_file);
		fread(&data2, sizeof(int), 1, p_file);
		fread(data_list, sizeof(int)*5, 1, p_file);
		// int data1 = 0x00000412;
		printf("file data: %d (0x%04x)\n", data1, data1);
		// int data2 = 100;
		printf("file data: %d\n", data2);
		// int data_list[5] = {0,1,2,3,4}
		for (int i = 0; i < 5; i++) {
			printf("data_list: %d\n", data_list[i]);
		}
	}

	return 0;
}