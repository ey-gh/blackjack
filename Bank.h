// Bank.h

/* This class should accomplish:
 * Loading a database containing players' money info
 * Modifying database
 */

#pragma once

#include <string>

class Bank {
public:
		// Constructor
	Bank() : m_balance(0) { }

		// Accessors
	double getBalance() const { return m_balance; }

		// Mutators
	void deposit(double amount) {
		m_balance += amount;
	}

	bool withdraw(double amount) {
		if (amount <= m_balance) {
			m_balance -= amount;
			return true;
		}
		return false;
	}

private:
	double m_balance;
};