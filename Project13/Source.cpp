#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\tЗАДАНИЕ 1";
	int arr[3][3]{};
	int n;
	std::cout << "\nнапишите первый элемент массива";
	std::cin >> n ;
	arr[0][0] = n;
	arr[0][1] = n * 2;
	arr[0][2] = arr[0][1] * 2;
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "\tЗАДАНИЕ 2";
	int arra[3][3]{};
	int v;
	std::cout << "\nнапишите первый элемент массива";
	std::cin >> v;
	arra[0][0] = v;
	arra[0][1] = v +1;
	arra[0][2] = arra[0][1] + 1;
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << arra[i][j] << " ";
		}
		std::cout << std::endl;
	}




	return 0;

}