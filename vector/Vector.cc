#include <cmath>
#include <iostream>

// implement all the functions declared in Vector.h here
class Vector{
	public:
	Vector() : x{}, y{} {}
	Vector(double x, double y) : x(x), y(y) {}
	Vector(Vector const& vec) : x(vec.x), y(vec.y) {}
	private:
	double x,y;
	
	public:
	double getX(){
		return x;
	}
	double getY(){
		return y;
	}
	
	Vector& operator=(Vector const& vec){
		if(this != &vec){
			x = vec.x;
			y = vec.y;
		}
		return *this;
	}
	
	Vector& operator+=(Vector const& vec){
		x += vec.x;
		y += vec.y;
		return *this;
	}
	
	friend Vector operator+(Vector left, Vector const& right){
		left += right;
		return left;
	}
	
	friend Vector operator-(Vector left, Vector const& other){
		return Vector(left.x-other.x, left.y-other.y);
	}
	
	Vector operator-(){
		return Vector(-x, -y);
	}
	
	friend Vector operator*(Vector vec, double scalar){
		return Vector(vec.x * scalar,vec.y * scalar);
	}
	
	friend Vector operator*(double scalar, Vector const& vec){
		return vec*scalar;
	}
	
	friend bool operator== (Vector const& left, Vector const& right){
		return (left.x == right.x && left.y == right.y);
	}

	friend bool operator!= (Vector const& left, Vector const& right){
		return !(left == right);
	}
	
	Vector operator!(){
		return Vector(-x , -y );
	}
	
	Vector operator/ (double scalar){
		return Vector(x/scalar, y/scalar);
	}
	
	double length(){
		return (std::sqrt((std::pow(x,2.0)+std::pow(y,2.0))));
	}
	
	friend std::ostream& operator<<(std::ostream& stream, Vector const& vec){
		return stream << "( " << vec.x << ", " << vec.y << " )";
	}
	
	
	friend std::istream& operator>>(std::istream& stream, Vector vec){
		Vector tmp;
		stream >> tmp.x;
		stream >> tmp.y;
		vec = tmp;
		return stream;
	}
};