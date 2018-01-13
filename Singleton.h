#include <string>
#include <fstream>

using namespace std;

class Singleton {
public:
	static Singleton* Instance();
	ofstream YF;
	int Nuskaitoma(ofstream& YF, int masx[1000], int masy[1000]);

private:
	Singleton() {YF.open("Rezultatas.txt"); };  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};