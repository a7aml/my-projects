#include <iostream>
#include <cmath>


using namespace std;

int main() {

	int mangos , sup = 0;

	cout << "Enter how many mangos do you want:\n\n";
	cin >> mangos;

	if (mangos % 3 == 0) {
	   
		sup = mangos / 3;

		mangos = mangos - sup;

		mangos *= 3;

		cout << "The price of the mangos after the offer is:\n " << mangos << endl;
		cout << "==========================================";
	
	
	}
	else{

		sup = mangos / 3 ;
		floor(sup);

		mangos = mangos - sup;
		mangos *= 3;
		cout << "The price of the mangos after the offer is:\n " << mangos << endl;
		cout << "==========================================";

	}




}