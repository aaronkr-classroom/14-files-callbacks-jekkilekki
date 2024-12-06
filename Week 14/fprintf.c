// fprintf.c
#include <stdio.h>

int main(void) {
	char* string = "World, Hello!";
	short int data = 0xAEFC; // 16진수

	// 쓰기 모드로 텍스트 파일을 오픈함
	FILE* p_file = fopen("hello.txt", "wt");

	if (NULL != p_file) { // 파일 열기에 성공한 경우
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("파일 내용을 이렇게 썼어요!~");

		fclose(p_file);
	}
	return 0;
}