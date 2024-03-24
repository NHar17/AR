#include <iostream>
using namespace std;

int n;
void swap(char a[], int p, int i) {

	char c = a[p - 1];
	a[p - 1] = a[i - 1];
	a[i - 1] = c;
}
void fun(char a[], int p, int q)
{
	if (p == q) {
		cout << a << endl;
		n++;
	}
	for (int i = p; i <= q; i++)
	{
		swap(a, p, i);
		fun(a, p + 1, q);
		swap(a, p, i);
	}
}
int main()
{
	char a[20] = "0";
	cin >> a;
	fun(a, 1, strlen(a));
	cout << n << endl;
	return 0;
}