# -*- coding: utf-8  -*
class Testclass
def kp
 puts 11
end
def test
#y=10
x=6
#matchcond=0
#xyzzy = 20
match [1,2,3,8,4,5,10] 
  when [1,2,3,x,4,5,10]
    puts x
    puts "にゃー" #ここには来ない
  when [1,2,3,9,4,5,x]
    puts "わん" #ここに来る
end
end
end

t = Testclass.new
t.test
#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm
