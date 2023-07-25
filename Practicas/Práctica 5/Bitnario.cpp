#include<string>
#include<iostream>
using namespace std;
int main(){
	cout << "Ingrese un numero en base decinal: ";
	int n;
	string b;
	cin >> n;
	if (n>0) {
		while (n>0) {
			if (n%2 == 0) {
				b ="0"+b;
			} else {
				b = "1"+b;
			}
			n = (int) n/2;
			
		}
	} else if (n == 0){
		b = "0";
	} else {
		b = "No se puede realizar.";
	}
	cout << "\n El resultado es: " << b;
	return 0;
}
