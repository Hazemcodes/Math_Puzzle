/*
 Author: Hazem Ahmed , 220170007

 Date: 26/10/2018

 Data Structures – Section 01 – Exercise 01
*/
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, H = 0, P = 0, R = 0;
	try
	{
		cout << "How Many Animal did You Buy ?\n";
		cin >> x;
		cout << "How Much You Spent ?\n";
		cin >> y;
		if(x<0||y<0)
			throw 0;
	}
	catch (int ex)
	{
		cout << "You Have To Enter Postive Number";
		return 0;
	}
		int w = y;
		if (x == (y / 100))
		{
			H = x;
			w = 0;
			y -= (x * 100);
		}
		if (x == (y / 30))
		{
			P = x;
			w = 0;
			y -= (x * 30);
		}
		if (x == (y / 5))
		{
			R = x;
			w = 0;
			y -= (x * 5);
		}
		while (w >= 5)
		{
			if (y >= 100 && x != 0)
			{
				H++;
				w -= 100;
				x--;
			}
			if (y >= 30 && x != 0)
			{
				P++;
				w -= 30;
				x--;
			}
			if (y >= 5 && x != 0)
			{
				R++;
				w -= 5;
				x--;
			}
			y = w;
			if (x == 0)
			{
				w = 0;
			}
		}
		cout << "The Farmer Bought: " << H << " Horse, " << P << " Pigeion, and " << R << " Rabbits" << endl;
		cout << "Your Change is " << y << endl;
		return 0;
}