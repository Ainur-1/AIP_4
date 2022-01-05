#include <iostream>
#include <cmath>

using namespace std;
int ex_1();
int ex_2();
int ex_3();

int main()
{
	ex_1();
	ex_2();
	ex_3();
}

int ex_1() {
	unsigned short int x;

	cout << "x = "; //255 - 1111 1111
	cin >> x;

	x = x & 43690; // 170 - 1010 1010
	cout << x << endl;

	return 0;
}

int ex_2() {
	unsigned short int x, m1, m2;

	cout << "x = "; // 100 - 110 0100 
	cin >> x;

	m1 = x & 0xAAAA; // 1010 1010 1010 1010 - не чётные
	m2 = x & 0x5555; //  101 0101 0101 0101 - чётные
	x = (m1 >> 1) + (m2 << 1);

	cout << x << endl; // 152 - 1001 1000

	return 0;
}

int ex_3() {
	unsigned short int A, k;

	cout << "A = "; // 100 - 110 0110
	cin >> A;
	cout << "k = "; // 3
	cin >> k;

	A = A | (1 << k);

	cout << A << endl; // 108 - 110 1110

	return 0;
}