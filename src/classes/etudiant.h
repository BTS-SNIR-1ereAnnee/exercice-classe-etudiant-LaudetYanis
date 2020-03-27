#include <iostream>
using namespace std;
#include <string>

class etudiant
{
public:
	etudiant();
	//Contructeur par defaut

	etudiant(int note1, int note2, string nomEtudiant);
	//Constructeur

    ~etudiant();
    //Destructeur par defaut

    int getNote1() const;

    void setNote1(int val);

    int getNote2() const;
    
    void setNote2(int val);

    int getNomEtudiant() const;

    void setNomEtudiant(string val);
    //getter et setter
   	float calculerMoyenne(int note1, int note2); 
   	//Permet de calculer la moyenne de l'etudiant

   	void afficher(string nom, int note1, int note2);
   	//affichage de sortit
   	void debug();

private:
    int m_note1;
    int m_note2;
    string m_nomEtudiant;
};