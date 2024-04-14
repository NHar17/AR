#include <iostream>
using namespace std;
 

//十六。文件操作
#include <fstream>
using namespace std;
#include<string>
int main()
{
	//ofstream ofs;
	//ofs.open("hello.txt", ios::out);
	//ofs << "黄安然" << endl << "你妈死了" << endl;
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
	fs << "黄安然" << endl << "妈妈死了";
	fs.close();
	fs.open("hello.txt", ios::in);
	string b;
	while (getline(fs, b))
	{
		cout << b << endl;
	}
	fs.close();*/

	//二进制
	//char b[100] = {"黄安然mm死了"};
	//ofstream ofs;
	//ofs.open("hello.txt", ios::out | ios::binary);
	//ofs.write(b, sizeof(b)); //前一个参数必须是（const char*型，不是就强转）
	//ofs.close();

	////读就是
	//char a[100];
	//ifstream ifs;
	//ifs.open("hello.txt", ios::in | ios::binary);
	//ifs.read(a, sizeof(a)); //前一个参也要char* 不用const
	//cout << a << endl;
	//ifs.close();

	system("pause");
	return 0;
}