#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int add(int a, int b) 
{ return a + b; }
int sub(int a, int b) 
{ return a - b; }
int mul(int a, int b) 
{ return a * b; }
double div(double a, int b) 
{
  double c;
  c = a / b;
  return c;
}
int mod(int a, int b) 
{
  cout << "Введите значение модуля" << endl;
  int m;
  cin >> m;
  return ((a - b) % m);
}
double pow(double a) 
{
  cout << "Введите значение степени" << endl;
  int p;
  cin >> p;
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
int rol(int a) 
{ return (a << 1); }
int ror(int a) 
{ return (a >> 1); }
int nott(int a) 
{ return (!a); }
int andd(int a, int b) 
{ return (a & b); }
int orr(int a, int b) 
{ return (a | b); }
int main() {
  while (1) {
    cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
    char x;
    cin >> x;
    int a, b;
    	if (x != '<' || x != '>' || x != '!' || x !='^')
		{
			cout << "Введите 1 число";
			cin >> a;
			cout << "Введите 2 число";
			cin >> b;
		}
		else
		{
			cout << "Введите число";
			cin >> a;
		}
    switch (x) {
      case '+':
        cout << add(a, b) << endl;
        break;
      case '-':
        cout << sub(a, b) << endl;
        break;
      case '*':
        cout << mul(a, b) << endl;
        break;
      case '/':
        if (b != 0) {
          cout << div(double(a), b) << endl;
        } else
          cout << "Ошибка. Деление на 0" << endl;
        break;
      case '%':
        cout << mod(a, b) << endl;
        break;
      case '^':
        cout << pow((double)a);
        break;
      case '<':
        cout << rol(a) << endl;
        break;
      case '>':
        cout << ror(a) << endl;
        break;
      case '!':
        cout << nott(a) << endl;
        break;
      case '&':
        cout << andd(a, b) << endl;
        break;
      case '|':
        cout << orr(a, b) << endl;
        break;
      default:
        cout << "Ошибка" << endl;
    }
  }
  return 0;
