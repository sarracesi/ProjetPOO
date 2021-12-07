#pragma once


ref class ville
{
private:
	System::String^ ville;

public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);


	void setville(System::String^);


	System::String^ getville(void);

};



