#include <iostream>
using namespace std;

int luku1;
int luku2;

void main(void)
{
	cout << "Kirjoita luku 1\n";
	cin >> luku1;
	cout << "Kirjoita luku 2\n";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	else
		cout << "BONGO\n";
}