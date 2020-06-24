#include "Deck.h"

Deck::Deck() {
	int indexCard = 0;
	string faceCards[4] = { "A","J","Q","K" };
	for (int i = 2; i < 11; i++) {
		this->drawPile[indexCard] = Card(to_string(i), "clubs");
		indexCard += 1;
		this->drawPile[indexCard] = Card(to_string(i), "diamonds");
		indexCard += 1;
		this->drawPile[indexCard] = Card(to_string(i), "hearts");
		indexCard += 1;
		this->drawPile[indexCard] = Card(to_string(i), "spades");
		indexCard += 1;
	}
	for (int i = 0; i < 4; i++) {
		this->drawPile[indexCard] = Card(faceCards[i], "clubs");
		indexCard += 1;
		this->drawPile[indexCard] = Card(faceCards[i], "diamonds");
		indexCard += 1;
		this->drawPile[indexCard] = Card(faceCards[i], "hearts");
		indexCard += 1;
		this->drawPile[indexCard] = Card(faceCards[i], "spades");
		indexCard += 1;
	}
}

Card* Deck::getDrawPile() {
	return this->drawPile;
}

Card* Deck::getDiscardPile() {
	return this->discardPile;
}

void Deck::drawCard() {
	Card card = this->drawPile[0];
	cout << "You drew the " << card.getName() << " of " << card.getType() << endl;
	this->discardPile[this->discardIndex] = card;
	this->discardIndex += 1;

	for (int i = 0; i < 51; i++) {
		this->drawPile[i] = this->drawPile[i + 1];
	}
	this->drawPile[51] = Card();
	this->drawIndex -= 1;
}

void Deck::shuffle() {
	Card temp = Card();
	srand(time(0));
	for (int i = 0; i < this->drawIndex; i++) {
		temp = this->drawPile[i];
		int randIndex = rand() % this->drawIndex + 0;
		this->drawPile[i] = this->drawPile[randIndex];
		this->drawPile[randIndex] = temp;
	}
}
