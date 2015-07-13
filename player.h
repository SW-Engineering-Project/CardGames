#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{

private:
	string name;
	Hand hand;

public:
	Player();
	
friend:
	void setName();
	string getName();
	void getHand();
	
}

#endif
