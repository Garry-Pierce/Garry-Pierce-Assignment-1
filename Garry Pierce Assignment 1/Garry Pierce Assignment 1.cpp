// Garry Pierce Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Option1, Option2, Option3, Attack1, Attack2, RatHealthAttack1, RatHealthAttack2, damage; //Players choice variables.
int RatHealth = 25; //Enemy health.
char Name[50]; //Player name.

void AttackPrimary()
{
	int damage = 1 + (rand() % 10); //gives the attack damage.
	RatHealthAttack1 = RatHealth - damage; // Subtracts the damage from the rats health
	cout << "You delt " << damage << " Damage to the rats, there health is now " << RatHealthAttack1 << endl;
}
void AttackSecondary()
{
	int damage = 5 + (rand() % 20); //gives the attack damage.
	RatHealthAttack1 = RatHealth - damage; // Subtracts the damage from the rats health
	cout << "You delt " << damage << " Damage to the rats, there health is now " << RatHealthAttack1 << endl;
}

int main()
{
    
	srand(static_cast<unsigned int>(time(0))); // Taken from Moodle // seed random number generator based on current time.
    cout << "You awake in a cave to find a sword and a bow which do you chose?" << endl;
    cout << "Enter 1 to take the sword." << endl;
    cout << "Enter 2 to take the bow." << endl;
	retry:  //Restarts the if statement if given a wrong input.
    cin >> Option1;
	if (Option1 == 1)
	{
		cout << "You take the sword finding it to be heavier than expected." << endl;
	}
	else if (Option1 == 2)
	{
		cout << "Taking the bow you see some arrows near by eqipting them on your person." << endl;
	}
	else
	{
		cout << "Please enter option 1 for the sword or 2 for the bow." << endl;
		goto retry;
	}
	cout << "Moving out of the cave You spot a deer." << endl;
	switch (Option1) //Players choice has impact on the text.
	{
	case 1:	cout << "You attack with your sword but miss and the deer gets away." << endl;
		break;
	case 2: cout << "You aim your bow and hit the deer who promtly runs off with the arrow still in its side." << endl;
		break;
	}
	cout << "After testing your weapon you travel forward trying to remember who you are and why you were in that cave." << endl;
	cout << "upon your travels you come across a town in to the north and a house in the west which way do you travel?" << endl;
	cout << "Please enter 1 for north or 2 for west." << endl;
    retry2:
	cin >> Option2;
	if (Option2 == 1)
	{
		cout << "Heading to town you see a man who asks you your name." << endl;
	}
	else if (Option2 == 2)
	{
		cout << "Heading to the house the owner comes out and asks you your name." << endl;
	}
	else
	{
		cout << "Please enter option 1 for the town or 2 for the house." << endl;
		goto retry2;
	}
	cout << "M-my name? its...uhh" << endl;
	cin >> Name;
	cout << "Well " << Name << " you look like a warrior could you kill the rodents living in my basement for me?" << endl;
	cout << "Enter 1 for yes and 2 for no." << endl;
    retry3:
	cin >> Option3;
	if (Option3 == 1)
	{
		cout << "Wonderful (grabbing your hand the man pulls you into the basement where you are met with a hoard of rats) Have fun!." << endl;
	}
	else if (Option3 == 2)
	{
		cout << "(Before you can reject the mans offer he grabs your hand and pulls you into the basement where you are met with a hoard of rats) Have fun!." << endl;
	}
	else
	{
		cout << "Please enter option 1 for yes or 2 for no." << endl;
		goto retry3;
	}
	cout << "Readying your weapon you face off with the rats" << endl;
	cout << "1 to primary attack" << endl;
	cout << "2 to secondry attack" << endl;
	cout << "note Primary attacks deal 1-10 damage where as secondry attack deals 5-20 damage but can only be used every other turn" << endl;
retry4:
	cin >> Attack1;
		if (Attack1 == 1)
		{
			AttackPrimary();
		}
		else if (Attack1 == 2)
		{
			AttackSecondary();
		}
		else
		{
			cout << "Please select 1 for primary attack and 2 for secondary attack." << endl;
			goto retry4;
		}
		RatHealth = RatHealthAttack1; // sets rats health to whatever was achived in the first attack option.
		cout << Name << " attack them again quickly!" << endl;
		cout << "1 to primary attack" << endl;
		cout << "2 to run!" << endl;
		cout << "note Primary attacks deal 1-10 damage. Secondary attack is unavailable this turn." << endl;
	retry5:
		cin >> Attack2;
		if (Attack2 == 1)
		{
			AttackPrimary();
		}
		else if (Attack2 == 2)
		{
			cout << "Where are you going!?" << endl;
			cout << "Coward!" << endl;
			cout << "Ashamed you never return to the valley and live out your days in a cave. For you, the journey was over before it even began." << endl;
			return 0;
		}
		else
		{
			cout << "Please select 1 for primary attack and 2 to run." << endl;
			goto retry5;
		}
		RatHealth = RatHealthAttack2; // sets rats health to whatever was achived in the second attack option.
		if (RatHealth <= 0)
		{
			cout << "Well done " << Name << " You've slain the rats take this coin for your trouble." << endl;
			cout << "After your exciting victory you walk forth wondering what your next battle will be." << endl;
			cout << "Find out in assignment 2!" << endl;
			return 0;
		}
		else
		{
			cout << "Move aside " << Name << "! (Pushing you out of the way the man finishes off the rats." << endl;
			cout << "After your lack luster first quest you walk forth wondering what your next battle will be." << endl;
			cout << "Find out in assignment 2!" << endl;
			return 0;
		}
}
