
                            //  PHẦN 3. MẢNG 2 CHIỀU

// Bài 1. Tính tổng các hàng của ma trận
// Cho ma trận có n hàng, m cột, tính tổng các phần tử của từng hàng
// Input
// Dòng đầu tiên là n,m. 1≤n,m≤100.
// N dòng tiếp theo, mỗi dòng có m số nguyên.
// Output
// In ra tổng các phần tử của từng hàng
// Ví dụ
// Input                                Output
// 3 3
// 1 2 3                                6
// 4 5 6                                15
// 7 8 9                                24

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n ; i++){
  	 for(int j= 0;j < m; j++){
  	cin >> a[i][j];
  }
  }

 for(int i = 0; i < n ; i++){
 	int sum = 0;
  	 for(int j = 0; j < m; j++){
  sum += a[i][j];
  }
  cout << sum << endl;
  }

  return 0;
}



Bài 2. Tính tổng các cột của m trận
Cho ma trận có n hàng, m cột, tính tổng các phần tử của từng cột
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra tổng các phần tử của từng cột
Ví dụ
Input                       Output
3 3
1 2 3                         12
4 5 6                         15
7 8 9                         18

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
int n , m;
cin >> n >> m;
int a[n][m];
for(int i = 0; i < n;i++){
	for(int j = 0; j < m; j++){
	cin >> a[i][j];
	}

} 

for(int i = 0; i < n;i++){
int sum = 0;
for(int j = 0; j < m; j++){
sum += a[j][i];
}
cout << sum << " ";

}
  return 0;
}

// Bài 3. Tìm hàng có nhiều số nguyên tố nhất
// Cho ma trận có n hàng, m cột, hãy tìm hàng có nhiều số nguyên tố nhất
// Input
// Dòng đầu tiên là n,m. 1≤n,m≤100.

// N dòng tiếp theo, mỗi dòng có m số nguyên.
// Output
// In ra hàng có nhiều số nguyên tố nhất và liệt kê các số nguyên tố trên hàng đó. Trong
// trường hợp có nhiều hàng có cùng số lượng số nguyên tố thì in ra hàng đầu tiên
// Ví dụ
// Input                                    Output
// 3 3
// 23 11 22                                  1
// 14 5 9                                    23 11
// 2 3 90



Bài 4. Tìm cột có nhiều số nguyên tố nhất
Cho ma trận có n hàng, m cột, hãy tìm cột có nhiều số nguyên tố nhất
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra cột có nhiều số nguyên tố nhất và liệt kê các số nguyên tố trên cột đó. Trong trường
hợp có nhiều cột có cùng số lượng số nguyên tố thì in ra cột đầu tiên
Ví dụ
Input Output
3 3
23 11 22
14 5 9
2 3 90

2
11 5 3

Bài 5. Loại bỏ hàng và cột 1
Cho ma trận có n hàng, m cột, hãy loại bỏ hàng có tổng lớn nhất và cột có tổng phần tử
lớn nhất khỏi ma trận.
Input
Dòng đầu tiên là số bộ test T (1≤T≤100)
Mỗi test case gồm
Dòng đầu tiên là n,m. 1≤n,m≤100.

N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra ma trận sau khi xóa hàng và cột có tổng các phần tử lớn nhất
Ví dụ
Input Output
1
3 3
1 2 3
4 5 6
7 8 9

#TC 1:
1 2
4 5

Bài 6. Loại bỏ hàng và cột 2
Cho ma trận có n hàng, m cột, hãy loại bỏ hàng có tổng lớn nhất ra khỏi ma trận, sau đó
tính toán lại trên ma trận mới rồi loại bỏ cột có tổng các phần tử lớn nhất ra khỏi ma trận
Input
Dòng đầu tiên là số bộ test T (1≤T≤100)
Mỗi test case gồm
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra ma trận sau khi xóa hàng và cột có tổng các phần tử lớn nhất
Ví dụ
Input Output
1
3 3
1 2 0
3 5 6
1 3 9

