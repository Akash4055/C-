//#include<iostream>
//using namespace std;
//class Hour
//{
//	private:
//		float hr;
//	public:
//		 Hour(float k)
//		{
//			hr=k;
//			cout<<"i am const"<<endl;
//		}
//		void disp1()
//		{
//			cout<<hr<<endl;
//		}
//
//};
//class Minute
//{
//	private:
//		int mnt;
//	public:
//		Minute(int k)
//		{
//			mnt=k;
//			cout<<"i am  min const"<<endl;
//		}
//		void disp()
//		{
//			cout<<mnt<<endl;
//		}
//		operator Hour()
//		{
//			return Hour(mnt/60);
//		}
//};
//void main()
//{
//	Minute m(600);
//	Hour h(6);
//	Hour h1=m;
//	h1.disp1();
//}