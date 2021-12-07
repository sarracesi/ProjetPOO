#pragma once



ref class commande
{
private:
	System::DateTime^ DateEmission;
	System::DateTime^ DateLivraison;

public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);

	void setDateEmission(System::DateTime^);
	void setDateLivraison(System::DateTime^);

	System::DateTime^ getDateEmission(void);
	System::DateTime^ getDateLivraison(void);
};


