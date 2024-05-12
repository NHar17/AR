#define max 100
#include <iostream>
using namespace std;

void swap(char c[], int p, int q)
{
	char a = c[p - 1];
	c[p - 1] = c[q - 1];
	c[q - 1] = a;
}
void jiao(char c[], int p, int len)
{
	if (p == len)
	{
		cout << c << endl;
		return;
	}
	int pam[max] = { 0 };
	int i = 0;
	for (i = p; i <= len; i++)
	{
		if (pam[c[i - 1]] == 0)
		{
			pam[c[p - 1]] = 1;
			swap(c, p, i);
			jiao(c, p + 1, len);
			swap(c, p, i);
		}
	}
}
int main()
{
	char c[] = "ACA";
	jiao(c, 1, strlen(c));
	system("pause");
	return 0;
}