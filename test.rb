x=10
match [[10,20],10,40,"abc"]
 when [[10,y],10, k,"abc"]
  puts k
  puts y
 when [x,20,*xs]
  puts x
  puts xs
end

#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

