// 7exercise.cpp
// получить от пользователя вещественное число (температура по Цельсию),
// вычислить и вывести эквивалент температуры по Фаренгейту

#include <iostream>
using namespace std;

int main()
{
	float tempC = 0.0F, tempF = 0.0F; // температура по Цельсию, по Фаренгейту

	cout << "Введите температуру в градусах по Цельсию: ";
	// при вводе суммы дробную часть необходимо отделять точкой
	// если отделить запятой, в tempC попадет только целая часть;
	// отрицательные значения вводить можно (проверил)
	cin >> tempC;
	cout << "Вы ввели: " << tempC << endl;
	tempF = tempC * 9 / 5 + 32;
	cout << "В градусах по Фаренгейту это будет: " << tempF << endl;

	return 0;
}