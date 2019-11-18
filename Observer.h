#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H

/**
 * Interface for the Observer
 */
class Observer {

public:

	/**
	 * Update the state of this observer
	 * @param temp new temperaure
	 * @param humidity new humidity
	 * @param pressure new pressure
	 */
	virtual void update(float temp, float humidity, float pressure) = 0;

};


#endif //OBSERVER_PATTERN_OBSERVER_H
