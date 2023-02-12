#pragma once
#include "IVehicle.h"

class Motorbike :public IVehicle
{
public:
	Motorbike();
	int getMinSpeed() override;
	int getMaxSpeed() override;
	double transitTime(std::string& track, std::string& pavement) override;
	~Motorbike(){};
private:
	int _minSpeed;
	int _maxSpeed;
};
