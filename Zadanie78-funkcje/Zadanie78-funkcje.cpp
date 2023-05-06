#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <math.h>

using namespace std;

bool cz1(int n)
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
bool liczba1(int a)
{
	if (a / 1 == 1 && a % 1 == 0) {
		return true;
	}
	return false;
}
bool liczba9(int b)
{
	if (b / 9 == 1 && b % 9 == 0) {
		return true;
	}
	return false;
}
bool liczba0(int c)
{
	if ((c / 2 == 1 && c % 2 == 0) || (c / 3 == 1 && c % 3 == 0) || (c / 4 == 1 && c % 4 == 0) || (c / 5 == 1 && c % 5 == 0) || (c/ 6 == 1 && c % 6 == 0) || (c / 7 == 1 && c % 7 == 0) || (c / 8 == 1 && c % 8 == 0)) {
		return true;
	}
	return false;
}
bool wynik(int d,int e, int f)
{
	if (d == 1 && e == 1 && f == 0) {
		return true;
	}
	return false;
}
int main()
{
	int licznik1, licznik9, zle, cyfra, i2;
	for (int i = 2; i <= 12000; i++) {
		i2 = i;
		if (cz1(i)) {
			licznik1 = 0;
			licznik9 = 0;
			zle = 0;
			while (i2 >= 1) {
				cyfra = i2 % 10;
				if (liczba1(cyfra)) {
					licznik1++;
				}
				if (liczba9(cyfra)) {
					licznik9++;
				}
				if (liczba0(cyfra)) {
					zle++;
				}
				i2 /= 10;
			}
			if (licznik1 == 1 && licznik9 == 1 && zle == 0) {
				cout << i << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}