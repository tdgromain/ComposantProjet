// Composant4.cpp : Defines the routines for the DLL.
//

#include "Composant4.h"
#include "Composant4Version.h"

int composant4(int p1, int p2)
{
	return p1*p2;
}

char * getComposant4Version()
{
	return "Composant 4 version " COMPOSANT_VERSION_STR;
}