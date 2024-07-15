#include "car.h"
#include <cstdlib>
#include<ctime>

car::car() {

	srand(time(0));
	car_id = rand();

}
void car:: set_car_information(int showrooms_id) {
	
	showroom_id = showrooms_id;
	cin.ignore();
	cout << "\nEnter car make :";
	getline(cin, car_make);
	cout << "\nEnter car model :";
	getline(cin, car_model);
	cout << "\n enter car price :";
	cin >> car_price;
	cout << "\nenter car year :";
	cin >> car_year;
}
