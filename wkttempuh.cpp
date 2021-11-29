#include <iostream>
using namespace std;

int main (){
	float v,s,t;
	cout<<"MENGHITUNG WAKTU TEMPUH"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Masukan Jarak (Km)         : ";
	cin>>s;
	cout<<"Masukan Kecepatan (m/detik) : ";
	cin>>v;
	t=s/v;
	cout<<"Waktu Tempuh (Jam)         : "<<t<<endl;
}
