
#include "Singleton.h"
#include <fstream>


using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}


int Nuskaitoma(ofstream& YF, int masx[1], int masy[1])
{
    int kiekis_x=0, kiekis_y=0,kiekis;
    ifstream IsX("FailasY.txt");
    ifstream IsY("FailasX.txt");
    YF << "MASYVAS Y" << endl;
    while (IsX >> masx[kiekis_x])
    {
        YF << masx[kiekis_x] << endl;
        kiekis_x++;
    }
    YF << "MASYVAS X" << endl;
    while (IsY >> masy[kiekis_y])
    {
        YF << masy[kiekis_y] << endl;
        kiekis_y++;
    }
    if (kiekis_x>kiekis_y)
        kiekis=kiekis_y;
        else if (kiekis_y<kiekis_x)
            kiekis=kiekis_x;
            else kiekis=kiekis_x;
    return kiekis;
}
