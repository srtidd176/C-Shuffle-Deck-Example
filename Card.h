#pragma once
#include <iostream>
#include <string>
#include <set>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Card
{
	private:
		string name;
		string type;

	public:
		Card();
		Card(string name, string type);
		string getName();
		string getType();
		bool equalTo(Card &card2);

};

