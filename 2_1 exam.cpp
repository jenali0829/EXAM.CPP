#include<iostream>

using namespace std;

class user{
	
	private:
		
		int id;
		int salary;
		int contact;
		char name[100];
		char role[100];
		char experience[100];
		char comp_name[100];
		char address[100];
		char email[100];
		
		public:
			void setter(){
				cout<<"Enter id";
				cin>>id;
				
				cout<<"Enter salary";
				cin>>salary;
				
				cout<<"Enter contact";
				cin>>contact;
				
				cout<<"Enter name";
				cin>>name;
				
				cout<<"Enter role";
				cin>>role;
				
				cout<<"Enter experience";
				cin>>experience;
				
				cout<<"Enter comp name";
				cin>>comp_name;
				
				cout<<"Enter address";
				cin>>address;
				
				cout<<"Enter email";
				cin>>email;
			}
			
			void getter(){
				cout<<"id";
				cout<<"salary";
				cout<<"contact";
				cout<<"name";
				cout<<"role";
				cout<<"experience";
				cout<<"comp_name";
				cout<<"address";
				cout<<"email";
				
			}
};
main(){
	
	user obj;
	
	obj.setter();
	obj.getter();
}
