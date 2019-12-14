#include <iostream>
#include <fstream>

using namespace std;


void czytaj(){
	fstream odczyt("zapis33.txt", ios::in);
	if(odczyt.good()){
		string napis;
		
		cout<< "strudenci uczelni to: " <<endl;
		
		while (!odczyt.eof()){
			getline(odczyt, napis);
			cout << napis << endl;
		}
	}
}

 void pisz(){
 	fstream zapis( "zapis33.txt", ios::out);
 	if( zapis.good())
 	{
 		//zapis do pliku
 		zapis << "cos tam" ;
 		zapis << endl;
 		zapis << "i tak dalej ..";
 		zapis.flush();
	 }
 }
int main() {
	return 0;
}
