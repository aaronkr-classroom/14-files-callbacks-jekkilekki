// final_hint.c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
	char* name[12];
	// ...
} Student;

Student students[MAX_SIZE];
int std_count = 0;

int main(void) {
	FILE* file;
	char* filename = "name.dat";
	fopen_s(&file, filename, "r");
	std_count = fread(students, sizeof(Student), MAX_SIZE, file);
	fwrite(students, sizeof(Student), std_count, file);
	fclose(file);
}