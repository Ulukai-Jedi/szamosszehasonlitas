#include <iostream>

int main() {
	int szam1 = 0; //deklar�ljuk a k�t v�ltoz�nkat
	int szam2 = 0;

	std::cout << "Kerem adjon meg ket szamot" << std::endl; //meg kell mondani a User-nek, hogy mit akar t�le a program

	std::cin >> szam1; //A user sz�pen beadja a k�t sz�mot
	std::cin >> szam2;

	if (szam1 == szam2) { //Itt csin�lunk egy teszt sort, hogy t�rt�njen valami, ha net�n egyenl�!
		std::cout << "A ket szam egyenlo, kerem adjon meg uj szamokat" << std::endl;
		std::cin >> szam1;
		std::cin >> szam2;
	}
	
	if (szam1 > szam2) { //Els� felt�tel
		std::cout << "Az elso szam nagyobb, mint a masodik " << szam1 << " > " << szam2 << std::endl;
	}
	else { //M�sodik, "egy�bk�nt" felt�tel
		std::cout << "A masodik szam nagyobb, mint az elso " << szam2 << " > " << szam1 << std::endl;
	}
	return 0;
}