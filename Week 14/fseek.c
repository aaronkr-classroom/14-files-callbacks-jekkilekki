// fseek.c
#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* p_file = fopen("jin.dat", "rb");
	if (NULL != p_file) {
		fseek(p_file, 0, SEEK_END); // 파일의 끝으로 이동
		file_size = ftell(p_file); // 현재 파일 위치로 파일의 키그를 구함
		printf("파일 크기: %d\n", file_size);
		fclose(p_file);
	}

	return 0;
}