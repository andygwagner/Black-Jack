// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRTITEN BY KAYCEE SALGUEIRO
#include "Deck.h"
#ifndef CLUB_H
#define CLUB_H

class Club : public Deck {
public:
	// Constructor
	Club(std::string, int, std::string, std::string);

	// Print Function
	virtual std::string toString() const;

	// SET
	void setSuit(std::string);
	void setColor(std::string);

	// GET
	std::string getSuit() const;
	std::string getColor() const;

	// Deconstructor
	~Club();

private:
	std::string Suit;
	std::string Color;
};

#endif
