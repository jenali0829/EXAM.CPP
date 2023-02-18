#include<iostream>

using namespace std;

class RBI{
	
	public:
		void s1(){
		cout<<"class RBI"<<endl;	
		}
};
class SBI:public RBI{
	void s2(){
		cout<<"class SBI"<<endl;
	}
};
class BOB:public RBI ,public SBI{
	void s3(){
		cout<<"class BOB"<<endl;
	}
};
class ICICI:public RBI ,public SBI, public BOB{
	void s4(){
		cout<<"class ICICI"<<endl;
	}
};
main(){
	ICICI obj;
	obj.s1();
}

