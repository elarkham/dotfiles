#include <iostream>
#include <vector>
using namespace std;

#include "deck.h"
#include "card.h"
#include "hand.h"

void printDeck(const Deck& d);
void printDeck(const vector<Card> &);

int main()
{
    const int HAND_SIZE = 7;
    
    Deck d;
    int k;

    printDeck(d);
    cout << "\n---after shuffling---\n" << endl;

    d.shuffle();
    
    printDeck(d);
    
    vector<Card> player0(HAND_SIZE);
    vector<Card> player1(HAND_SIZE);
    vector<Card> player2(HAND_SIZE);
    vector<Card> player3(HAND_SIZE);
	 
	for(k=0; k < HAND_SIZE; k++)
    {
		player0[k] = d.getCard();
		player1[k] = d.getCard();
		player2[k] = d.getCard();
		player3[k] = d.getCard();
    }
    cout<<"------------" <<endl;
    cout<<"Player0's Hand"<<endl;
    printDeck(player0);
    cout<<"Player1's Hand"<<endl;
    printDeck(player1);
    cout<<"Player2's Hand"<<endl;
    printDeck(player2);
    cout<<"Player3's Hand"<<endl;
    printDeck(player3);

    
    return 0;
    
}

void printDeck(const Deck& d)
// post: print all cards in the Deck d
//       (cards still in d when done)
{
    Deck copy(d);  // make a copy to get cards from
    int count = d.size();
    int k;
    for(k=0; k < count; k++)
    {
	cout << copy.getCard() << endl;
    }
}

void printDeck(const vector<Card> & hand)
{
   int k;
   cout << "------------" << endl;
   for (k=0; k< hand.size(); k++)
   {
      cout << hand[k] << endl;
   }
   cout << "------------" << endl;
} 
/*
ace of spades
ace of hearts
ace of diamonds
ace of clubs
two of spades
two of hearts
two of diamonds
two of clubs
three of spades
three of hearts
three of diamonds
three of clubs
four of spades
four of hearts
four of diamonds
four of clubs
five of spades
five of hearts
five of diamonds
five of clubs
six of spades
six of hearts
six of diamonds
six of clubs
seven of spades
seven of hearts
seven of diamonds
seven of clubs
eight of spades
eight of hearts
eight of diamonds
eight of clubs
nine of spades
nine of hearts
nine of diamonds
nine of clubs
ten of spades
ten of hearts
ten of diamonds
ten of clubs
jack of spades
jack of hearts
jack of diamonds
jack of clubs
queen of spades
queen of hearts
queen of diamonds
queen of clubs
king of spades
king of hearts
king of diamonds
king of clubs

---after shuffling---

three of diamonds
seven of clubs
nine of clubs
ten of spades
queen of clubs
ace of hearts
eight of hearts
king of hearts
queen of hearts
jack of spades
three of hearts
five of clubs
nine of spades
seven of hearts
eight of diamonds
king of clubs
three of spades
two of clubs
eight of clubs
jack of hearts
nine of diamonds
two of hearts
ace of diamonds
five of diamonds
four of diamonds
six of diamonds
seven of diamonds
six of hearts
jack of clubs
nine of hearts
two of spades
king of spades
queen of diamonds
three of clubs
eight of spades
five of spades
king of diamonds
ten of hearts
four of spades
five of hearts
six of clubs
queen of spades
jack of diamonds
four of hearts
ten of clubs
ace of spades
seven of spades
two of diamonds
ten of diamonds
ace of clubs
six of spades
four of clubs

------------
Player0's Hand
------------
three of diamonds
queen of clubs
queen of hearts
nine of spades
three of spades
nine of diamonds
four of diamonds
------------
Player1's Hand
------------
seven of clubs
ace of hearts
jack of spades
seven of hearts
two of clubs
two of hearts
six of diamonds
------------
Player2's Hand
------------
nine of clubs
eight of hearts
three of hearts
eight of diamonds
eight of clubs
ace of diamonds
seven of diamonds
------------
Player3's Hand
------------
ten of spades
king of hearts
five of clubs
king of clubs
jack of hearts
five of diamonds
six of hearts
------------
*/
