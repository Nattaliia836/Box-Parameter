#pragma once
class Box {
public:
	Box();

	Box(int l, int b, int h);

	Box(const Box& box);

	int getLength();

	int getBreadth();

	int getHeight();

	long long CalculateVolume();

private:
	int l, b, h;
};

std::ostream& operator<<(std::ostream& out, Box& B);

bool operator<(Box& A, Box& B);