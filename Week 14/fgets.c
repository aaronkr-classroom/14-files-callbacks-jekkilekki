// fgets.c
#include <stdio.h>

int main(void) {
	char temp[100]; // 파일에서 문자열을 입력 받을 배열
	FILE* p_file = fopen("long.txt", "rt");
	if (NULL != p_file) {
		while(NULL != fgets(temp, sizeof(temp), p_file)) {
			printf("%s", temp);
		}
		fclose(p_file);
	}

	return 0;
}