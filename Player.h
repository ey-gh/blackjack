// Player.h

/* Player class:
 * 5-12 players
 * players can join and leave at random, but order should be preserved
 * 
 */

#pragma once

#include <string>

class Bank;

class Player {
public:
		// Constructor
	Player(std::string fn, std::string ln, int dob);

		// Accessors
	std::string getFirstName() const;
	std::string getLastName() const;
	int			getDateOfBirth() const;
	double		getBalance() const;

		// Mutators
	void deposit(double amount);
	bool withdraw(double amount);


private:
	std::string m_fn;
	std::string m_ln;
	int			m_dob;
	double		m_balance;
};