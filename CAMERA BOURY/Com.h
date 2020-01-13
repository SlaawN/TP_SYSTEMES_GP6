//---------------------------------------------------------------------------

#ifndef ComH
#define ComH
#include <windows.h>
class COM {
  	private:
	HANDLE hcom;
	DCB serie;
	OVERLAPPED over;

	public:
	bool ouverture();
	bool ecriture(char * str); //wchar_t permet de prendre un caract�re large
	//bool ecriture(char * str);
	bool ecriture(char * str, int taille);
	bool ecriture(unsigned char * str, int taille);
};
//---------------------------------------------------------------------------
#endif
