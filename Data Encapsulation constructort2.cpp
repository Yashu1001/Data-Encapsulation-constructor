#include<iostream>
using namespace std;

class cafe{
	
	private:
		
		int cafe_id;
		char cafe_name[100];
		int cafe_type;
		int cafe_rating;
		char cafe_location[100];
		int cafe_establish_year;
		int cafe_staff_quantity;
	public:
	   
	   void settercafe(){
	   	    cout<<"ENTER THE cafe_id= ";
		cin>>cafe_id;
			cout<<"ENTER THE cafe_name= ";
		cin>>cafe_name;
			cout<<"ENTER THE cafe_type= ";
		cin>>cafe_type;
			cout<<"ENTER THE cafe_rating= ";
		cin>>cafe_rating;
			cout<<"ENTER THE cafe_location= ";
		cin>>cafe_location;
			cout<<"ENTER THE cafe_establish_year= ";
		cin>>cafe_establish_year;
			cout<<"ENTER THE cafe_staff_quantity= ";
		cin>>cafe_staff_quantity;
	   }
	   void gettercafe(){
	   	
	   	cout<<"ENTER THE cafe_id= "<<this->cafe_id<<endl;
	   	cout<<"ENTER THE cafe_name= "<<this->cafe_name<<endl;
	   	cout<<"ENTER THE cafe_type= "<<this->cafe_type<<endl;
	   	cout<<"ENTER THE cafe_rating= "<<this->cafe_rating<<endl;
	   	cout<<"ENTER THE cafe_location= "<<this->cafe_location<<endl;
	   	cout<<"ENTER THE cafe_establish_year= "<<this->cafe_establish_year<<endl;
	   	cout<<"ENTER THE cafe_staff_quantity= "<<this->cafe_staff_quantity<<endl;  	
	   	
	   }	
};

main(){
	
	cafe a1,a2;
	cafe a[100];
	
	int i,n;
	
	for(i=0;i<=n;i++){
	    a[i].settercafe();		
	}
	for(i=0;i<=n;i++){
		a[i].gettercafe();
	}
}


