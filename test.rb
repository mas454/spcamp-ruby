x=10
ialias +
match [[10,[15,[20]]],10,40,"abc"]
 when [[10,[15, [20]]],x, k,"abc"]
  puts k
  #puts y
  puts x
 when [x,20,*xs]
  puts x
  puts xs
end

#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

