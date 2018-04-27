require_relative "lib/morse.rb"
ERROR = "Invalid Input"

case ARGV[0]
when "-e" 
    mode = 1 
when "-d"
    mode = 2 
else
    # Gets input from user
    puts "Do you want to encode a mesage in Morse Code, or decode a message?"
    puts "1 | Encode"
    puts "2 | Decode"
    print "Mode: "
    mode = gets.chomp.to_i
end
ARGV.clear # You need to clear the argv after using it in order to use gets. >:( (Does anyone still use emoticons these days?)

raise ERROR unless (1 .. 2).to_a.include? mode # Complains about benefits.

case mode
when 1 # Encodeing
    puts "Enter message to encode:"
    puts Morse.encode_message(gets.chomp)
when 2 # Decodeing
    puts "Enter message to decode:"
    puts Morse.decode_message(gets.chomp)
else
    raise ERROR # This will never be used, but is still nessesary
end