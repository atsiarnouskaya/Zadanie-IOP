#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	if (n < 0){
			cout << "Wczytana liczba jest ujemna \n";
			return 0;
		}
	cout << n << endl;
	return 0;
}
