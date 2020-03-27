#include "etudiant.h"
#include <iostream>
using namespace std;



int main()
{
	etudiant etudiant;
	string nom;
	int note1, note2;
	cout << "Quelle est votre nom ?"<< endl;
	cin >> nom;
	etudiant.setNomEtudiant(nom);
	cout << "Quelle est votre note sur 20 ?"<<endl;
	cin >> note1;
	etudiant.setNote1(note1);
	cout << "Quelle est votre note sur 10 ?"<<endl;
	cin >> note2;
	etudiant.setNote2(note2);
	etudiant.afficher(nom, note1, note2);
	return 0;
}