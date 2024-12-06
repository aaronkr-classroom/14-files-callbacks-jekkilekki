// fwrite.c
#include <stdio.h>

int main(void) {
	int data1 = 0x00000412,
		data2 = 100,
		data_list[5] = { 0,1,2,3,4 };
	FILE* p_file = fopen("jin.dat", "w"); // wbµµ ½áµµ µÊ
	if (NULL != p_file) {
		fwrite(&data1, sizeof(int), 1, p_file);
		fwrite(&data2, sizeof(int), 1, p_file);

		// fwrite(data_list, sizeof(int), 5, p_file);
		// fwrite(data_list, sizeof(int) * 5, 1, p_file);
		fwrite(data_list, sizeof(data_list), 1, p_file);

		fclose(p_file);
	}

	return 0;
}