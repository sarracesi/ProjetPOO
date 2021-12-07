#include "pch.h"
#include "service_personnel.h"
#include"acad.h"
#include"personne.h"
#include"personnel.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew personnel();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ grade, System::String^ Adresse)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	
	this->oMappTB->setSuperieurH(grade);
	this->oMappTB->setAdresse(Adresse);





	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

