#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <Windows.h>
#include <ctime>
 
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
int display(T* const A, size_t items)
{
	if (A == nullptr)
	{
		return -1;
	}
	for (size_t i = 0; i < items; i++)
	{
		printf_s("%2d ", *(A+i));
	}
	return 0;
}

int swap(int *xptr, int *yptr)
{
	if ((xptr == nullptr) || (yptr == nullptr))
		return -1;

	int temp = *xptr;
	*xptr = *yptr;
	*yptr = temp;

	return 0;
}
template<typename T>
int reverse(T* array, size_t number)
{
	
	int swap(int *xptr, int *yptr);
	if (array == nullptr)
	{
		return -1;
	}

	for (size_t i = 0; i < (number / 2); i++)
	{
		swap((array+i), (array + (number - 1 - i)));
	}
	return 0;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int a[] = {0};
	int *aPtr = a;

	fill(aPtr, 10);
	printf_s("Исходный массив:\n");
	display(aPtr, 10);
	reverse(aPtr, 10);
	printf_s("\nИзмененный массив:\n");
	display(aPtr, 10);

	return 0;
}