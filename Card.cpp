#include "Card.h"

Card::Card() {
	this->name = "";
	this->type = "";
}

Card::Card(string name, string type) {
	this->name = name;
	this->type = type;
}

string Card::getName() {
	return this->name;
}

string Card::getType() {
	return this->type;
}

bool Card::equalTo(Card& card2) {
		if (this->name == card2.getName() && this->type == card2.getType()) {
			return true;
		}
		else {
			return false;
		}
}