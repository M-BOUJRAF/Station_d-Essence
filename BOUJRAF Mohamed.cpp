#include <cstdlib>
#include <iostream>
#include <string>
#include "Client.h"
#include "Client.cpp"



using namespace std;// biblio pour utiliser cout, cin

int main(int argc, char** argv) {
	Client P[100];
	Client c;
	string nom,prenom;
	float ess,km;
	int i=0;
	
	
	//while(1) boucle infinie
	while(1){
		system("cls");
		if(i==0){
			cout<<"Bonjour, Votre Prenom et nom svp: "<<endl;
			cin>>prenom;
			cin>>nom;
			P[i].setprenom(prenom);
			P[i].setnom(nom);
		}else{
			cout<<"Bonjour, "<<P[i-1].getprenom()<<" "<<P[i-1].getnom()<<", c'est votre "<<i+1<<" eme visite\n"<<endl;
		}
		cout<<"le kilometrage de votre compteur:";
		cin>>km;
		P[i].setkm(km);
		cout<<"la quantite d'essence souhaite :";
		cin>>ess;
		P[i].setess(ess);
		if(i!=0){
			cout<<"le taux de consommation: "<<P[i].gettx(P[i-1].getess(),P[i-1].getkm())<<endl;
		}
		i++;
		
		system("PAUSE");
	}
	
	system("PAUSE");
	return 0;
}
