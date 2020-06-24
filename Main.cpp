#include "Deck.h"
using namespace std;

int main() {
	Deck deck = Deck();
	deck.shuffle();
	for (int i = 0; i < 52; i++) {
		deck.drawCard();
	}
}
