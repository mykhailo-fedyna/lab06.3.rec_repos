//lab6.3(rec).cpp
#include <iostream>
#include <iomanip>
using namespace std;
void Input(int* k, const int size, int i)
{
	cout << "k[" << i << "] = ";
	cin >> k[i];

	if (i < size - 1)
		Input(k, size, i + 1);
	else
		cout << endl;
}
void Print(int* k, const int size, int i)
{
	cout << setw(4) << k[i];
	if (i < size - 1)
		Print(k, size, i + 1);
	else
		cout << endl;
}

int main()
{
	const int n = 6;
	int k[n];
	Input(k, n, 0);
	Print(k, n, 0);
	return 0;
}