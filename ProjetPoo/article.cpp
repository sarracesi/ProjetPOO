#include "article.h"

Composant::Article::Article()
{
	this->IDArticle = -1;
	
	this->Prix_HT = -1.00;
	this->Taux_TVA = -1.00;
	this->Quantite_en_Stock = -1;
	this->Seuil_de_reapprovisionnement = -1;
	this->Nature_Article = "RIEN";
}

void Composant::Article::SetIDArticle(int IDArticle)
{
	this->IDArticle = IDArticle;
}

int Composant::Article::getIDArticle(void)
{
	return this->IDArticle;
}


void Composant::Article::setPrix_HT(float Prix_HT)
{
	this->Prix_HT = Prix_HT;
}

float Composant::Article::getPrix_HT(void)
{
	return this->Prix_HT;
}

void Composant::Article::setTaux_TVA(float Taux_TVA)
{
	this->Taux_TVA = Taux_TVA;
}

float Composant::Article::getTaux_TVA(void)
{
	return this->Taux_TVA;
}

void Composant::Article::setQuantite_en_Stock(int Quantite_en_Stock)
{
	this->Quantite_en_Stock = Quantite_en_Stock;
}

int Composant::Article::getQuantite_en_Stock(void)
{
	return this->Quantite_en_Stock;
}

void Composant::Article::setSeuil_de_reapprovisionnement(int Seuil_de_reapprovisionnement)
{
	this->Seuil_de_reapprovisionnement = Seuil_de_reapprovisionnement;
}

int Composant::Article::getSeuil_de_reapprovisionnement(void)
{
	return this->Seuil_de_reapprovisionnement;
}

void Composant::Article::SetNature_Article(System::String^ Nature_Article)
{
	this->Nature_Article = Nature_Article;
}

System::String^ Composant::Article::getNature_Article(void)
{
	return this->Nature_Article;
}

System::String^ Composant::Article::SELECT(void)
{
	return "SELECT ID_article, Reference_Article, Designation, Prix_HT, Taux_TVA, Quantite_en_Stock, Seuil_de_reapprovisionnement, Couleur, (select prix_ht+ (prix_ht*taux_tva/100) ) as Prix_TTC FROM Article";
}

System::String^ Composant::Article::SELECTbyID(void)
{
	return this->SELECT() + " where id_article = " + this->IDArticle;
}

System::String^ Composant::Article::INSERT(void)
{
	return "INSERT INTO Article (Prix_HT, Taux_TVA, Quantite_en_Stock, Seuil_de_reapprovisionnement, Couleur)" +
		"VALUES('" + this->Prix_HT.ToString()->Replace(",", ".") + ", " + this->Taux_TVA.ToString()->Replace(",", ".") + "," + this->Quantite_en_Stock +
		"," + this->Seuil_de_reapprovisionnement + ",'" + this->Nature_Article + "');" + "Select SCOPE_IDENTITY()";

}

System::String^ Composant::Article::UPDATE(void)
{
	return "UPDATE Article " +
		"Prix_HT = " + this->getPrix_HT().ToString()->Replace(",", ".") + ", Taux_TVA = " + this->getTaux_TVA().ToString()->Replace(",", ".") + ", Quantite_en_Stock = " + this->getQuantite_en_Stock() + ", Seuil_de_reapprovisionnement = " + this->getSeuil_de_reapprovisionnement() + ", Couleur = '" + this->getNature_Article() + "' " +
		"WHERE(ID_article = " + this->getIDArticle() + ");";
}

System::String^ Composant::Article::DELETE(void)
{
	return "DELETE FROM Article " +
		"WHERE(ID_article = " + this->getIDArticle() + ");";
}

Composant::Article::~Article()
{
	
	delete this->Nature_Article;
	
}