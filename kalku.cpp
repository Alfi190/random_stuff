#include <iostream>
using namespace std;

int main(){
	float a, b;
	float bah, rang, li, gi;
	cout << "Kalkulator simple by Vro\n";
	cout<< "Masukkan angka pertama: ";
	cin>> a;
	cout<< "Masukkan angka kedua: ";
	cin>> b;
	
	bah = a + b;
	rang = a - b;
	li = a * b;
	gi = b / a;
	
	
	cout<< "Hasil jumlah: " << bah << endl;
	cout<< "Hasil kurang: " << rang << endl;
	cout<< "Hasil kali: " << li << endl;
	cout<< "Hasil bagi: " << gi << endl;
	return 0;
}
