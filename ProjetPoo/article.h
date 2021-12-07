#pragma once
#pragma once
//classe se mappage pour la table Article

namespace Composant
{

	ref class Article
	{
	private:
		int IDArticle;
		
		
		float Prix_HT;
		float Taux_TVA;
		int Quantite_en_Stock;
		int Seuil_de_reapprovisionnement;
		System::String^ Nature_Article;
	public:
		Article(); //constructeur par défaut
		//accesseurs
		void SetIDArticle(int);
		int getIDArticle(void);
		
		
		void setPrix_HT(float);
		float getPrix_HT(void);

		void setTaux_TVA(float);
		float getTaux_TVA(void);

		void setQuantite_en_Stock(int);
		int getQuantite_en_Stock(void);

		void setSeuil_de_reapprovisionnement(int);
		int getSeuil_de_reapprovisionnement(void);

		void SetNature_Article(System::String^);
		System::String^ getNature_Article(void);

		//methode de mappage pour la table Article
		System::String^ SELECT(void);
		System::String^ SELECTbyID(void);
		System::String^ INSERT(void);
		System::String^ UPDATE(void);
		System::String^ DELETE(void);
		~Article();
	};
}