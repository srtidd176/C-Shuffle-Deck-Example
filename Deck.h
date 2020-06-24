#pragma once
#include "Deck.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Card.h"
using namespace std;

class Deck
{
	private:
		Card drawPile[52];
		Card discardPile[52];
		int discardIndex = 0;
		int drawIndex = 51;

	public:
		Deck();
		Card* getDrawPile();
		Card* getDiscardPile();
		void drawCard();
		void shuffle();

};

