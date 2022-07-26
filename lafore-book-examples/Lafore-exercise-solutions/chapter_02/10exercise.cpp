// 10exercise.cpp
// запросить у пользователя денежную сумму в устаревшей системе Великобритании (фунты, шиллинги, пенсы)
// и выдать на экран эту сумму в действующей системе (фунты, пенсы)
// (имеем в виду, что в старой системе 1 фунт = 20 шиллингов = 240 пенсов, в новой: 1 фунт = 100 пенсов)

#include <iostream>
#include <iomanip> // для манипулятора setprecision
using namespace std;

int main()
{
	float f, s, p; // количество фунтов, шиллингов и пенсов (устаревшая система)
	float sum; // денежная сумма в действующей денежной системе Великобритании

	cout << "В устаревшей денежной системе Великобритании:" << endl;
	cout << "Введите количество фунтов: "; cin >> f;
	cout << "Введите количество шиллингов: "; cin >> s;
	cout << "Введите количество пенсов: "; cin >> p;
	cout << endl << "В действующей денежной системе Великобритании:" << endl;
	// учитывая, что 1 фунт в устаревшей системе равен 1 фунту в действующей системе,
	// приведем все заданные пользователем величины к фунтам и сложим
	sum = f + s/20 + p/240;
	// символ фунта представлен управляющей последовательностью \xA3
	// так как А3 — шестнадцатиричный код этого символа в Юникоде;
	// чтобы символ отобразился в консоли, шрифт в консоли должен быть юникодным,
	// например, шрифт "Lucida Console" или "Consolas"
	cout << "Десятичных фунтов: \xA3" << fixed << setprecision(2) << sum << endl;

	return 0;
}