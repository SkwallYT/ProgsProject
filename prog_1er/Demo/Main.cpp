#include <iostream>

using namespace std;
int Sums();
int CalculeEntier(int val1, int val2);
int randoms();
int AskIntObj();

/// <summary>
/// This is main func
/// </summary>
/// <returns></returns>
int main() {

	// PRINT
	/*cout << "ok\n" << endl;*/

	// LOCALS
	int _var1 = 1;
	char _var2 = 'y';
	float _var3 = 0.3f;  //sans le f == double
	double _var3_double = 0.3;
	bool _var4 = true;

	// PRINT VARIABLE
	//cout << _var1 << endl;
	//cout << _var2 << endl;
	//cout << _var3 << endl;
	////cout << _var4 << endl;

	//// Condition Si
	//if (_var4 == true) {
	//	cout << _var1 << endl;
	//}

	//// Sinon
	//else {
	//	cout << 0 << endl;
	//}
	//
	//unsigned int _value1 = 12; // ne pas autoriser les negatives
	//int _value2 = -4;

	//const int _result = _value1 + _value2; // creer une constante (non modifiable)

	/*cout << _result << endl;

	cout << _var2 << endl;

	float _floatValue = 0.2f;
	cout << _floatValue * _var3 << endl;

	double _doubleValue = 0.1;
	cout << _doubleValue + _var3_double;*/

	int sums = CalculeEntier(AskIntObj(), AskIntObj());
	cout << "somme avec parametre : " << sums << endl;

	cout << "random nbr : " << randoms() << endl;
	cout << "sums = " << Sums() << endl;

	// Faire renvoyer une valeur a la fonction
	return false;
}

// Type_de_retour nom_de_la_fontion(params1, params2, ...){}

int AskIntObj() {
	int _value;
	cout << "entrer la premiere valeur : " << endl;
	cin >> _value;
	return _value;
}

int CalculeEntier(int val1, int val2) {
	int _result = val1 + val2;
	return _result;
}

/// <summary>
/// Permet de retourner la somme de deux entier
/// </summary>
/// <returns></returns>
int Sums() {
	int _val1 = 1, _val2 = 2;

	const int _result = _val1 + _val2;
	return _result;
}

/// <summary>
/// Permet d'afficher un nombre aleatoire entre 1 et 10
/// </summary>
/// <returns></returns>
int randoms() {
	int _result;
	
	_result = rand() % 10 + 1;

	return _result;
}

