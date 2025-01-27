//---------------------------------------------------------------------------

#pragma hdrstop

#include "CList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
/*
AIDE TRAMES CAMERA
"8101040002ff" //Allumer la cam�ra
"8101040003ff" //�teindre la cam�ra
"8101040700ff" //Arr�ter le zoom
"8101040732ff" //Zoom Arri�re/D�zoom
"8101040723ff" //Zoom Avant/Zoom
"8101060105050303ff" //Arret deplacement
"8101060105050301ff" //Deplacement Cam�ra Axe Y: Haut
"8101060105050302ff" //Deplacement Cam�ra Aye y : Bas
"8101060105050203ff" //Deplacement Cam�ra Axe X : Droite
"8101060105050103ff" //Deplacement Cam�ra Axe X : Gauche
*/
unsigned char * CList::allumer(unsigned char value)  //Allumage de la cam�ra
{
	unsigned char * trame = new unsigned char[6];

	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x00;
	trame[4] = value;
	trame[5] = 0xff;

	return trame;
}
unsigned char * CList::zoom(unsigned char value)//Zoom Avant et Arri�re
{
	unsigned char * trame = new unsigned char[6];

	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x07;
	trame[4] = value;
	trame[5] = 0xff;

	return trame;

}
unsigned char * CList::deplaceY(unsigned char value)//D�placement sur l'axe Y : Haut et Bas
{
	unsigned char * trame = new unsigned char[9];

	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x05;
	trame[5] = 0x05;
	trame[6] = 0x03;
	trame[7] = value;
	trame[8] = 0xff;

	return trame;

}

unsigned char * CList::deplaceX(unsigned char value)//D�placement sur l'axe X : Droite et Gauche
{
	unsigned char * trame = new unsigned char[9];

	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x05;
	trame[5] = 0x05;
	trame[6] = value;
	trame[7] = 0x03;
	trame[8] = 0xff;

	return trame;

}