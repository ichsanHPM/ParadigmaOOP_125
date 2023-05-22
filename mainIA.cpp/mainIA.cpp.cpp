#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu1 = new ibu("Dini");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak1 = new anak("Tono");
	anak* varAnak2 = new anak("Rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu1->tambahAnak(varAnak1);
	varIbu1->tambahAnak(varAnak2);
	varIbu1->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu1->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu1;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
