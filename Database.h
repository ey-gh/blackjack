#pragma once

#include <string>

class Player;

class Database {
public:
		// Constructor
	Database(const std::string&);

	bool find(Player);

private:
	std::string m_path;

	bool loadFile(std::ifstream&);
};