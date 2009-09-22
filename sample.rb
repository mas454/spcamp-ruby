def sample(arr)
 match arr
    when [x,_,_] # 3要素の配列なら
      puts 1 # 1個目を返す
    when [1,2,3,x,4,5,6] # (略)なら
      puts 2 # 4個目を返す
    else puts "error"
 end
end

sample([1,2,3,10,4,5,7])
