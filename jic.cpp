/ class per
//{
//public:
//	//per operator+(per& s)  //��Ա��������   Ҳ��������ȫ�ֱ�������
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
////per operator+(per& s1,per&s2)    //��Ա������ȫ�ֺ��������к� ����ֱ�� per s3=s1+s2��û�в���
////										���Һ�����1Ҫ�ñ��������� operator+
////{
////	per te;
////	te.a = s1.a + s2.a;
////	te.b = s2.b + s2.b;
////	return te;
////}
//per operator+(per& s1,int num)    //��Ա������ȫ�ֺ��������к� ����ֱ�� per s3=s1+s2��û�в���
//										//���Һ�����1Ҫ�ñ��������� operator+
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
//	//per s3 = s1.operator+(s2);//�������������õģ���������ô�����������Ķ����Ϳ��Լ򻯳�����
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