# -*- coding: utf-8  -*

case "abc"
  when /^(.)..$/ # 3文字の文字列なら
   puts $1 # 1文字目を返す
  when /^abc(.)def$/ # (略)なら
    $1 # 4文字目を返す
  else; raise “えらー”
end
puts $1
puts RubyVM::InstructionSequence.compile_file(__FILE__).disasm
