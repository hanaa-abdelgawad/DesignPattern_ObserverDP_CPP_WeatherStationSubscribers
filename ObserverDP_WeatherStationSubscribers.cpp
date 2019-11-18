// ObserverDP_WeatherStationSubscribers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "WeatherData.h"
#include "Client.h"


int main() {
	WeatherData weatherStation;
	Client one(1), two(2), three(3);

	float temp, humidity, pressure;

	weatherStation.registerObserver(&one);
	weatherStation.registerObserver(&two);
	weatherStation.registerObserver(&three);

	std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
	std::cin >> temp >> humidity >> pressure;

	weatherStation.setState(temp, humidity, pressure);

	weatherStation.removeObserver(&two);

	std::cout << "\n\nEnter Temperature, Humidity, Pressure (seperated by spaces) << ";
	std::cin >> temp >> humidity >> pressure;

	weatherStation.setState(temp, humidity, pressure);

	return 0;
}