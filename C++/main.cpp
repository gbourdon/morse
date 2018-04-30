// morse.cpp : Defines the entry point for the application.
// morse: a plaintext morse code translator

#include <iostream>
#include <string>
#include <vector>
#include "morse.h"
#include "utilities.h"

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

		std::vector<std::string> words = split(message, ' ');
		for (iter word = words.begin(); word != words.end(); word++) {
			std::vector<char> chars(word->begin(), word->end());
			for (iter_char cha = chars.begin(); cha != chars.end(); cha++)
				std::cout << encodeChar(*cha) + " ";
			std::cout << " / ";
		}
		std::cout << std::endl;
	} else {
		std::string message; // The message in morse code
		std::vector<std::string> words; // The words in morse code
		std::vector<std::string> chars; // The characters of the message
		typedef std::vector<std::string>::iterator iter;

		std::cout << "What is the message you want to decode?" << std::endl;
		while (std::getline(std::cin, message)) { // This is overcomplicated, I know, but it bloody works.
			if (message != "") { break; }
		}
		words = split(message, '/');
		for (iter word = words.begin(); word != words.end(); word++) {
			chars = split(*word, ' ');
			for (iter cha = chars.begin(); cha != chars.end(); cha++) {
				std::cout << decodeChar(*cha); // Need to create decodeChar in a way that works
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

