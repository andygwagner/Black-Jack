// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRTITEN BY KAYCEE SALGUEIRO
#include "Club.h"
#include <iostream>
#include <sstream>

using namespace std;

// Constructor
Club::Club(string cardName, int cardValue, string Suit, string Color)
	:Deck{ cardName , cardValue }
{
	this->Suit = Suit;
	this->Color = Color;
}

// Print Function (Written by Kaycee Salgeuiro)
string Club::toString() const
{
    ostringstream output;
    output << " __________" << endl
        << "|          |" << endl
        << "|    __    |     " << getName() << " of Clubs" << endl
        << "|  _(  )_  |     " << "Card Value: " << getValue() << endl
        << "| (_    _) |     " << "Suit: " << Suit << endl
        << "|   |__|   |     " << "Color: " << Color << endl
        << "|          |" << endl
        << "|__________|" << endl;

    return output.str();
}

// SET
void Club::setSuit(string Suit) 
{
	this->Suit = Suit;
}

void Club::setColor(string Color) 
{
	this->Color = Color;
}

// GET
string Club::getSuit() const
{
	return Suit;
}

string Club::getColor() const 
{
	return Color;
}

// Deconstructor
Club::~Club() {}