x=10
def test(x, y)
  x + y
end
def test2(x, y)
 x - y
end
ialias test
ialias test2

10 test2 20
10 test 20
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

