// Kaycee Salgueiro & Anna White & Andy Wagner
// Object Oriented Programming (ELEC 3150-01)
// Final Project - Black Jack
// 8/10/2020

#include <iostream>
#include <iomanip>
#include <list>
#include <numeric> 
#include "Deck.h"
#include "Diamond.h"
#include "Club.h"
#include "Heart.h"
#include "Spade.h"

using namespace std;

// Function Declarations
void printList(list <Deck*>);
int AddCard(list <Deck*> &deck, list <Deck*> &hand, int);
int totalValue(list <Deck*>);

int main() {
	int game_loop{ 0 };
	while (game_loop == 0) {
		list <Deck*> all_cards;
		list <Deck*> player_cards;
		list <Deck*> dealer_cards;
		int looper{ 0 };
		int Option;
		int deckSize{ 52 };
		Deck* cards[52];
		int newCard;
		int P_value;
		int D_value;

		// WRITTEN BY ANDY WAGNER
		// Inserting cards into class and array
		// ACES
		cards[0] = new Spade("Ace", 1, "Spade", "Black");
		cards[1] = new Club("Ace", 1, "Club", "Black");
		cards[2] = new Diamond("Ace", 1, "Diamond", "Red");
		cards[3] = new Heart("Ace", 1, "Heart", "Red");
		// TWO
		cards[4] = new Spade("Two", 2, "Spade", "Black");
		cards[5] = new Club("Two", 2, "Club", "Black");
		cards[6] = new Diamond("Two", 2, "Diamond", "Red");
		cards[7] = new Heart("Two", 2, "Heart", "Red");
		// THREE
		cards[8] = new Spade("Three", 3, "Spade", "Black");
		cards[9] = new Club("Three", 3, "Club", "Black");
		cards[10] = new Diamond("Three", 3, "Diamond", "Red");
		cards[11] = new Heart("Three", 3, "Heart", "Red");
		// FOUR
		cards[12] = new Spade("Four", 4, "Spade", "Black");
		cards[13] = new Club("Four", 4, "Club", "Black");
		cards[14] = new Diamond("Four", 4, "Diamond", "Red");
		cards[15] = new Heart("Four", 4, "Heart", "Red");
		// FIVE
		cards[16] = new Spade("Five", 5, "Spade", "Black");
		cards[17] = new Club("Five", 5, "Club", "Black");
		cards[18] = new Diamond("Five", 5, "Diamond", "Red");
		cards[19] = new Heart("Five", 5, "Heart", "Red");
		// SIX
		cards[20] = new Spade("Six", 6, "Spade", "Black");
		cards[21] = new Club("Six", 6, "Club", "Black");
		cards[22] = new Diamond("Six", 6, "Diamond", "Red");
		cards[23] = new Heart("Six", 6, "Heart", "Red");
		// SEVEN
		cards[24] = new Spade("Seven", 7, "Spade", "Black");
		cards[25] = new Club("Seven", 7, "Club", "Black");
		cards[26] = new Diamond("Seven", 7, "Diamond", "Red");
		cards[27] = new Heart("Seven", 7, "Heart", "Red");
		// EIGHT
		cards[28] = new Spade("Eight", 8, "Spade", "Black");
		cards[29] = new Club("Eight", 8, "Club", "Black");
		cards[30] = new Diamond("Eight", 8, "Diamond", "Red");
		cards[31] = new Heart("Eight", 8, "Heart", "Red");
		// NINE
		cards[32] = new Spade("Nine", 9, "Spade", "Black");
		cards[33] = new Club("Nine", 9, "Club", "Black");
		cards[34] = new Diamond("Nine", 9, "Diamond", "Red");
		cards[35] = new Heart("Nine", 9, "Heart", "Red");
		// TEN
		cards[36] = new Spade("Ten", 10, "Spade", "Black");
		cards[37] = new Club("Ten", 10, "Club", "Black");
		cards[38] = new Diamond("Ten", 10, "Diamond", "Red");
		cards[39] = new Heart("Ten", 10, "Heart", "Red");
		// JACK
		cards[40] = new Spade("Jack", 10, "Spade", "Black");
		cards[41] = new Club("Jack", 10, "Club", "Black");
		cards[42] = new Diamond("Jack", 10, "Diamond", "Red");
		cards[43] = new Heart("Jack", 10, "Heart", "Red");
		// QUEEN
		cards[44] = new Spade("Queen", 10, "Spade", "Black");
		cards[45] = new Club("Queen", 10, "Club", "Black");
		cards[46] = new Diamond("Queen", 10, "Diamond", "Red");
		cards[47] = new Heart("Queen", 10, "Heart", "Red");
		// KING
		cards[48] = new Spade("King", 10, "Spade", "Black");
		cards[49] = new Club("King", 10, "Club", "Black");
		cards[50] = new Diamond("King", 10, "Diamond", "Red");
		cards[51] = new Heart("King", 10, "Heart", "Red");

		// Inserting cards into linked list
		for (unsigned int i = 0; i < deckSize; i++) {
			all_cards.push_back(cards[i]);
		}

		// Determine Dealer card 1
		deckSize = AddCard(all_cards, dealer_cards, deckSize);
		// Determine Dealer card 2
		deckSize = AddCard(all_cards, dealer_cards, deckSize);
		// Determine Player card 1
		deckSize = AddCard(all_cards, player_cards, deckSize);
		// Determine Player card 2
		deckSize = AddCard(all_cards, player_cards, deckSize);

		cout << "Welcome to BlackJack!" << endl;
		cout << "Your cards are: " << endl;
		printList(player_cards);

		P_value = totalValue(player_cards);
		cout << "The value of your cards is: " << P_value << endl;

		// WRTITEN BY KAYCEE SALGUEIRO
		// Menu
		while (looper == 0) {
			cout << "Do you want to hit or stay?" << endl <<
				"1 - Hit " << endl <<
				"2 - Stay" << endl;
			cin >> Option;
			switch (Option) {
			case 1:
				// add card to player hand
				deckSize = AddCard(all_cards, player_cards, deckSize);
				printList(player_cards);
				P_value = totalValue(player_cards);
				cout << "The value of your cards is: " << P_value << endl;
				if (P_value > 21) {
					cout << "Value over 21, you bust." << endl << "Dealer Wins!" << endl;
					looper = 1;
				}
				else if (P_value == 21) {
					cout << "Black Jack! Player wins!" << endl;
					looper = 1;
				}
				break;
			case 2:
				// Compare dealer and player hand
				D_value = totalValue(dealer_cards);
				cout << "Dealer cards are: " << endl;
				printList(dealer_cards);
				cout << "The value of the dealer's cards is: " << D_value << endl;

				cout << endl << "Your cards are: " << endl;
				printList(player_cards);
				cout << "The value of your cards is: " << P_value << endl;
				if (D_value > P_value) {
					cout << "Dealer Wins!" << endl;
					looper = 1;
				}
				else if (D_value == P_value) {
					cout << "Dealer Wins!" << endl;
					looper = 1;
				}
				else {
					cout << "Player Wins!" << endl;
					looper = 1;
				}
				break;
			}
		}
		cout << "Would you like to play again? 0 - Yes  1 - No" << endl;
		cin >> game_loop;
		cout << "------------------------------------------------------------------------------------------------------------" << endl;
	}
	return 0;
}

// WRITTEN BY ANNA WHITE
// Function to print cards
void printList(list <Deck*> l) {					//www.geeksforgeeks.org/list-cpp-stl/ for iterator
	list <Deck*> ::iterator it;
	for (it = l.begin(); it != l.end(); ++it) {
		Deck* current = *it;
		cout << current->toString() << endl;
	}
}

// Fuction to add card to dealer or player hand
int AddCard(list <Deck*> &deck, list <Deck*> &hand, int size) {
	int newCard{ 0 };
	srand(time(NULL));
	newCard = rand() % size + 1;
	list <Deck*> ::iterator it = deck.begin();
	advance(it, newCard);
	hand.splice(hand.end(), deck, it);			//www.geeksforgeeks.org/list-splice-function-in-c-stl/
	size = size - 1;
	return size;
}

// Function to determine total value of player or dealer hand
int totalValue(list <Deck*> hand) {
	int value{ 0 };
	list <Deck*> ::iterator it;
	for (it = hand.begin(); it != hand.end(); ++it) {
		Deck* current = *it;
		value += current->getValue();
	}
	return value;
}

