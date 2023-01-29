// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

// WRTITEN BY KAYCEE SALGUEIRO
#ifndef DECK_H
#define DECK_H
#include <string>

class Deck {
public:
	// Constructor
	Deck(std::string, int);

	// Print Function
	virtual std::string toString() const = 0;

	// SET
	void setName(std::string);
	void setValue(int);

	// GET
	std::string getName() const;
	int getValue() const;

	// Destructor
	~Deck();

private:
	std::string cardName;
	int cardValue;
};

#endif
