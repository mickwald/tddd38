#pragma once

// Declare your class here
class Vector{
	public:
	Vector(double x, double y);
	Vector();
	Vector& operator!();
	double getX();
	double getY();
	Vector& operator+(Vector& vec);
	Vector& operator-(Vector& vec);
	Vector& operator*(Vector& vec);
	bool operator==(Vector& vec);
	bool operator!=(Vector& vec);
	Vector& operator/(Vector& vec);
	
};