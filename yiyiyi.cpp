#include <iostream>
using namespace std;
 

//ʮ�����ļ�����
#include <fstream>
using namespace std;
#include<string>
int main()
{
	//ofstream ofs;
	//ofs.open("hello.txt", ios::out);
	//ofs << "�ư�Ȼ" << endl << "��������" << endl;
	//ofs.close();

	//ifstream ifs;
	//ifs.open("hello.txt", ios::in);
	//// one
	///*char ba[100];
	//while (ifs >> ba)
	//{
	//	cout << ba << endl;
	//}*/

	////two
	///*char ax[100] = { 0 };
	//while (ifs.getline(ax,sizeof(ax)))
	//{
	//	cout << ax<< endl;
	//}*/

	////three
	///*string ax;
	//while (getline(ifs, ax))
	//{
	//	cout << ax << endl;
	//}*/

	////four
	//char ax;
	//while ( (ax= ifs.get()) != EOF)
	//{
	//	cout << ax;
	//}

	/*fstream fs;
	fs.open("hello.txt", ios::out);
	fs << "�ư�Ȼ" << endl << "��������";
	fs.close();
	fs.open("hello.txt", ios::in);
	string b;
	while (getline(fs, b))
	{
		cout << b << endl;
	}
	fs.close();*/

	//������
	//char b[100] = {"�ư�Ȼmm����"};
	//ofstream ofs;
	//ofs.open("hello.txt", ios::out | ios::binary);
	//ofs.write(b, sizeof(b)); //ǰһ�����������ǣ�const char*�ͣ����Ǿ�ǿת��
	//ofs.close();

	////������
	//char a[100];
	//ifstream ifs;
	//ifs.open("hello.txt", ios::in | ios::binary);
	//ifs.read(a, sizeof(a)); //ǰһ����ҲҪchar* ����const
	//cout << a << endl;
	//ifs.close();

	system("pause");
	return 0;
}