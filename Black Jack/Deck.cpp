// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRTITEN BY KAYCEE SALGUEIRO
#include "Deck.h"
#include <iostream>
#include <sstream>

using namespace std;

// Constructor
Deck::Deck(string cardName, int cardValue) {
	this->cardName = cardName;
	this->cardValue = cardValue;
}

// Set functions
void Deck::setName(string cardName) {
	this->cardName = cardName;
}

void Deck::setValue(int cardValue) {
	this->cardValue = cardValue;
}

// Get functions
string Deck::getName() const {
	return cardName;
}

int Deck::getValue() const {
	return cardValue;
}

// Deconstructor
Deck::~Deck() {}