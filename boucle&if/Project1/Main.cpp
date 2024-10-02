#include <iostream>

using namespace std;

int AskAge();
void ChangeAndDisplayValue(int _index, const int _limit);
bool IsPairOrNot(int _index);

int main() {

	//bool _var = false;

	//// Condition Si
	//if (_var) {

		// Boucle tant que i en dessous de 10
	//	for (int _i = 9; _i != -1; _i--) {
	//		cout << _i << " " << endl;
	//	}
	//}
	////Condition Sinon
	//else {

	//	// Boucle tant que i en dessous de 5
	//	for (int _i = 1; _i < 11; _i++) {
	//		cout << _i << " " << endl;
	//	}
	//}
	
	if (AskAge() >= 18) {
		//for (int _i = 9; _i != -1; _i--) {
		//	cout << _i << " " << endl;
		//}
		ChangeAndDisplayValue(0, 10);
		cout << endl;
		ChangeAndDisplayValue(15, 4);
	}

	return EXIT_SUCCESS;
}

int AskAge() {
	cout << "Quel est votre age ? \n";
	int _val;
	cin >> _val;
	cout << endl;
	return _val;
}

void ChangeAndDisplayValue(int _index, int _limit) {
	if (_index < _limit) {
		_limit++;
		for (; _index < _limit; _index++) {
			if (IsPairOrNot(_index)) {
				cout << _index << " " << endl;
			}
		}
	}
	if (_limit < _index) {
		_limit--;
		for (; _index > _limit; _index--) {
			if (!IsPairOrNot(_index)) {
				cout << _index << " " << endl;
			}
		}
	}

}

bool IsPairOrNot(int _nbr){
	if ((_nbr % 2) == 0) {
		return true;
	}
	else {
		return false;
	}
}