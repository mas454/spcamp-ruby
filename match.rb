# -*- coding: utf-8  -*
x=6

match [1,2,3,9,4,5,6] #今のRubyで実行できるけど
  when [1,2,3,x,4,5,6]
    #puts    $x
    puts "にゃー" #ここには来ない
  when [1,2,3,9,4,5,x]
    puts "わん" #ここに来る
  else
end

#puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm
