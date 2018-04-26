require_relative "lib/morse.rb"

print "Encode or Decode? "
mode = gets.chomp

case mode
when "Encode"
    print "Enter character to encode: "
    input = gets.chomp
    puts Morse.encode_char(input)
when "Decode"
    print "Enter character to decode: "
    input = gets.chomp
    puts Morse.decode_char(input)
else
    puts "Silly Rabbit, you can only Encode or Decode, not #{mode}!"
end