// GL2_1CPP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>






int main()
{
	std::array<int, 10>arr = { 123,44,2,66,43,23,78,24,1,7 };

	for (int i : arr)
	{
		i *= 2;
		std::cout << i << ' ';
	}
	getchar();
	getchar();
	return 0;

}