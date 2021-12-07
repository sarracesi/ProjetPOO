#pragma once



ref class adresse
{
private:
	System::String^ Adresse;
	int NumRue;
	int NumEtage;
public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);

	void setNumRue(int);
	void setNumEtage(int);
	void setAdresse(System::String^);


	System::String^ getAdresse(void);
	int getNumRue(void);
	int getNumEtage(void);
};


