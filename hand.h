#ifndef HAND_H
#define HAND_H

using namespace std;

const int HANDSIZE = 52;

class Hand
{
private:
	Card hand[HANDSIZE];		//Will hold all cards in a players hand (max = 52)
	int handSize;				//Holds size of hand

public:
	/*
	Function Purpose: Create a hand for a player
	Precondition: None
	Post Condition: An empty hand has been created
	*/
	Hand();
	
	/*
	Function Purpose: Adds a card to the hand
	Precondition: None
	Post Condition: A card has been added to the hand and the size has been increased
	*/
	void addToHand(Card c1);
	
	/*
	Function Purpose: Remove a card from the hand
	Precondition: There is at least one card in the hand
	Post Condition: A card has been removed from the hand and the size has been decreased
	*/
	void removeFromHand(Card c1);

	/*
	Function Purpose: Determine if the hand has any cards in it
	Precondition: None
	Post Condition: TRUE if the size is 0. FALSE if the size is greater than 0.
	*/
	bool isEmpty();

	/*
	Function Purpose: Get a copy of the hand array
	Precondition: None
	Post Condition: A copy of the hand has been returned
	*/
	Card getHand();

}

#endif
