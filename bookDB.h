#ifndef BOOKDB_H
#define BOOKDB_H

using namespace std;

const int MAXBOOKS = 52;

class BookDB
{
private:
	Card books[MAXBOOKS];		//Array to hold books
	int arraySize;				//Counts total number of cards in array
	int numBooks;				//Keeps track of how many books a player has

public:
	/*
	Function Purpose: Create a book database for a player
	Precondition: None
	Post Condition: An empty book database has been created
	*/
	BookDB();

	/*
	Function Purpose: Add a book to the database
	Precondition: None
	Post Condition: A book has been added to the database
	*/
	void addBook(Card c1, Card c2);
	
	/*
	Function Purpose: Return the number of books a player has
	Precondition: None
	Post Condition: The number of books that a player has is returned.
	*/
	int getNumBooks();

}

#endif
