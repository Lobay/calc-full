#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
double div(double a, int b) {
	double c;
	c = a / b;
	return c;
}
int mod(int a, int b) {
	cout « "Введите значение модуля" « endl;
	int m;
	cin » m;
	return ((a - b) % m);
}
double pow(double a) {
	cout « "Введите значение степени" « endl;
	int p;
	cin » p;
	double a1 = a;
	if (p > 0) {
		while (p > 1) {
			a = a1 * a;
			p--;
		}
	} else {
		if (p < 0) {
			a = 1 / a;
			while (p < -1) {
				a = a / a1;
				p++;
			}
		} else
			a = 1;
	}
	return a;
}
int rol(int a) {
	return (a « 1);
}
int ror(int a) {
	return (a » 1);
}
int nott(int a) {
	return (!a);
}
int andd(int a, int b) {
	return (a & b);
}
int orr(int a, int b) {
	return (a | b);
}
int main() {
	while (1) {
		cout « endl
		« "Выберите оператор [+, -, *, /, %, ^, !, &, |, <, >]" « endl;
		char operand;
		cin » operand;
		int a, b;
		switch (operand) {
			case '+':
				cout « "Введите перове число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « add(a, b) « endl;
				break;
			case '-':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « sub(a, b) « endl;
				break;
			case '*':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « mul(a, b) « endl;
				break;
			case '/':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				if (b != 0) {
					cout « div(double(a), b) « endl;
				} else
					cout « "Ошибка. Деление на ноль" « endl;
				break;
			case '%':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « mod(a, b) « endl;
				break;
			case '^':
				cout « "Ведите число" « endl;
				cin » a;
				cout « pow((double)a);
				break;
			case '<':
				cout « "Введите число" « endl;
				cin » a;
				cout « rol(a) « endl;
				break;
			case '>':
				cout « "Введите число" « endl;
				cin » a;
				cout « ror(a) « endl;
				break;
			case '!':
				cout « "Введите число" « endl;
				cin » a;
				cout « nott(a) « endl;
				break;
			case '&':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « andd(a, b) « endl;
				break;
			case '|':
				cout « "Введите первое число" « endl;
				cin » a;
				cout « "Введите второе число" « endl;
				cin » b;
				cout « orr(a, b) « endl;
				break;
			default:
				cout « "Ошибка" « endl;
		}
	}
	return 0;
}
