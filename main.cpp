#include <string>
#include <iostream>
using namespace std;


void dessinRectangle(int l, int h, string symbol) {
	for (int ligne(0); ligne < h;ligne++) {
		for (int colonne(0); colonne < l; colonne++) {
			cout << symbol;
		}
		cout << endl;
	}

}



int main(){
	cout << "Hello world \n j\'apprends le c++" << endl;
	
	int l, h;
	cout << "largeur du rectangle:";
	cin >> l;
	cout << "longueur du triangle:";
	cin >> h;

	dessinRectangle(l, h, "*");
	system("pause");
	return 0;
}