#TC 1:
1 2
1 3

Bài 7. Hoán vị 2 hàng
Thực hiện hoán vị 2 hàng của ma trận
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.

N dòng tiếp theo, mỗi dòng có m số nguyên.
Dòng cuối cùng là x,y : 2 hàng cần hoán vị của ma trận
Output
In ra ma trận sau khi hoán vị 2 hàng
Ví dụ
Input Output
3 3
1 2 3
4 5 6
7 8 9
1 3

7 8 9
4 5 6
1 2 3

Bài 8. Hoán vị 2 cột
Thực hiện hoán vị 2 cột của ma trận
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Dòng cuối cùng là x,y : 2 cột cần hoán vị của ma trận
Output
In ra ma trận sau khi hoán vị 2 cột
Ví dụ
Input Output
3 3
1 2 3
4 5 6
7 8 9
1 3

3 2 1
6 5 4
9 8 7

Bài 9. Hoán vị 2 đường chéo của ma trận vuông
Thực hiện hoán vị 2 đường chéo của ma trận
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên.

Output
In ra ma trận sau khi hoán vị 2 đường chéo
Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 9

3 2 1
4 5 6
9 8 7

Bài 10 . Đếm số nguyên tố trên đường chéo chính, phụ 1
Đếm số lượng số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi phần tử thỏa
mãn chỉ đếm một lần
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên.
Output
In ra số lượng phần tử là số nguyên tố thuộc đường chéo chính hoặc đường chéo phụ
Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 9

3

Bài 11. Đếm số nguyên tố trên đường chéo chính, phụ 2
Đếm số lượng số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi giá trị thỏa
mãn chỉ đếm 1 lần.
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên. Các số đều là số nguyên dương không vượt
quá 10000.
Output
In ra số lượng phần tử là số nguyên tố thuộc đường chéo chính hoặc đường chéo phụ

Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 3

3

Bài 12. In ma trận 1
In ma trận chuyển vị
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên. Các số đều là số nguyên dương không vượt
quá 10000.
Output
In ra ma trận chuyển vị của ma trận ban đầu
Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 9

1 4 7
2 5 8
3 6 9

Bài 13. In ma trận 2
In ma trận theo mẫu
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên. Các số đều là số nguyên dương không vượt
quá 10000.
Output
In ra ma trận chuyển vị của ma trận ban đầu
Ví dụ
Input Output
3
1 2 3 9 8 7

4 5 6
7 8 9

6 5 4
3 2 1

Bài 14. In ma trận 3
In ma trận theo mẫu
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên. Các số đều là số nguyên dương không vượt
quá 10000.
Output
In ra ma trận chuyển vị của ma trận ban đầu
Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 9

9 6 3
8 5 2
7 4 1

Bài 15. In ma trận 4
In ma trận theo mẫu
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên. Các số đều là số nguyên dương không vượt
quá 10000.
Output
In ra ma trận chuyển vị của ma trận ban đầu
Ví dụ
Input Output
3
1 2 3
4 5 6
7 8 9

3 6 9
2 5 8
1 4 7

Bài 16. Tổng 2 ma trận
Tính tổng của 2 ma trận cùng cấp
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
Các dòng tiếp theo là 2 ma trận
Output
Tổng của 2 ma trận
Ví dụ
Input Output
3 3
1 2 3
2 2 0
1 4 5
1 1 0
1 2 3
1 2 6

2 3 3
3 4 3
2 6 11

Bài 17. Tính hiệu của 2 ma trận
Tính tổng của 2 ma trận cùng cấp
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
Các dòng tiếp theo là 2 ma trận
Output
Hiệu của 2 ma trận
Ví dụ
Input Output
3 3
1 2 3
2 2 0
1 4 5
1 1 0
1 2 3
1 2 6

0 1 3
1 0 -3
0 2 -1

