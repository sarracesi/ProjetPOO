#include "pch.h"
#include "ville.h"



System::String^ ville::Select(void)
{
	return "SELECT [ville] FROM [DB_P6].[dbo].[TB_P6]";
}
System::String^ ville::Insert(void)
{
	return "INSERT INTO TB_P6 (ville) VALUES('" + this->ville + "); ";

}
System::String^ ville::Delete(void)
{
	return "";
}
System::String^ ville::Update(void)
{
	return "";
}
void ville::setville(System::String^ ville)
{
	this->ville = ville;
}




System::String^ ville::getville(void) { return this->ville; }