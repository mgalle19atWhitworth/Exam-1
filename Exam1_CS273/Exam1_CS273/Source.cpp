#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace Exam1 // NAMESPACE
	// I affirm that all code given below was written solely by me, McKenna Galle
	//and that any help I received adhered to the rules stated for this exam.
{
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }
	};

	// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	class Vehicle
	{
	protected:
		string _color;
		int _topspeed;
		vector<Wheel> wheels;

	public:
		Vehicle(string color) {
			// Complete the implementation
			_color = color;
		}
		virtual void Description() = 0;
		
	};

	// STEP 2:  Define the RaceCar, Sedan, and Pickup classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.

	// inherits from vehicle
	class RaceCar : public Vehicle {
	public:
		// inherits color from vehicle
		RaceCar(string color) : Vehicle(color) {}
		void Description()
		{
			Exam1::Wheel(305);
			_topspeed = 250;
			cout << "I am a " << _color << " Racecar  and I can go "<< _topspeed<< "mph\n";
		}
		//Top speed: 250mph
		//Wheel radius: 305mm

	};
	// inherits from vehicle
	class Sedan : public Vehicle {
	private:
		int number_of_seats;
	public:
		//inherits color from vehicle
		Sedan(string color, int numberOfSeats) :Vehicle(color)
		{
			number_of_seats = numberOfSeats;
		}
		void Description()
		{ 
			Exam1::Wheel(381);
			_topspeed = 95;
			cout << "I am a " << _color << " Sedan and I can go "<< _topspeed<<"mph\n";
		}
		
		//Top speed: 95mph
		//Wheel radius: 381mm

	};

	// inherit's from vehicle 
	class Pickup : public Vehicle {
	private:
		int hauling_capacity;
	public: 
		// inherits color from vehicle
		Pickup(string color, int haulingCapacity) : Vehicle(color)
		{
			hauling_capacity = haulingCapacity;
		}
		void Description()
		{
			Exam1::Wheel(432);
			_topspeed = 85;
			cout << "I am a " << _color << " Pickup and I can go "<< _topspeed<<"mph\n";
		}
		//Top speed: 85mph
		//Wheel radius: 432mm

	};
}


int main()
{
	Exam1::Vehicle * Garage[3];
	
		// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
		// in the Garage array.  Remember the classes are defined in the namespace Exam1.
	Garage[0] = new Exam1::RaceCar("blue");
	Garage[1] = new Exam1::Sedan("red", 5);
	Garage[2] = new Exam1::Pickup("green", 600);

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		Garage[i]->Description();
	}
}
