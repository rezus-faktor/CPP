// 4exercise.cpp
// вывести на экран любимое стихотворение
// для разбиения на строчки использовать подходящую управляющую последовательность

#include <iostream>
using namespace std;

int main()
{
	char newline = '\n'; // подходящая управляющая последовательность

	cout << "Это джаз декабря. Это джаз" << newline;
	cout << "наступившей зимы, чей мотив" << newline;
	cout << "обозначил излом моих фраз" << newline;
	cout << "и издерганность рифм." << newline;
	cout << "(c) -- отрывок из стихотворения Дианы Эфендиевой --" << newline;

	return 0;
}