#pragma once
#include <iostream>

// Declare your class here
class Vector{
	public:
	Vector();
	Vector(double x, double y);
	Vector(Vector const& vec);
	double getX();
	double getY();
	Vector& operator=(Vector const& vec);
	Vector& operator+=(Vector const& vec);
	friend Vector operator+(Vector left, Vector const& right);
	friend Vector operator-(Vector left, Vector const& right);
	Vector& operator-();
	friend Vector operator*(Vector const& vec, double scalar);
	friend Vector operator*(double scalar, Vector const& vec);
	friend bool operator==(Vector const & left, Vector const& right);
	friend bool operator!=(Vector const & left, Vector const& right);
	Vector operator!();
	Vector operator/(double scalar);
	double length();
	friend std::ostream& operator<<(std::ostream& stream, Vector const& vec);
	friend std::istream& operator>>(std::istream& stream, Vector vec);
	
};