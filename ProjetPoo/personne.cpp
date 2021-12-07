#include "pch.h"
#include "personne.h"



System::String^ Composant::personne::Select(void)
{
	return "SELECT [Id], [Nom], [Prenom], [Date_Embauche] FROM [ProjetPOOBDDGRP8].[dbo].[Personnel]";
}
System::String^ Composant::personne::Insert(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->Nom + "','" + this->Prenom + "');";
}
System::String^ Composant::personne::Delete(void)
{
	return "";
}
System::String^ Composant::personne::Update(void)
{
	return "";
}
void Composant::personne::setId(int Id)
{
	this->Id = Id;
}
void Composant::personne::setNom(System::String^ nom)
{
	this->Nom = nom;
}
void Composant::personne::setPrenom(System::String^ prenom)
{
	this->Prenom = prenom;
}
int Composant::personne::getId(void) { return this->Id; }
System::String^ Composant::personne::getNom(void) { return this->Nom; }
System::String^ Composant::personne::getPrenom(void) { return this->Prenom; }
