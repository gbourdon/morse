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

char decodeChar(std::string cha) {
	if (cha == ".-") { return 'a'; }
	else if (cha == "-...") { return 'b'; }
	else if (cha == "-.-.") { return 'c'; }
	else if (cha == "-..") { return 'd'; }
	else if (cha == ".") { return 'e'; }
	else if (cha == "..-.") { return 'f'; }
	else if (cha == "..-") { return 'g'; }
	else if (cha == "....") { return 'h'; }
	else if (cha == "..") { return 'i'; }
	else if (cha == ".---") { return 'j'; }
	else if (cha == ".-.") { return 'k'; }
	else if (cha == ".-..") { return 'l'; }
	else if (cha == "--") { return 'm'; }
	else if (cha == "-.") { return 'n'; }
	else if (cha == "---") { return 'o'; }
	else if (cha == ".--.") { return 'p'; }
	else if (cha == "--.-") { return 'q'; }
	else if (cha == ".-.") { return 'r'; }
	else if (cha == "...") { return 's'; }
	else if (cha == "-") { return 't'; }
	else if (cha == "..-") { return 'u'; }
	else if (cha == "...-") { return 'v'; }
	else if (cha == ".--") { return 'w'; }
	else if (cha == ".--.") { return 'x'; }
	else if (cha == "-.--") { return 'y'; }
	else if (cha == "--..") { return 'z'; }
	else if (cha == ".----") { return '1'; }
	else if (cha == "..---") { return '2'; }
	else if (cha == "...--") { return '3'; }
	else if (cha == "....-") { return '4'; }
	else if (cha == ".....") { return '5'; }
	else if (cha == "-....") { return '6'; }
	else if (cha == "--...") { return '7'; }
	else if (cha == "---..") { return '8'; }
	else if (cha == "----.") { return '9'; }
	else if (cha == ".....") { return '0'; }
	else { return ' '; }
}
