#include<iostream>
using namespace std;

int addition(int x, int y)
{
	return x + y;
}

void calculator(int n1, int n2, int (*pcallback)(int, int))
{
	cout << (*pcallback)(n1, n2) << endl;
}

int main()
{
	calculator(10, 20, addition);
}