// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRITTEN BY ANDY WAGNER
#include "Deck.h"
#ifndef SPADE_H
#define SPADE_H

class Spade : public Deck {
public:
	// Constructor
	Spade(std::string, int, std::string, std::string);

	// Print Function
	virtual std::string toString() const;

	// SET
	void setSuit(std::string);
	void setColor(std::string);

	// GET
	std::string getSuit() const;
	std::string getColor() const;

	// Deconstructor
	~Spade();

private:
	std::string Suit;
	std::string Color;
};

#endif
