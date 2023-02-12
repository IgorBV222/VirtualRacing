#include "IVehicle.h"
class Car :public IVehicle
{
public:
	Car();
	int getMinSpeed() override;
	int getMaxSpeed() override;
	double transitTime(std::string& track, std::string& pavement) override;
	~Car(){};
private:
	int _minSpeed;
	int _maxSpeed;
};

