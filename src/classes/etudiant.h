class etudiant
{
public:
	etudiant();
	//Contructeur par defaut
    ~etudiant();
    //Destructeur par defaut
   	int calculerMoyenne(); 
   	//Permet de calculer la moyenne de l'etudiant
   	void afficher();
   	//affichage de sortit

private:
    int note1;
    int note2;
    char nomEtudiant[20];
};