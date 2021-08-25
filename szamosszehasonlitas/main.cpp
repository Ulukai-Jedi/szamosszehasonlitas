#include <iostream>

int main() {
	int szam1 = 0; //deklaráljuk a két változónkat
	int szam2 = 0;

	std::cout << "Kerem adjon meg ket szamot" << std::endl; //meg kell mondani a User-nek, hogy mit akar tõle a program

	std::cin >> szam1; //A user szépen beadja a két számot
	std::cin >> szam2;

	if (szam1 == szam2) { //Itt csinálunk egy teszt sort, hogy történjen valami, ha netán egyenlõ!
		std::cout << "A ket szam egyenlo, kerem adjon meg uj szamokat" << std::endl;
		std::cin >> szam1;
		std::cin >> szam2;
	}
	
	if (szam1 > szam2) { //Elsõ feltétel
		std::cout << "Az elso szam nagyobb, mint a masodik " << szam1 << " > " << szam2 << std::endl;
	}
	else { //Második, "egyébként" feltétel
		std::cout << "A masodik szam nagyobb, mint az elso " << szam2 << " > " << szam1 << std::endl;
	}
	return 0;
}