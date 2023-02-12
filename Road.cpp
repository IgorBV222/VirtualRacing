#include "Road.h"

Road::Road(const std::string& track, const std::string& pavement) : _track(track), _pavement(pavement) {}

double Road::Race(IVehicle& car, IVehicle& bike) {

	if (car.transitTime(_track, _pavement) < bike.transitTime(_track, _pavement)) {
		std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". The CAR won with a time of " << car.transitTime(_track, _pavement);
		return car.transitTime(_track, _pavement); //костыль
	}
	else if (car.transitTime(_track, _pavement) == bike.transitTime(_track, _pavement)) {
		std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". DRAW!!! Time: " << car.transitTime(_track, _pavement);
		return car.transitTime(_track, _pavement);//костыль
	}
	else {
		std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". The BIKE won with a time of " << bike.transitTime(_track, _pavement);
		return bike.transitTime(_track, _pavement);//костыль
	}
}
