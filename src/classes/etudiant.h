#include <iostream>
using namespace std;


class etudiant
{
public:
	etudiant();
	//Contructeur par defaut

	etudiant(int note1, int note2);
	//Constructeur

    ~etudiant();
    //Destructeur par defaut

   	int calculerMoyenne(); 
   	//Permet de calculer la moyenne de l'etudiant

   	void afficher();
   	//affichage de sortit


private:
    int m_note1;
    int m_note2;
    char nomEtudiant[20];
};