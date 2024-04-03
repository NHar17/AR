// 十二。 友元
//class gay
//{
//public:
//	gay()
//	{
//
//	}
//	void ty()
//	{
//		cout << "jj" << endl;
//	}
//};
//class per
//{
//	friend void te(per& o);//全局函数
//	friend class gay; //类
//	friend void gay::ty();//gay的成员函数
//public:
//	per()
//	{
//		age = 12;
//		a = 2;
//	}
//	int age;
//private:
//	int a;
//};
////全局函数做友元
//void te(per &o)
//{
//	cout << o.age << endl;
//	cout << o.a << endl;
//
//}
//
////成员函数类外定义
//gay::gay(){ }
//void gay::ty(){ }
//
//int main()
//{
//	per o;
//	te(o);
//	return 0;
//}
//