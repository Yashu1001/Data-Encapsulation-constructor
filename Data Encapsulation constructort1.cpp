#include<iostream>
using namespace std;

class data{
	
	private:
		int comp_id;
		char comp_name[100];
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		char comp_ceo[100];
		
	public:
	   void setterdata(){
	    	cout<<"ENTER THE comp_id= ";
	    	cin>>comp_id;
	    	cout<<"ENTER THE comp_name= ";
	    	cin>>comp_name;
	    	cout<<"ENTER THE comp_staff_quantity= ";
	    	cin>>comp_staff_quantity;
			cout<<"ENTER THE comp_revenue= ";
			cin>>comp_revenue;
			cout<<"ENTER THE comp_import_raw_diamonds= ";
			cin>>comp_import_raw_diamonds;
	    	cout<<"ENTER THE comp_export_diamonds= ";
	    	cin>>comp_export_diamonds;
	    	cout<<"ENTER THE comp_ceo= ";
	    	cin>>comp_ceo;
	    }	
		void getterdata(){
			
			cout<<"ENTER THE comp_id= "<<this->comp_id<<endl;
			cout<<"ENTER THE comp_name= "<<this->comp_name<<endl;
			cout<<"ENTER THE comp_staff_quantity= "<<this->comp_staff_quantity<<endl;
			cout<<"ENTER THE comp_revenue= "<<this->comp_revenue<<endl;
			cout<<"ENTER THE comp_import_raw_diamonds= "<<this->comp_import_raw_diamonds<<endl;
			cout<<"ENTER THE comp_export_diamonds= "<<this->comp_export_diamonds<<endl;
			cout<<"ENTER THE comp_ceo= "<<this->comp_ceo<<endl;
		}	
};

main(){
	
	data a1,a2;
	data a[100];
	
	int i,n;
	
	for(i=0;i<=n;i++){
		a[i].setterdata();
	}

	for(i=0;i<=n;i++){
		a[i].getterdata();
	}	
}




