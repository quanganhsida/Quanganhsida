#include<iostream>
#include<string>
using namespace std;

class car{
	public:
		string brand;
		string model;
		int year;
		car(string x, string y, int z){
			brand=x;
			model=y;
			year=z;
		}
};
int main(){
	car c1("Ford", "Focus", 2013);
	
	car c2("Suzuki", "Vitara", 2004);
	
	car c3("Suzuki", "Vitara", 2014);
	
	cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<"\n";
	cout<<c2.brand<<" "<<c2.model<<" "<<c2.year<<"\n";
	cout<<c3.brand<<" "<<c3.model<<" "<<c3.year;		
	return 0;
}
