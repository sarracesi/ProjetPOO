#pragma 
#include "personne.h"
namespace Composant {

	ref class client : public Composant::personne
	{
	private:
		
		System::DateTime^ DateNaissance;
		System::DateTime^ DatePremierAchat;


	public:

		client();

		void setDateNaissance(System::DateTime^);
		void setDatePremierAchat(System::DateTime^);


		System::DateTime^ getDateNaissance(void);
		System::DateTime^ getDatePremierAchat(void);
		System::String^ SELECT(void) override;
		System::String^ SELECTbyid();
		System::String^ INSERT(void) override;
		System::String^ UPDATE(void) override;
		System::String^ DELETE(void) override;

		~client();
	};
}