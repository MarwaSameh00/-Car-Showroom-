//#include <iostream>
//#include <fstream>
//#include "files_op.h"
//
//void files_op:: get_cars_from_file(vector<car> ListOfCars) {
//	ListOfCars.clear();
//	fstream file_out;
//	//int index = 0;
//	string s;
//	car temp;
//	file_out.open("cars.text", ios::in);
//	while (!file_out.eof()) {
//
//		getline(file_out, s, ',');
//		temp.showroom_id = atoi(s.c_str());//convert to int
//		getline(file_out, s, ',');
//		temp.car_id = atoi(s.c_str());//convert to int
//		getline(file_out, s, ',');
//		temp.car_make = s;
//		getline(file_out, s, ',');
//		temp.car_model = s;
//		getline(file_out, s, ',');
//		temp.car_price = atof(s.c_str());//convert to double
//		getline(file_out, s);
//
//		temp.car_year = atoi(s.c_str());//convert to int
//		ListOfCars.push_back(temp);
//		//index++;
//	}
//	ListOfCars.pop_back();
//	file_out.close();
//
//}
//void files_op::set_cars_to_file(vector<car> ListOfCars) {
//	fstream file_out;
//	file_out.clear();
//
//	file_out.open("cars.text", ios::out);
//	for (int i = 0; i < ListOfCars.size(); i++) {
//		file_out << ListOfCars[i].showroom_id << ',' << ListOfCars[i].car_id << ',' << ListOfCars[i].car_make << ',' << ListOfCars[i].car_model << ',' << ListOfCars[i].car_price << ',' << ListOfCars[i].car_year << endl;
//	}
//	file_out.close();
//}
//void files_op::get_rooms_from_file(vector<showrooms> list_showrooms) {
//	showrooms temp;
//	fstream rooms_file;
//	rooms_file.open("rooms.text", ios::in);
//	list_showrooms.clear();//clear data of vector to not dublicate DATA
//	string s;
//
//	while (!rooms_file.eof()) {
//		getline(rooms_file, s, ',');
//		temp.showrooms_id = atoi(s.c_str());
//		getline(rooms_file, s, ',');
//		temp.showrooms_name = s;
//		getline(rooms_file, s, ',');
//		temp.showrooms_location = s;
//		getline(rooms_file, s);
//		temp.showrooms_phone = s;
//		list_showrooms.push_back(temp);
//	}
//	list_showrooms.pop_back();
//	rooms_file.close();
//}
//
//void files_op::set_rooms_to_file(vector<showrooms> list_showrooms) {
//	fstream rooms_file;
//	rooms_file.clear();
//	rooms_file.open("rooms.text", ios::out);
//	for (int i = 0; i < list_showrooms.size(); i++) {
//		rooms_file << list_showrooms[i].showrooms_id << ',' << list_showrooms[i].showrooms_name << ',' << list_showrooms[i].showrooms_location << ',' << list_showrooms[i].showrooms_phone << endl;
//
//	}
//	rooms_file.close();
//}