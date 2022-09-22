#include <iostream>

#include "Box.h"

Box::Box() {
	l = 0;
	b = 0;
	h = 0;
}

Box::Box(int l, int b, int h) {
	this->l = l;
	this->b = b;
	this->h = h;
}

Box::Box(const Box& box) :l(box.l), b(box.b), h(box.h) {}

int Box::getLength() {
	return l;
}

int Box::getBreadth() {
	return b;
}

int Box::getHeight() {
	return h;
}

long long Box::CalculateVolume() { // Return the volume of the box
	return (l * b * h);
}


std::ostream& operator<<(std::ostream& out, Box& B)
{
	out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
}

bool operator<(Box& A, Box& B) {
	if ((A.getLength() < B.getLength()) ||
		(A.getLength() == B.getLength() && A.getBreadth() < B.getBreadth()) ||
		(A.getHeight() < B.getHeight() && A.getLength() == B.getLength() && A.getBreadth() == B.getBreadth())
		) {
		return true;
	}

	return false;
}