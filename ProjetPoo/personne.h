#pragma once
namespace Composant {
	

	ref class personne
	{
	protected:
		System::String^ Nom;
		System::String^ Prenom;
		int Id;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};
}
