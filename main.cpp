//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    MonObj = new(C9111);
}

void __fastcall TForm1::INITIALISATIONClick(TObject *Sender)
{
    MonObj->Initialisation();
}

//---------------------------------------------------------------------------
