#include <iostream>
#include "Car.h"
#include "Motorbike.h"
#include "Way.h"
#include "Road.h"
#include "IVehicle.h"
#include "ITrack.h"


int main() {

	
	IVehicle* car = new Car;
	IVehicle* bike = new Motorbike;

	std::string track1 = ("ccccccccccccccccbbbbbbbcccccccccccccccccccccccccccccccccccbbbcccccccccccccccccccccccc");
	std::string track2 = ("bbbbbbbbbbbbbbbbbbbbbbbbccccccccbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccbbbbbbbbbbbbbb");
	
	
	ITrack* way = new Way(track1, "asphalt");
	way->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* way1 = new Way(track2, "asphalt");
	way1->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* way2 = new Way(track2, "gravel");
	way2->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* way3 = new Way(track1, "gravel");
	way3->Race(*car, *bike);
	std::cout << "\n===========================================================\n";


	ITrack* road = new Road (track2, "asphalt");
	road->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* road1 = new Road(track2, "gravel");
	road1->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* road2 = new Road(track1, "asphalt");
	road2->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	ITrack* road3 = new Road(track1, "gravel");
	road3->Race(*car, *bike);
	std::cout << "\n===========================================================\n";

	
	

	delete car;
	delete bike;
	delete way, way1, way2, way3;
	delete road, road1, road2, road3;

	return 0;
}