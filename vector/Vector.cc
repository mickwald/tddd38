#include "Vector.h"

// implement all the functions declared in Vector.h here
class Vector{
	Vector(double x, double y) : x(x), y(y);
	Vector() : {x{}; y{};};
	private:
	double x,y;
	
	public:
	Vector& operator!(){
		return Vector(-this.x , -this.y );
	}
	
	double getX(){
		return this.x;
	}
	double getY(){
		return this.y;
	}
	
	Vector& operator+(Vector& other){
		return Vector(this.getX()+other.getX(), this.getY()+other.getY());
	}
	
	Vector& operator-(Vector& other){
		return Vector(this.getX()-other.getX(), this.getY()-other.getY());
	}
	
	Vector& operator*(double scalar){
		return Vector(this.x * scalar,this.y * scalar);
	}
	
	bool operator== (Vector& other){
		return if(this.x == other.x && this.y == other.y)
	}

	bool operator!= (Vector& other){
		return !(this == other);
	}
	
	Vector& operator/ (double scalar){
		return Vector(this.x/scalar, this.y/scalar);
	}
};