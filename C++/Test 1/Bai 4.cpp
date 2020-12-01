#include<iostream>
using namespace std;

int main(){
	float a, b, x;
	cout<<"Nhap 2 so thuc a, b: ";
	cin>>a>>b; 
	if(a==0){
		if(b==0) cout<<"\nVO SO NGHIEM";
		else cout<<"\nVO NGHIEM";
	}
	else {
		x=-b/a;
		cout<<"\nx="<<x;
	}
	
	return 0;
}
