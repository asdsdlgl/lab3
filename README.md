make


F74042117@2015cpp:~/lab3$ ./Clock
sort():0seconds
v1/v2 aredifferent.
insertion_sort():0.01seconds.
v1/v2 arethe same.

F74042117@2015cpp:~/lab3$ ./Clock
sort():0seconds
v1/v2 are different.
insertion_sort():1.28seconds.
v1/v2 are the same.


F74042117@2015cpp:~/lab3$ ./Clock
sort():0.04seconds
v1/v2 are different.
insertion_sort():127.99seconds.
v1/v2 are the same.

F74042117@2015cpp:~/lab3$ ./Clock
sort():0.51seconds
v1/v2 are different.

F74042117@2015cpp:~/lab3$ ./Clock
sort():0.51seconds
v1/v2 are different.
另一跑過久

兩者之間的差異為Insertion Sort O(n^2)是由已知的排序一個一個向後搜索其演算結果較慢
而另一sort  O(nlogn)是先另立定一基準點在檢測所有的序列所以演算速率較快
