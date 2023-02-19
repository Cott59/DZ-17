#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>



double mean(double num1, double num2) {
	double mean;
	mean = (num1 + num2) / 2;
	return mean;
}

double mean_arr(int arr[], const int length) {
	double mean_arr;
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	mean_arr = (double)sum / length;
	return mean_arr;
}
void powers(int num, int power) {
	for (int i = 0; i <= power; i++) {
		std::cout << num << " в степени " << i << " = " << pow(num, i) << '\n';
	}
}
void positive_arr(int arr1[], const int length1) {
	for (int i = 0; i < length1; i++)
		if (arr1[i] < 0)
			arr1[i] *= -1;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	std::cout << " Задача 1 \n";
	std::cout << " Введите два числа ";
	std::cin >> n >> m;
	mean(n, m);
	std::cout <<" Среднее значение этих цифр = "<< mean(n, m) << "\n\n";

	std::cout << " Задача 2 \n";
	const int size2 = 10;
	int arr[size2]{ 3,5,8,2,16,89 };
	for (int i = 0; i < size2; i++)
		std::cout << arr[i] << ' ';
	mean_arr(arr, size2);
	std::cout << " - Ср арифм чисел массива = " << mean_arr(arr, size2) << "\n\n";

	std::cout << " Задача 3 \n";
	int N, M;
	std::cout << " Введите два числа ";
	std::cin >> N >> M;
	powers(N, M);
	std::cout << "\n\n";

	std::cout << " Задача 4 \n";
	const int size4 = 10;
	int arr4[size4];
	srand(time(NULL));
	for (int i = 0; i < size4; i++)
		arr4[i] = rand() % 31 - 15;
	std::cout << "Первоначальный массив \n";
	for (int i = 0; i < size4; i++)
		std::cout << arr4[i] << '\t';
	std::cout << "\n";
	std::cout << "Изменённый массив \n";
	positive_arr(arr4, size4);
	for (int i = 0; i < size4; i++)
		std::cout << arr4[i] << '\t';
	std::cout << "\n\n";


	return 0;
}