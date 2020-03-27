#include "etudiant.h"
#include <iostream>
using namespace std;
#include <string>

etudiant::etudiant()
{
    m_nomEtudiant = "Inconnu";
    m_note1=10000;
    m_note2=-200;
}

etudiant::etudiant(int note1, int note2, string nomEtudiant)
{
    this->m_note1 = note1;
    this->m_note2 = note2;
    this->m_nomEtudiant = nomEtudiant;
}

etudiant::~etudiant()
{
    
}

int etudiant::getNote1() const
{
    return m_note1;
}

void etudiant::setNote1(int val)
{
    m_note1 = val;
}

int etudiant::getNote2() const
{
    return m_note1;
}

void etudiant::setNote2(int val)
{
    m_nomEtudiant = val;
}

int etudiant::getNomEtudiant() const
{
    return m_note1;
}

void etudiant::setNomEtudiant(string nom)
{
    m_nomEtudiant = nom;
}


float etudiant::calculerMoyenne(int note1, int note2)
{	
	float moyenne = note1;

	moyenne += note2*2;

	moyenne = moyenne/2;

	return moyenne;
}

void etudiant::afficher(string nom, int note1, int note2)
{
 	cout << nom << " : " << note1 << "/20, " << note2<< "/10\n";
 	cout << "Moyenne :" << calculerMoyenne(note1, note2)<< endl; 
}

void etudiant::debug()
{
	cout<< "Nom "<<this->m_nomEtudiant<<" note1 "<<this->m_note1<<" note2 "<<this->m_note2;
}