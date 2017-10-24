#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int LuasRumah;
	
	double LuasParket = 193*1215;
	
	double Box = LuasParket*8/1000000;
	
	double JumlahBox, Parket, Pasang, Total;
	cout<<"Luas Rumah        :  ";
	cin>>LuasRumah;
	cout<<"-------------------------------- \n";
	
	cout<<"Luas Rumah        : "<<LuasRumah<<" m2"<<endl;
	cout<<"Luas 1 Box Parket : "<<Box<<" m2"<<endl;
}
