//#include<iostream>
//using namespace std;
//class number
//{
//	int num;
//public:
//	explicit number(int k)
//	{
//		num=k;
//	}
//	number()
//	{
//		num=0;
//	}
//	void disp()
//	{
//		cout<<num<<endl;
//	}
//	operator int()
//	{
//		return num;
//	}
//	void operator+= (int num)
//	{
//		this->num=this->num+num;
//	}
//	bool operator!= (number& ref)
//	{
//		if(num!=ref.num)
//			return true;
//		else
//			return false;
//	}
//	bool operator < (number& ref)
//	{
//		if(num<ref.num)
//			return true;
//		else
//			return false;
//	}
//	number& operator * (number& ref)
//	{
//		return number(num*ref.num);
//	}
//};
//void main()
//{
//	number n1(20);
//	int k=-n1;
//	cout<<k<<endl;
//
//	n1+=5;
//	n1.disp();
//	
//	number n2(35);
//	if(n1!=n2)
//		{
//			cout<<"Not equal"<<endl;
//		}
//	else
//		{
//			cout<<"equal"<<endl;
//		}
//	
//	number n3(12);
//	if(n3 < n1)
//	{
//		cout<<"N3 is less than n1"<<endl;
//	}
//	else
//	{
//		cout<<"N3 is greater than n1"<<endl;
//	}
//	
//	number n4;
//	n4=n2*n3;
//	n4.disp();
//}