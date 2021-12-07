#pragma once
#include "personne.h"

ref class personnel : public Composant::personne
{
private:

	System::String^ SuperieurH;
	System::DateTime^ Date_Embauche;
	System::String^ Adresse;
public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);

	void setDate_Embauche(System::DateTime^);
	void setSuperieurH(System::String^);
	void setAdresse(System::String^);

	System::String^ getAdresse(void);
	System::String^ getSuperieurH(void);
	System::DateTime^ getDate_Embauche(void);
};

