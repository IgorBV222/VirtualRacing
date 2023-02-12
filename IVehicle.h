#pragma once
#include <string>




#include <iostream>
class IVehicle
{
public:

	virtual int getMinSpeed() = 0;
	virtual int getMaxSpeed() = 0;
	virtual double transitTime(std::string& track, std::string& pavement) = 0;

	virtual ~IVehicle() {}

	
};

