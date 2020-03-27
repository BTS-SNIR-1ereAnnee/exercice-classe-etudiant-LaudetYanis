#include "etudiant.h"
#include <iostream>
using namespace std;
#include <string>

etudiant::etudiant()
{
    m_nomEtudiant = "Yanis";
    m_note1=10;
    m_note2=0;
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

void etudiant::setNomEtudiant(int val)
{
    m_nomEtudiant = val;
}


float etudiant::calculerMoyenne(float moyenne)
{
	return moyenne;
}

void etudiant::afficher()
{

}

void etudiant::debug()
{
	cout<< "Nom "<<this->m_nomEtudiant<<" note1 "<<this->m_note1<<" note2 "<<this->m_note2;
}