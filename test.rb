# -*- coding: utf-8  -*
def test(arr)
 match arr
    when [x,_,_]
      x
    when [1,2,3,y]
      x
　　when [1,_,x,y]
     x+y
 end
end
puts test([1,_,2,3])
#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

