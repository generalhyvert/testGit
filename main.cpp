#include <string> //attention à rajouter ce include
#include "math.h"
#include <iostream>
using namespace std;
//modifié depuis github

void dessinRectangle(int l, int h, string symbol) {
	for (int ligne(0); ligne < h;ligne++) {
		for (int colonne(0); colonne < l; colonne++) {
			cout << symbol;
		}
		cout << endl;
	}

}

void echange(double a, double b)
{
	double temporaire(a); //On sauvegarde la valeur de 'a'
	a = b;                //On remplace la valeur de 'a' par celle de 'b'
	b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

int main()
{
	cout << "Hello world \n j\'apprends le c++" << endl;
	
	int a(2), b(2);
	cout << "Valeur de a : " << a << endl;
	cout << "Valeur de b : " << b << endl;
	b = ajouteDeux(a);                     //Appel de la fonction
	cout << "Valeur de a : " << a << endl;
	cout << "Valeur de b : " << b << endl;


	system("pause");
	return 0;
}
