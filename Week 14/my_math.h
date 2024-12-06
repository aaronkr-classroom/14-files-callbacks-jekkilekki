// my_math.h
#pragma once

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*));

// my_math.lib
int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa)
		(*pa)(&a);
	if (NULL != pb)
		(*pb)(&b);

	return a + b;
}
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa)
		(*pa)(&a);
	if (NULL != pb)
		(*pb)(&b);

	return a - b;
}