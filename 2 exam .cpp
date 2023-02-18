#include<iostream>


using namespace std;
class hotel{
	private:
		static int hotel_id;
		static char hotel_name[100];
		static char hotel_establish_year[100];
		
		public:
			void setter();
				void getter;
 void setter(){
				
				cout<<"Enter id";
				cin>>hotel_id;
				
				cout<<"Enter name";
				cin>>hotel_name;
				
				cout<<"Enetr establish year";
				cin>>hotel_establish_year;
			}
			void getter(){
				cout<<"hotel_id"<<endl;
				cout<<"hotel_name"<<endl;
				cout<<"hotel_establish_year"<<endl;
			}
	
};
main(){
	hotel obj;
	 obj.setter();
	 obj.getter();
}
