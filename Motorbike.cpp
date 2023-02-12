#include "Motorbike.h"

Motorbike::Motorbike() : _minSpeed(60), _maxSpeed(170) {}

int Motorbike::getMinSpeed() 
{
	return _minSpeed;
}

int Motorbike::getMaxSpeed() 
{
	return _maxSpeed;
}

double Motorbike::transitTime(std::string& track, std::string& pavement) {
	double _averageSpeed = 0.0;
	for (size_t i = 0; i < track.size(); i++) {
		if (track[i] == 'b' && pavement == "asphalt") {
			_averageSpeed += 1.0 * (_maxSpeed + 10) / track.size();
		}
		else
			if (track[i] == 'b' && pavement == "gravel") {
				_averageSpeed += 1.0 * (_maxSpeed - 5) / track.size();
			}
			else {
				_averageSpeed += 1.0 * _minSpeed / track.size();
			}
	}
	return (1000.0 * track.size() / _averageSpeed);
}
