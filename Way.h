#pragma once
#include "ITrack.h"


class Way : public ITrack
{
public:

	Way(const std::string& track, const std::string& pavement);
	double Race(IVehicle& car, IVehicle& bike) override;
	//~Way(){};
private:
	std::string _track;
	std::string _pavement;

};