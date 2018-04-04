#include <stdio.h>

template <typename T>
bool compare(T* const A, T* const B)
{
	return (*A > *B) ? true : false;
}

template <typename T>
void swap(T* const A, T* const B)
{
	T temp = *A;
	*A = *B;
	*B = temp;
}

template <typename T>
bool signOfNumber(T* const A)
{
	return (*A > 0) ? true : false;
}

int main()
{
	int a = 7;
	int b = 5;

	int* aPtr = &a;
	int* bPtr = &b;

	if (compare(aPtr, bPtr))
	{
		printf_s("a more, then b\n");
	}
	else
	{
		printf_s("b more, then b\n");
	}

	swap(aPtr, bPtr);
	printf_s("a = %d, b = %d\n", *aPtr, *bPtr);

	if (signOfNumber(aPtr))
	{
		printf_s("a is positive number\n");
	}
	else
	{
		printf_s("a is negative number\n");
	}

	return 0;
}