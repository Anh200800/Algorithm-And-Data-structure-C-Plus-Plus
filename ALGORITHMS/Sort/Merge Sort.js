// Giống như Quick sort, Merge sort là một thuật toán chia để trị.Thuật toán này chia mảng cần sắp xếp thành 2 nửa. 
// Tiếp tục lặp lại việc này ở các nửa mảng đã chia.Sau cùng gộp các nửa đó thành mảng đã sắp xếp.
// Hàm merge() được sử dụng để gộp hai nửa mảng.
// Hàm merge(arr, l, m, r) là tiến trình quan trọng nhất sẽ gộp hai nửa mảng thành 1 mảng sắp xếp,
// các nửa mảng là arr[l…m] và arr[m + 1…r] sau khi gộp sẽ thành một mảng duy nhất đã sắp xếp.