# -*- coding: utf-8  -*
 match [1,2,3]
    when [x,2,y]
     puts x
     puts y
    when [1,2,3,y]
      puts y
    when [1,2,3,4,z]
      puts z
 end
#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

