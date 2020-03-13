//#include<iostream>
//using namespace std;
//class Second;
//class First
//{
//	int a;
//public:
//	First(int a)
//	{
//		this->a=a;
//	}
//	friend Second;
//};
//class Second
//{
//	public:
//		Second()
//		{
//		}
//		void fun1(First& ref)
//		{
//			cout<<ref.a<<endl;
//		}
//		void fun2(First& ref)
//		{
//			cout<<ref.a<<endl;
//		}
//		void fun3(First& ref)
//		{
//			cout<<ref.a<<endl;
//		}
//};
//void main()
//{
//	First obj1(50);
//	Second o;
//	o.fun1(obj1);
//	o.fun2(obj1);
//	o.fun3(obj1);
//}