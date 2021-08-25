#include <iostream>

int main() {
	int szam1 = 0;
	int szam2 = 0;

	std::cout << "Kerem adjon meg ket szamot" << std::endl;

	std::cin >> szam1;
	std::cin >> szam2;

	if (szam1 == szam2) {
		std::cout << "A ket szam egyenlo, kerem adjon meg uj szamokat" << std::endl;
		std::cin >> szam1;
		std::cin >> szam2;
	}
	
	if (szam1 > szam2) {
		std::cout << "Az elso szam nagyobb, mint a masodik " << szam1 << ">" << szam2 << std::endl;
	}
	return 0;
}