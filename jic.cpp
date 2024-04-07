/ class per
//{
//public:
//	//per operator+(per& s)  //成员函数重载   也可以设置全局变量重载
//	//{
//	//	per te;
//	//	te.a = this->a + s.a;
//	//	te.b = this->b + s.b;
//	//	return te;
//	//}
//	//
//	int a;
//	int b;
//};
////per operator+(per& s1,per&s2)    //成员函数或全局函数重载有后 可以直接 per s3=s1+s2；没有不行
////										而且函数名1要用编译器给的 operator+
////{
////	per te;
////	te.a = s1.a + s2.a;
////	te.b = s2.b + s2.b;
////	return te;
////}
//per operator+(per& s1,int num)    //成员函数或全局函数重载有后 可以直接 per s3=s1+s2；没有不行
//										//而且函数名1要用编译器给的 operator+
//{
//	per te;
//	te.a = s1.a + num;
//	te.b = num +s1.b;
//	return te;
//}
//void test()
//{
//	per s1;
//	s1.a = 10;
//	s1.b = 10;
//	per s2;
//	s2.a=10;
//	s2.b=10;
//	//per s3 = s1.operator+(s2);//本质是这样调用的，但有了这么个编译器给的东西就可以简化成下面
//	//per s3 = s1 + s2;
//	per s4 = s1 + 100;//
//	cout << s4.a << endl;
//	cout << s4.b << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//class pe
//{
//public:
//	pe(int a)
//	{
//		age = a;
//	}
//	int age;
//	pe& operator++()
//	{
//		age++;
//		return *this;
//	}
//	pe operator++(int)
//	{
//		pe t = *this;
//		age++;
//		return t;
//	}
//};
//void re()
//{
//	pe p(18);
//	p++;
//	cout << p.age<< endl;
//}
//int main()
//{
//	re();
//	return 0;
//}