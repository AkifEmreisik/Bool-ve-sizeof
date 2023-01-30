#include<iostream>

int main(){
	int a=5;
	int b=4;
	int c=9;
	bool toplam;
	if(a+b==c)
		toplam=true;
	if(toplam=true)
		std::cout<<"Adam"<< std::endl;
	else
		std::cout<<"hadi"<< std::endl;
	if(sizeof(a)>0)  // a nýn boyutu 4 mü a nýn boyutunu yazdý 
		std::cout<<sizeof(a)<< std::endl;
	return 0;
}
