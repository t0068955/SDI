// T0068955 lab2 SDI HW

#include <string>
#include <iostream>
using namespace std;

// structs:
struct timeType {
	int hour;
	int min;
	int sec;
};

struct tourType {
	string cityName;
	int distance;
	timeType travelTime;
};


// output data stored in a variable of type tourType
void output_tourtype_var(tourType var) {
	cout << "City Name: " << var.cityName << endl;
	cout << "Distance: " << var.distance << endl;
	cout << "Travel Time: " << endl;
	cout << "\t Hours: " << var.travelTime.hour << endl;
	cout << "\t Minutes: " << var.travelTime.min << endl;
	cout << "\t Seconds: " << var.travelTime.sec << endl;
}

// value-returning function that inputs data into a variable of type tourType
tourType set_tourtype() {
	string cityName;
	int distance;
	timeType travelTime;
	int hours; int mins; int secs;

	cout << "Enter the name of the city >>> ";
	cin >> cityName;
	cout << "Enter the distance you covered >>> ";
	cin >> distance;
	cout << "Enter the time it took you below: " << endl;
	cout << "Hours: ";
	cin >> hours;
	cout << "Minutes: ";
	cin >> mins;
	cout << "Seconds: ";
	cin >> secs;
	travelTime = { hours, mins, secs };

	return tourType{ cityName, distance, travelTime };
}

// void function with reference parameter of type tourType to input in a variable of type tourType
tourType set_tourtype_with_params(string cityName, int distance, timeType travelTime) {
	return tourType{ cityName, distance, travelTime };
}


int main()
{
	tourType destination;
	timeType destination_time;
	//destination_time = { 3, 15, 0 };
	//destination = { "Nottingham", 130, destination_time };

	// testing set_tourtype()
	//destination = set_tourtype();
	//output_tourtype_var(destination);

	// testing set_tourtype_with_params(string cityName, int distance, timeType travelTime);
	//destination = set_tourtype_with_params("Nottingham", 130, { 3, 15, 0 });
	//output_tourtype_var(destination);

    return 0;
}

