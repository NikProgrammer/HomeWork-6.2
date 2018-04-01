#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <Windows.h>
#include <ctime>

template <typename T>
int copy(T *A, T const *B, size_t items)
{
	if ((A == nullptr)||(B == nullptr))
	{
		return -1;
	}
	for ( ; (*A = *B) < items; A++, B++)
	{
		;
	}
	return 0;
}
template <typename T>
int fill(T* A, size_t items)
{
	if (A == nullptr)
	{
		return -1;
	}
	for (size_t i = 0; i < items; i++)
	{
		*(A + i) = rand() % 10;
	}
	return 0;
}
template<typename T>
int display(T* A, size_t items)
{
	if (A == nullptr)
	{
		return -1;
	}
	for (size_t i = 0; i < items; i++)
	{
		printf_s("%2d ", *(A + i));
	}
	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int a[10] = { 0 };
	int* aPtr = a;
	int b[10] = { 0 };
	int* bPtr = b;

	fill(bPtr, 10);
	printf_s("массив B:\n");
	display(bPtr, 10);
	printf_s("\nмассив A до копирования:\n");
	display(aPtr, 10);
	copy(aPtr, bPtr, 10);
	printf_s("\nмассив A после копирования:\n");
	display(aPtr, 10);
	
	
	
	return 0;

}