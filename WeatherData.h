#ifndef OBSERVER_PATTERN_WEATHERDATA_H
#define OBSERVER_PATTERN_WEATHERDATA_H

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"

/**
 * A concrete implementation of the Subject interface
 */
class WeatherData : public Subject {
	std::vector<Observer *> observers; // observers

	float temp = 0.0f;
	float humidity = 0.0f;
	float pressure = 0.0f;

public:

	void registerObserver(Observer *observer) override;

	void removeObserver(Observer *observer) override;

	void notifyObservers() override;

	/**
	 * Set the new state of the weather station
	 * @param temp new temperature
	 * @param humidity new humidity
	 * @param pressure new pressure
	 */
	void setState(float temp, float humidity, float pressure);

};


#endif //OBSERVER_PATTERN_WEATHERDATA_H