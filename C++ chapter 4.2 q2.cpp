#include<iostream>
using namespace std;

class A{
	
	public:
		
		int a = 10;
		
};

class B:public A{
	
	public:
	    int b = 20;
	    
};

class C:public A{
	
	public:
		int c = 30;
		
};

class D:public B , public C{
	
	public:
		int d = 40;
		
};

main()
{
	D d1;
	cout<<"A = "<<d1.B::a<<endl;
	cout<<"B = "<<d1.b<<endl;
    cout<<"C = "<<d1.c<<endl;
	cout<<"D = "<<d1.d<<endl;
	cout<<"A + B + C + D = "<<d1.C::a+d1.b+d1.c+d1.d<<endl;
}
