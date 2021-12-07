#include "pch.h"
#include "adresse.h"



System::String^ adresse::Select(void)
{
	return "SELECT [Adresse], [Nun de rue], [Num d'étage] FROM [DB_P6].[dbo].[TB_P6]";
}
System::String^ adresse::Insert(void)
{
	return "INSERT INTO TB_P6 (Adresse, Num de rue, Num d'étage) VALUES('" + this->Adresse + "','" + this->NumRue + "','" + this->NumEtage + "); ";

}
System::String^ adresse::Delete(void)
{
	return "";
}
System::String^ adresse::Update(void)
{
	return "";
}
void adresse::setAdresse(System::String^ Adresse)
{
	this->Adresse = Adresse;
}
void adresse::setNumRue(int NumRue)
{
	this->NumRue = NumRue;
}
void adresse::setNumEtage(int NumEtage)
{
	this->NumEtage = NumEtage;
}




int adresse::getNumEtage(void) { return this->NumEtage; }
int adresse::getNumRue(void) { return this->NumRue; }
System::String^ adresse::getAdresse(void) { return this->Adresse; }