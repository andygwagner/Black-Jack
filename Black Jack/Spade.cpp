// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRITTEN BY ANDY WAGNER
#include "Spade.h"
#include <iostream>
#include <sstream>

using namespace std;

// Constructor
Spade::Spade(string cardName, int cardValue, string Suit, string Color)
	:Deck{ cardName , cardValue }
{
	this->Suit = Suit;
	this->Color = Color;
}

// Print Function (Written by Kaycee Salgeuiro)
string Spade::toString() const
{
    ostringstream output;
    output << " __________" << endl
        << "|          |" << endl
        << "|    /\\    |     " << getName() << " of Spades" << endl
        << "|   /  \\   |     " << "Card Value: " << getValue() << endl
        << "|  (_  _)  |    " << "Suit: " << Suit << endl
        << "|    ||    |     " << "Color: " << Color << endl
        << "|          |" << endl
        << "|__________|" << endl;
    return output.str();
}

// SET
void Spade::setSuit(string Suit) {
	this->Suit = Suit;
}

void Spade::setColor(string Color) {
	this->Color = Color;
}

// GET
string Spade::getSuit() const {
	return Suit;
}

string Spade::getColor() const {
	return Color;
}

// Deconstructor
Spade::~Spade() {} 