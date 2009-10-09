x=10
match [10, 20, 30,40,:abc]
 when [x, 20, z, "abc"]
  puts x+z
 when [10,20,*xs]
  puts xs
end

#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