Bài 18. Tính tích của 2 ma trận
Cho ma trận a có cấp nxm, ma trận b có cấp mxp, tính tích của 2 ma trận trên
Input
Dòng đầu tiên là 3 số n, m, p (1≤m, n, p ≤100).
N dòng tiếp theo mỗi dòng m số của ma trận thứ 1
M dòng tiếp theo mỗi dòng p số của ma trận thứ 2
Output
In ra tích của 2 ma trận ban đầu
Ví dụ
Input
Input Output
3 4 5
1 2 3 4
5 6 7 8
9 10 11 12
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20

110 120 130 140 150
246 272 298 324 350
382 424 466 508 550

Bài 19. Tích của ma trận với ma trận chuyển vị của nó
Cho ma trận cấp n,m. Tìm tích của nó với ma trận chuyển vị
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
Kết quả tích của ma trận với chuyển vị của nó
Ví dụ
Input Output
4 5
16 42 84 60 16
28 8 81 83 43
68 82 76 68 95
65 45 84 55 78

12932 13256 16516 14534
13256 16147 18445 16903
16516 18445 30773 25644
14534 16903 25644 22415

Bài 20. Ma trận xoáy ốc
Cho cấp của ma trận xoáy ốc, in ra ma trận xoáy ốc tương ứng
Input
Dòng duy nhất chứa số nguyên dương n không quá 10.
Output
In ra ma trận xoáy ốc cấp n tương ứng
Ví dụ
Input
Input Output
3

1 2 3
8 9 4
7 6 5

Bài 21. Ma trận xoáy ốc ngược
Cho cấp của ma trận xoáy ốc, in ra ma trận xoáy ốc ngược tương ứng
Input
Dòng duy nhất chứa số nguyên dương n không quá 10.
Output
In ra ma trận xoáy ốc cấp n tương ứng
Ví dụ
Input
Input Output
3 9 8 7
2 1 6
3 4 5

Bài 22. Ma trận xoáy ốc nguyên tố
Cho cấp của ma trận xoáy ốc, in ra ma trận xoáy ốc gồm các số nguyên tố tăng dần tương
ứng
Input

Dòng duy nhất chứa số nguyên dương n không quá 10.
Output
In ra ma trận xoáy ốc cấp n tương ứng
Ví dụ
Input
Input Output
3 2 3 5
19 23 7
17 13 11

Bài 23. Ma trận xoáy ốc Fibonacci
Cho cấp của ma trận xoáy ốc, in ra ma trận xoáy ốc gồm các số fibonacci tăng dần tương
ứng
Input
Dòng duy nhất chứa số nguyên dương n không quá 9.
Output
In ra ma trận xoáy ốc cấp n tương ứng
Ví dụ
Input
Input Output
3 0 1 1
13 21 2
8 5 3

Bài 24. Sắp xếp các phần tử theo hàng
Cho ma trận cấp nxm. Sắp xếp các phần tử ở mỗi hàng theo thứ tự tăng dần.
Input
Dòng đầu tiên là số lượng hàng và cột n, m. 1≤n,m≤100
N dòng tiếp theo mỗi dòng m cột là các phần tử của ma trận
Output
In ra ma trận sau khi đã sắp xếp các hàng của nó
Ví dụ

Input Output
3 3
1 4 1
2 9 8
3 3 1

1 1 4
2 8 9
1 3 3

Bài 25. Sắp xếp các phần tử theo cột
Cho ma trận cấp nxm. Sắp xếp các phần tử ở mỗi cột theo thứ tự tăng dần.
Input
Dòng đầu tiên là số lượng hàng và cột n, m. 1≤n,m≤100
N dòng tiếp theo mỗi dòng m cột là các phần tử của ma trận
Output
In ra ma trận sau khi đã sắp xếp các cột của nó
Ví dụ
Input Output
3 3
1 4 1
2 9 8
3 3 1

1 3 1
2 4 1
3 9 8