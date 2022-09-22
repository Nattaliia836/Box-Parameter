#include <iostream>
#include "Box.h"

using namespace std;

void check()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
	Box b1; // Should set b1.l = b1.b = b1.h = 0;
	Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;

	b2.getLength();	// Should return 2
	b2.getBreadth(); // Should return 3
	b2.getHeight();	// Should return 4
	b2.CalculateVolume(); // Should return 24
	bool x = (b1 < b2);	// Should return true based on the conditions given
	cout << b2; // Should print 2 3 4 in order.

	check(); // test to check the code
}