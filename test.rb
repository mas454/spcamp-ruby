x=10
match [10, 20, 30, "abc"]
 when [x, 20, z, "abc"]
  puts x+z
 when [10,20,30]
  puts 40
end

#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

