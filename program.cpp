#include <iostream>
using namespace std;

int fibonacci(int k){
	if (k == 0) return 0;
	if (k == 1) return 1;
	return fibonacci(k - 1) + fibonacci(k - 2);
}
int main(){

	int n;
	cin >> n;

	if (n < 0){
			cout << "Wczytana liczba jest ujemna \n";
			return 0;
		}
	cout << n <<"-ta liczba Fibbonaciego " << fibonacci(n) << endl;
	return 0;
}
