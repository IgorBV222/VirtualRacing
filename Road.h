#pragma once
#include "ITrack.h"
class Road : public ITrack
{
public:
	
	Road(const std::string& track, const std::string& pavement);
	double Race(IVehicle& car, IVehicle& bike) override;
	//~Road(){};
private:
	std::string _track;
	std::string _pavement;

};

