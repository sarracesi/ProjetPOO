#include "pch.h"
#include "personnel.h"

System::String^ personnel::Select(void)
{
	return "SELECT [Id], [Nom], [Prenom], [Date_Embauche], [ID_Adresse] FROM [ProjetPOOBDDGRP8].[dbo].[Personnel]";
}
System::String^ personnel::Insert(void)
{
	return "INSERT INTO Personnel (Nom, Prenom, Id_Personnel, ID_Adresse) VALUES('" + this->Nom + "','" + this->Prenom + "','" + this->SuperieurH +"','"+ this->Adresse + "');";

}
System::String^ personnel::Delete(void)
{
	return "";
}
System::String^ personnel::Update(void)
{
	return "";
}

void personnel::setDate_Embauche(System::DateTime^ Date_Embauche)
{
	this->Date_Embauche = Date_Embauche;
}

void personnel::setAdresse(System::String^ Adresse)
{
	this->Adresse = Adresse;
}

void personnel::setSuperieurH(System::String^ SuperieurH)
{
	this->SuperieurH = SuperieurH;
}


System::String^ personnel::getAdresse(void) { return this->Adresse; }
System::String^ personnel::getSuperieurH(void) { return this->SuperieurH; }

System::DateTime^ personnel::getDate_Embauche(void) { return this->Date_Embauche; }


