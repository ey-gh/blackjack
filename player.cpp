// player.cpp

#include "Player.h"

Player::Player(std::string fn, std::string ln, int dob) {
	m_fn = fn;
	m_ln = ln;
	m_dob = dob;
	m_balance = 0;
}

std::string Player::getFirstName() const {
	return m_fn;
}

std::string Player::getLastName() const {
	return m_ln;
}

int Player::getDateOfBirth() const {
	return m_dob;
}

double Player::getBalance() const {
	return m_balance;
}

void Player::deposit(double amount) {
	m_balance += amount;
}

bool Player::withdraw(double amount) {
	if (amount <= m_balance) {
		m_balance -= amount;
		return true;
	}
	
	return false;
}
