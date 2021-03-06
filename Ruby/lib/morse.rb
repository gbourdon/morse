module Morse
    # Decodes the character from Morse Code
    def Morse.decode_char(char)
        case char
        when ".-"
            return "a"
        when ".---"
            return "b"
        when "-.-."
            return "c"
        when "-.."
            return "d"
        when "."
            return "e"
        when "..-."
            return "f"
        when "--."
            return "g"
        when "...."
            return "h"
        when ".."
            return "i"
        when ".---"
            return "j"
        when "-.-"
            return "k"
        when ".-.."
            return "l"
        when "--"
            return "m"
        when "-."
            return "n"
        when "---"
            return "o"
        when ".--."
            return "p"
        when "--.-"
            return "q"
        when ".-."
            return "r"
        when "..."
            return "s"
        when "-"
            return "t"
        when "..-"
            return "u"
        when "...-"
            return "v"
        when ".--"
            return "w"
        when "-..-"
            return "x"
        when "-.--"
            return "y"
        when "--.."
            return "z"
        else
            raise "Invalid Character #{char}"
        end
    end

    # Encodes the character in Morse Code
    def Morse.encode_char(char)
        char.downcase! # Deals with privaged upper-case children
        case char
        when "a"
            return ".-"
        when "b"
                return ".---"
        when "c"
                return "-.-."
        when "d"
                return "-.."
        when "e"
                return "."
        when "f"
                return "..-."
        when "g"
                return "--."
        when "h"
                return "...."
        when "i"
                return ".."
        when "b"
                return ".---"
        when "k"
                return "-.-"
        when "l"
                return ".-.."
        when "m"
                return "--"
        when "n"
                return "-."
        when "o"
                return "---"
        when "p"
                return ".--."
        when "q"
                return "--.-"
        when "r"
                return ".-."
        when "s"
                return "..."
        when "t"
                return "-"
        when "u"
                return "..-"
        when "v"
                return "...-"
        when "w"
                return ".--"
        when "x"
                return "-..-"
        when "y"
                return "-.--"
        when "z"
                return "--.."    
        else
            raise "Invalid Character #{char}"
        end
    end

    # Decodes a string from Morse Code using decode_char
    def Morse.decode_message(message)
        out = String.new
        message.split("/").each do |word|
            word.split(" ").each do |char|
                out += Morse.decode_char(char)
            end
            out += " "
        end
        out
    end

    def Morse.encode_message(message)
        num = 0
        out = String.new
        message.split(" ").each do |word|
            word.split("").each do |char|
                out += Morse.encode_char(char) + " "
            end
            num += 1
            out += "/" unless num == message.split(" ").length
        end
        out
    end
end