#include "funcs.h"

int isprint(int c) {
	if (c >= 0x20 && c <= 0x7E) {
		return 1;
	}
	return 0;
}

int isctrl(int c) {
	if (c <= 0x1F || c == 0x7F) {
		return 1;
	}
	return 0;
}

int isgraph(int c) 
{
	if ( c >= 0x21 && c <= 0x7e ) 
		return 1;
	return 0;
}

int isalpha(int c) {
	if (c >= 'A' && c <= 'Z') {
		return 1;
	}
	if (c >= 'a' && c <= 'z') {
		return 1;
	}
	return 0;
}

int isupper (int c) {
	if ( c >= 'A' && c <= 'Z') 	
		return 1;
	return 0;
}

int tolower(int x)	{
	if(isupper(x))	{
		return x+32;
	}
	return 0;
}