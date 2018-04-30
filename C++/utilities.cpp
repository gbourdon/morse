#include "utilities.h"

std::vector<std::string> split(const std::string& string, char splitChar) {
	std::vector<std::string> out; // The output

	typedef std::string::size_type string_size; // A less verbose way of storing a string's size and/or location
	string_size i = 0; // Where we are in the string

	while (i != string.size()) {
		while (i != string.size() && string[i] == splitChar) // Deals with opening characters
			++i;

		string_size j = i; // How many characters have we passed since encountering splitChar

		while (j != string.size() && string[j] != splitChar) // While there isn't splitChar
			++j;

		if (i != j) { // If there is progress after, add that substring to the output
			out.push_back(string.substr(i, j - i));
			i = j;
		}
	}
	return out;
}
