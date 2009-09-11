# -*- coding: utf-8  -*
#x=6

headcond=0
xyzzy = 20
match y=[1,2,3,8,4,5,6] #今のRubyで実行できるけど
  when [1,2,3,x,4,5,6]
    x= headcond[3]
    y= headcond[4]
    puts "にゃー" #ここには来ない
  when [1,2,3,9,4,5,x]
    puts "わん" #ここに来る
  else
end
puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm

