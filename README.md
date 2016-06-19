# lab3
第一題:
我用兩個 member function ，readin 用來做讀入資料和calculation用來計算前五種的牛的重量，
main function 就只需要呼叫函數，然後在標準輸出。
只要make 就可以compile。
\n
第二題:
The size is 1000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0 seconds
v1/v2 are the same.

The size is 10000
sort(): 0.01 seconds
v1/v2 are different.
insertion_sort(): 1.28 seconds
v1/v2 are the same.

The size is 100000
sort(): 0.05 seconds
v1/v2 are different.
insertion_sort(): 128.34 seconds
v1/v2 are the same.

The size is 1000000
sort(): 0.52 seconds
v1/v2 are different.
insertion_sort(): 12841.8 seconds
v1/v2 are the same.

可以很明顯地看到用sort()遠快於insert sort()，
因為sort()所使用的是quick sort只需要(n logn)次，
insert sort 則要(n^2)次
quick sort有像是在排列時，
會分成很多小部分，
每個小部分排完後，
其他部分就不需要再看排好的部分，
insert sort則是要一個一個比完後，
排好的部分才不去管它，
所以會不比較慢。
