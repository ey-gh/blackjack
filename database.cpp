// database.cpp

#include "Database.h"
#include "Player.h"
#include <fstream>
#include <iostream>
#include <sstream>

Database::Database(const std::string& path) {
	m_path = path;
}

bool Database::loadFile(std::ifstream& file) {
	file.open(m_path, std::ifstream::in);
	return file.is_open();
}

bool Database::find(Player player) {
	std::ifstream file;
	if (!loadFile(file)) {
		std::cout << "File could not be opened.\n";
		return false;
	}

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string fn;
		std::string ln;
		int dob;
		double balance;

		if (iss >> fn >> ln >> dob >> balance) {
			if (fn == player.getFirstName()
				&& ln == player.getLastName()
				&& dob == player.getDateOfBirth()) {

			}
		}
	}
	
}