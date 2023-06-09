/* 
 * 
 */

#include "Player.h"
#include "Bank.h"
#include "Database.h"
#include <iostream>


int main() {
	Player p1("Eric", "Yu", 19960713);
	std::cout << "p1: " 
		<< p1.getFirstName() << ' ' 
		<< p1.getLastName() << " - " 
		<< p1.getDateOfBirth() << '\n';

	Database("database.txt");
}