// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRITTEN BY ANNA WHITE
#include "Heart.h"
#include <iostream>
#include <sstream>

using namespace std;

// Constructor
Heart::Heart(string cardName, int cardValue, string Suit, string Color)
	:Deck{ cardName , cardValue }
{
	this->Suit = Suit;
	this->Color = Color;
}

// Print Function (Written by Kaycee Salgeuiro)
string Heart::toString() const
{
	ostringstream output;
	output << " __________" << endl
		<< "|          |" << endl
		<< "|  __  __  |     " << getName() << " of Hearts" << endl
		<< "| (  \\/  ) |     " << "Card Value: " << getValue() << endl
		<< "|  \\    /  |     " << "Suit: " << Suit << endl
		<< "|    \\/    |     " << "Color: " << Color << endl
		<< "|          |" << endl
		<< "|__________|" << endl;
	return output.str();
}

// SET
void Heart::setSuit(string Suit) {
	this->Suit = Suit;
}

void Heart::setColor(string Color) {
	this->Color = Color;
}

// GET
string Heart::getSuit() const {
	return Suit;
}

string Heart::getColor() const {
	return Color;
}

// Deconstructor
Heart::~Heart() {}