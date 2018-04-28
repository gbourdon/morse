// morse.cpp : Defines the entry point for the application.
// morse: a plaintext morse code translator

#include "morse.h"

std::string encodeChar(char cha) {
	switch (cha) {
	case 'a':
		return ".-";
		break;
	case 'b':
		return "-...";
		break;
	case 'c':
		return "-.-.";
		break;
	case 'd':
		return "-..";
		break;
	case 'e':
		return ".";
		break;
	case 'f':
		return "..-.";
		break;
	case 'g':
		return "..-";
		break;
	case 'h':
		return "....";
		break;
	case 'i':
		return "..";
		break;
	case 'j':
		return ".---";
		break;
	case 'k':
		return ".-.";
		break;
	case 'l':
		return ".-..";
		break;
	case 'm':
		return "--";
		break;
	case 'n':
		return "-.";
		break;
	case 'o':
		return "---";
		break;
	case 'p':
		return ".--.";
		break;
	case 'q':
		return "--.-";
		break;
	case 'r':
		return ".-.";
		break;
	case 's':
		return "...";
		break;
	case 't':
		return "-";
		break;
	case 'u':
		return "..-";
		break;
	case 'v':
		return "...-";
		break;
	case 'w':
		return ".--";
		break;
	case 'x':
		return ".--.";
		break;
	case 'y':
		return "-.--";
		break;
	case 'z':
		return "--..";
		break;
	case '1':
		return ".----";
		break;
	case '2':
		return "..---";
		break;
	case '3':
		return "...--";
		break;
	case '4':
		return "....-";
		break;
	case '5':
		return ".....";
		break;
	case '6':
		return "-....";
		break;
	case '7':
		return "--...";
		break;
	case '8':
		return "---..";
		break;
	case '9':
		return "----.";
		break;
	case '0':
		return ".....";
		break;
	default:
		return "";
		break;
	}
}

/* This is fun...
char encodeChar(std::string cha) {
	switch (cha) {
	case ".-":
		return 'a';
		break;
	case "-...":
		return 'b';
		break;
	case "-.-.":
		return 'c';
		break;
	case "-..":
		return 'd';
		break;
	case ".":
		return 'e';
		break;
	case "..-.":
		return 'f';
		break;
	case "..-":
		return 'g';
		break;
	case "....":
		return 'h';
		break;
	case "..":
		return 'i';
		break;
	case ".---":
		return 'j';
		break;
	case ".-.":
		return 'k';
		break;
	case ".-..":
		return 'l';
		break;
	case "--":
		return 'm';
		break;
	case "-.":
		return 'n';
		break;
	case "---":
		return 'o';
		break;
	case ".--.":
		return 'p';
		break;
	case "--.-":
		return 'q';
		break;
	case ".-.":
		return 'r';
		break;
	case "...":
		return 's';
		break;
	case "-":
		return 't';
		break;
	case "..-":
		return 'u';
		break;
	case "...-":
		return 'v';
		break;
	case ".--":
		return 'w';
		break;
	case ".--.":
		return 'x';
		break;
	case "-.--":
		return 'y';
		break;
	case "--..":
		return 'z';
		break;
	case ".----":
		return '1';
		break;
	case "..---":
		return '2';
		break;
	case "...--":
		return '3';
		break;
	case "....-":
		return '4';
		break;
	case ".....":
		return '5';
		break;
	case "-....":
		return '6';
		break;
	case "--...":
		return '7';
		break;
	case "---..":
		return '8';
		break;
	case "----.":
		return '9';
		break;
	case ".....":
		return '0';
		break;
	}
}
*/

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

int main()
{
	std::string mode; // What mode are we using?
	std::cout << "Are you encodeing or decodeing a message? ";
	std::cin >> mode;
	std::cout << std::endl;

	if (mode == "encodeing") {
		typedef std::vector<std::string>::iterator iter; typedef std::vector<char>::iterator iter_char;
		std::string message;

		std::cout << "What is the message you want to encode? " << std::endl;

		while (std::getline(std::cin, message)) { // This is overcomplicated, I know, but it bloody works,
			if (message != "") { break; }
		}
		//std::cout << std::endl;
		std::vector<std::string> words = split(message, ' ');
		for (iter word = words.begin(); word != words.end(); word++) {
			std::vector<char> chars(word->begin(), word->end());
			for (iter_char cha = chars.begin(); cha != chars.end(); cha++)
				std::cout << encodeChar(*cha);
			std::cout << " / ";
		}
		std::cout << std::endl;
	} else {
		std::cout << "Decodeing is a WIP" << std::endl;
		
		std::string message; // The message in morse code
		std::vector<std::string> words; // The words in morse code
		std::vector<std::string> chars; // The characters of the message
		typedef std::vector<std::string>::iterator iter;

		std::cout << "What is the message you want to encode?";
		std::cin >> message;
		words = split(message, '/');
		for (iter word = words.begin(); word != words.end(); word++) {
			chars = split(*word, ' ');
			for (iter cha = chars.begin(); cha != chars.end(); cha++) {
				// std::cout << decodeChar(*cha); // Need to create decodeChar in a way that works
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
