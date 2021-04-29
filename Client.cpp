#include <string.h>
#include "Client.h"

using namespace std;

string Client::nom;
string Client::prenom;

void Client::setnom(string _nom)
{ 
	nom=_nom;
}
void Client::setprenom(string _prenom)
{ 
	prenom=_prenom;
}
void Client::setess(float _ess){ess=_ess;}
void Client::setkm(float _km){km=_km;}


string Client::getnom(){ return nom;}
string Client::getprenom(){ return prenom;}
float Client::getess(){ return ess; }
float Client::getkm(){ return km; }
double Client::gettx(float ess_avant, float km_avant)
{ 
	taux=100*ess_avant/(this->km-km_avant);
};
