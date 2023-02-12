#pragma once
#include <iostream>
#include "IVehicle.h"
class ITrack
{
public:		
	virtual double Race(IVehicle& car, IVehicle& bike) = 0;
	virtual ~ITrack() {}
};

