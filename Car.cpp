#include "Car.h"
Car::Car() : _minSpeed(50), _maxSpeed(150) {}

int Car::getMinSpeed() 
{
	return _minSpeed;
}

int Car::getMaxSpeed() 
{
	return _maxSpeed;
}


double Car::transitTime(std::string& track, std::string& pavement) {
	double _averageSpeed = 0.0;
	for (size_t i = 0; i < track.size(); i++) {
		if (track[i] == 'c' && pavement == "asphalt") {
			_averageSpeed += 1.0 * _maxSpeed / track.size();
		}
		else
			if (track[i] == 'c' && pavement == "gravel") {
				_averageSpeed += 1.0 * (_maxSpeed - 10) / track.size();
			}
			else {
				_averageSpeed += 1.0 * _minSpeed / track.size();
			}
	}
	return (1000.0 * track.size() / _averageSpeed);
}