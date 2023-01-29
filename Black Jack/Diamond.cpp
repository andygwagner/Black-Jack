// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRITTEN BY ANNA WHITE
#include "Diamond.h"
#include <iostream>
#include <sstream>

using namespace std;

// Constructor
Diamond::Diamond(string cardName, int cardValue, string Suit, string Color)
	:Deck{ cardName , cardValue }
{
	this->Suit = Suit;
	this->Color = Color;
}

// Print Function (Written by Kaycee Salgeuiro)
string Diamond::toString() const
{
    ostringstream output;
    output << " __________" << endl
        << "|          |" << endl
        << "|    /\\    |     " << getName() << " of Diamond" << endl
        << "|   /  \\   |     " << "Card Value: " << getValue() << endl
        << "|   \\  /   |     " << "Suit: " << Suit << endl
        << "|    \\/    |     " << "Color: " << Color << endl
        << "|          |" << endl
        << "|__________|" << endl;
    return output.str();
}

// SET
void Diamond::setSuit(string Suit) {
	this->Suit = Suit;
}

void Diamond::setColor(string Color) {
	this->Color = Color;
}

// GET
string Diamond::getSuit() const {
	return Suit;
}

string Diamond::getColor() const {
	return Color;
}

// Deconstructor
Diamond::~Diamond() {} 