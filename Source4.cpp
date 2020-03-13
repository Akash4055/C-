#include<iostream>
using namespace std;
class base
{
	char* name;
	public:
		base()
		{
			
		}
		base(char* ptr)
		{
			name=ptr;
		}
		char* getname()
		{
			return name;
		}
		virtual void disp()
	{
		cout<<name<<endl;
	}
};
class sub:public base
{
	float num;
public:
	sub()
	{
	}
	sub (float k)
	{
		num=k;
	}
	sub (char* name,float k):base(name)
	{
		num=k;
	}
	void disp()
	{
		cout<<num<<endl;
	}
};
void main()
{
		sub s;

sub *s1=new sub(40);
sub *s2=new sub("a",4.5);
s1->disp();
s2->base ::disp();

}