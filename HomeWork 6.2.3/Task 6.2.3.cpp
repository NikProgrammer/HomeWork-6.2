#include <stdio.h>
#include <stdlib.h>
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

template <typename T>
int copy(T* const A, T* B, int size)
{
	if ((A == nullptr) || (B == nullptr))
	{
		return -1;
	}

	for (size_t i = 0; i < size; i++)
	{
		*(B + size - 1 - i) = *(A + i);
	}

	return 0;
}
template <typename T>
int display(T* const A, int size)
{
	if (A == nullptr)
	{
		return -1;
	}

	for (size_t i = 0; i < size; i++)
	{
		printf_s("%d ", *(A + i));
	}
	printf_s("\n");

	return 0;
}

int main()
{
	srand(time(NULL));
	int size = 10;
	int a[10] = {0};
	int b[10] = {0};

	int *aPtr = a;
	int *bPtr = b;

	printf_s("Array a:\n");
	fill(aPtr, size);
	display(aPtr, size);
	copy(aPtr, bPtr, size);
	printf_s("Array b:\n");
	
	display(bPtr, size);

	return 0;
}