#include<iostream>

using namespace std;

main(){
	
	int age;
	char a[]=("a person cannot be able to vote if his/her age is less than 18");
	
	cout<<"Enter age"<<endl;
	cin>>age;
	
	try{
		if(age<18){
			cout<<"age"<<endl;
			
		}
		else{
			throw a;
			cout<<" cannot be able to voye"<<endl;
		}
	}
	catch
		(char arr[]){
		}
		
		
		
		
	
		
	
}
