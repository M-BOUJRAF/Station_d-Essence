#ifndef SOMETHING_H
#define SOMETHING_H
#include <string>
#include <cstdlib>


using namespace std;


class Client {
	// Private section
	float ess,km;
	int i;
	static string nom;
	static string prenom;
	
	double taux;
	public:
		// Public Declarations
		void setnom(string nom);
		void setprenom(string prenom);
		void setess(float ess);
		void setkm(float km);
		void settx(double taux);
		string getnom();
		string getprenom();
		float getess();
		float getkm();
		double gettx(float ess_avant, float km_avant);
	
};

#endif

