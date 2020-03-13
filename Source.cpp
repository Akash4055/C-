//#include<iostream>
//#include<string.h>
//using namespace std;
//class Second;
//class First
//   {
//      char str1[20];
//   public :
//	  First (char a[])
//	  {
//		  strcpy(str1,a);
//	  }
//	  void setStr1(char a[])
//	  {
//		  strcpy(str1,a);
//	  }
//	  string getstr1()
//	  {
//		  return str1;
//	  }
//	  friend void attach(First &, Second&);
//   };
//   class Second
//   {
//      char str2[20];
//public :
//	Second (char b[])
//	  {
//		  strcpy(str2,b);
//	  }
//	  void setStr2(char a[])
//	  {
//		  strcpy(str2,a);
//	  }
//	  string getstr2()
//	  {
//		  return str2;
//	  }
//	  friend void attach(First &,Second&);
//   };
//void attach(First& ref1,Second& ref2)
//{
//	char str3[20];
//	strcpy(str3,ref1.str1);
//	strcat(str3,ref2.str2);
//	cout<<str3<<endl;
//}
//void main()
//{
//	First c1("akash");
//	Second c2("dhawale");
//	attach(c1,c2);
//}