#include <iostream>

using namespace std;

enum trans{samochod, autobus, pociag, tramwaj, samolot, statek};

int main() {
	
	int wyb = trans(0);
	
	switch(wyb)
	{
		case samochod:
			cout<<"samochod"<<endl;
			break;
		case autobus:
			cout<<"autobus"<<endl;
			break;
		case pociag:
			cout<<"pociag"<<endl;
			break;
		case tramwaj:
			cout<<"tramwaj"<<endl;
			break;
		case samolot:
			cout<<"samolot"<<endl;
			break;
		case statek:
			cout<<"statek"<<endl;
			break;
	}
	
	
	return 0;
}
