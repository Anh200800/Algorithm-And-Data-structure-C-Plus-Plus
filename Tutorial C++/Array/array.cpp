                                // PHẦN 1. MẢNG 1 CHIỀU
// Bài 1. Các bài toán làm quen với mảng một chiều.
// Cho mảng một chiều bao gồm các số nguyên.
// Input
// Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106).

// Dòng thứ 2 là các phần tử trong mảng a1, a2, a3... an được đặt cách nhau một vài khoảng
// trắng. (-109≤ai≤109).
// Output
// In ra kết quả tương ứng với yêu cầu của đề bài.
// a.In ra số lớn nhất và nhỏ nhất trong mảng.
// Input                     Output
// 5
// -2 10 2 9 3                10 -2

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int min = a[0];
int max = a[0];
for(int i = 0; i < n;i++){
if(a[i] > max){
max = a[i];
} 
if(a[i] < min){
min = a[i];
} 
}
cout << min << " " << max < " ";
  return 0;
}

// b. Đếm số lượng số chẵn, lẻ trong mảng.
// Input                           Output
// 5

// 2 10 2 9 3                        3 2

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int even = 0;
int odd = 0;
for(int i = 0; i < n;i++){
if(a[i] % 2 == 0){
++even;
} else {
++odd;
} 
}
cout << even << " " << odd < " ";
  return 0;
}

// c. Liệt kê các số nguyên tố trong mảng.
// Input                               Output
// 5
// 2 10 2 9 3                          2 2 3

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int nt(int n){
for(int i = 2; i <= sqrt(n); i++){
	if(n % i == 0)
	return 0;
}
return n > 1;
}
int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int even = 0;
int odd = 0;
for(int i = 0; i < n;i++){
if(nt(a[i])) 
cout << a[i] << " ";
}
  return 0;
}
d. Tìm và in ra chỉ số của số nhỏ nhất (lớn nhất) trong mảng, nếu có nhiều số có cùng giá
trị nhỏ nhất thì in ra chỉ số đầu tiên ( cuối cùng).
Input                                 Output
5
2 10 2 9 3                               0

Input                                 Output
5
2 10 2 9 3                               2

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int min = 1e9 + 1, idx;
for(int i = 0; i < n;i++){
if(a[i] < min) {                 //a[i] <= min
min = a[i];
idx = i;
}

}
cout << idx << " ";

  return 0;
}
// e. Tìm và in ra số lớn nhất và lớn thứ 2 trong mảng. Các bạn làm thêm với số nhỏ nhất và
// nhỏ thứ 2.
// Input                        Output
// 5
// 2 10 2 9 10                   10 10

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int max1 = -1e9 - 1;
int max2 = -1e9 - 1;

for(int i = 0; i < n;i++){
if(a[i] > max1) {
    max2 = max1;
max1 = a[i];
} 
 else if(a[i] > max2) {
max2 = a[i];
}
}
cout << max1 << " " << max2;

  return 0;
}
// f. Tìm và in ra số lớn nhất và lớn thứ 2 trong mảng, 2 số này là 2 số có giá trị khác nhau .
// Nếu không có số lớn thứ 2 in ra -1 cho số thứ 2. Các bạn làm thêm với số nhỏ nhất và nhỏ
// thứ 2.

// Input                      Output
// 5
// 2 10 2 9 10                 10 9
// Input                      Output
// 5
// 9 9 9 9 9                   9 -1

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n;i++){
cin >> a[i];
} 
int max1 = -1e9 - 1;
int max2 = -1e9 - 1;

for(int i = 0; i < n;i++){
if(a[i] > max1) {
    max2 = max1;
max1 = a[i];
} 
 else if(a[i] > max2 && a[i] != max1) {
max2 = a[i];
}
}
if(max2==-1e9 - 1) cout << max1 << " " << -1;
else cout << max1 << " " << max2;
  return 0;
}
g. Đếm và liệt kê các số toàn chữ số lẻ trong mảng.
Input                    Output
5                          4
3 5 7 11 23              3 5 7 11

#include <stdio.h>
#include <math.h>
using namespace std;
int check (int n){
while(n) {
int r = n % 10;
if(r % 2 == 0) return 0;
n#include <iostream>
 /= 10;
}
return 1;
}
int main() {
int n = 0; 
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
  cin >> a[i];
}

int cnt = 0;
for(int i = 0; i < n; i++){
if(check(a[i])){
b[cnt] = a[i];
++cnt;
}
}
cout << cnt << endl;
for(int i = 0; i < cnt; i++){
cout << b[i] << " ";
}
  return 0;
}

h. Cho mảng các số nguyên khác nhau đôi một. Liệt kê các phần tử trong mảng có ít nhất
2 phần tử khác lớn hơn nó.
Input                             Output
5
3 5 7 11 23                       3 5 7

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n = 0; 
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
cin >> a[i];
}
int max1 = -1e9-1, max2 = -1e9-1;
for(int i = 0; i < n; i++){
if(a[i] > max1){
max2 = max1;
max1 = a[i];
}
else if(a[i] > max2){
max2 = a[i];
}
}
for(int i = 0; i < n; i++){
if(a[i] < max2) cout << a[i] << " ";
}
  return 0;
}
i. Một số được định nghĩa là số đẹp nếu nó chứa cả chữ số 1 và chữ số 9. In ra các số đẹp
trong mảng. Nếu mảng không tồn tại số đẹp thì in ra -1.
Input                                   Output
5
3 5 7 11 91900                          91900

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int check (int n){
	int c1 = 0, c9 = 0;
while(n) {
int r = n % 10;
if(r == 1) c1 = 1;
if(r == 9) c9 = 1;
n/= 10;
}
return c1 && c9;
}
int main() {
int n = 0; 
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
  cin >> a[i];
}

int ok = 0;
for(int i = 0; i < n; i++){
if(check(a[i])){
cout << a[i];
ok = 1;
}
}
if(!ok) cout << -1;
  return 0;
}
j. Cho mảng một chiều các số nguyên, liệt kê các phần tử có ít nhất một phần
tử liền kề trái dấu với nó.
Input                                   Output

7
-1 2 3 -1 5 8 9                         -1 2 3 -1 5

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
int n; 
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
  cin >> a[i];
}
for(int i = 0; i < n; i++){
if(i == 0 && a[0] * a[1] < 0){
cout << a[0];
}

else if(i == n-1 && a[n - 1] * a[n-2] < 0){
cout << a[n-1];
}

else if(a[i] * a[i - 1] < 0|| a[i] * a[i + 1] < 0 ){
cout << a[i] << " ";
}
}
  return 0;
}
k. Kiểm tra xem mảng có đối xứng hay không, nếu có in YES, ngược lại in NO.
Input                                    Output
7
1 2 3 4 3 2 1                            YES

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int dx(int a[], int n){
int l = 0, r = n - 1;
while(l < r){
if(a[l] != a[r]) return 0;
++l; --r;
}
return 1;
}
int main() {
int n; 
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
  cin >> a[i];
}
if(dx(a, n)) {
cout << "YES";
} else cout << "NO";
  return 0;
}
Bài 2. Mảng tăng.
Kiểm tra xem mảng cho trước có tăng dần hay không, mảng tăng dần được
định nghĩa là mảng có phần tử đứng sau lớn hơn phần tử đứng trước nó. Nếu mảng
tăng dần in ra YES, trường hợp ngược lại in ra NO.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử ai trong mảng . (-109≤ai≤109
).

Output
In YES nếu mảng tăng dần. NO trong trường hợp ngược lại.
Ví dụ
Input Output
5
1 2 2 3 5 NO

Bạn làm thêm với trường hợp mảng giảm.
Bài 3. Số không nhỏ hơn số đứng trước
Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy không
nhỏ hơn các số đứng trước nó (tính cả phần tử đầu tiên).

Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử ai trong mảng . (-109≤ai≤109
).

Output
Kết quả của bài toán.
Ví dụ
Input Output
6
1 2 9 2 0 22 1 2 9 22

Bài 4. Lineland
Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi
thành
phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được
đặt tại một điểm.
Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể gửi thư nếu người
nhận sống ở một thành phố khác.
Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành
phố của người nhận.
Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối
thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa
để gửi thư từ thành phố thứ i đến một số thành phố khác
Input
Dòng đầu tiên của đầu vào chứa số nguyên n (2<= n ≤ 10^5) - số lượng thành phố
trong Lineland. Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-
10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i. Tất cả các xi là
khác biệt và theo thứ tự tăng dần.
Output

In n dòng, dòng thứ i phải chứa hai số nguyên mini, maxi, cách nhau bởi một
khoảng trắng, trong đó mini là chi phí tối thiểu để gửi thư từ thành phố thứ i và
maxi là chi phí tối đa để gửi thư từ thành phố thứ i.
Ví dụ
Input Output
4
-5 -2 2 7

3 12
3 9
4 7
5 12

Bài 5. Vé xem phim
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu
phim đứng thành một hàng lớn. Mỗi người trong số họ có một hóa đơn 100, 50
hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé
cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo
đúng thứ tự mọi người trong hàng không?
Input
Dòng đầu tiên chứa số nguyên n (1 <= n<= 10^5) - số người trong hàng. Dòng tiếp
theo chứa n số nguyên, mỗi số bằng 25, 50 hoặc 100 - giá trị của các hóa đơn mà
mọi người có.
Output
In "YES" (không có dấu ngoặc kép) nếu nhân viên đặt phòng có thể bán vé cho mỗi
người và có thể trả tiền thừa. Nếu không thì in "NO".
Ví dụ
Input
4
25 25 50 50
Output
YES

Bài 6. Cặp số nguyên tố cùng nhau
Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau
trong mảng.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử ai trong mảng . (1≤ai≤109
).

Output
Kết quả của bài toán.
Ví dụ
Input Output
5
2 4 8 3 6 3

Bài 7. Tích lớn nhất của 2 số trong mảng
Cho một dãy số nguyên có n phần tử. Tìm tích lớn nhất của 2 số trong mảng.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).

Dòng thứ 2 là các phần tử ai trong mảng . (-10
9≤ai≤109
).

Output
Kết quả của bài toán.
Ví dụ
Input Output
5
2 4 8 3 6 48

Bạn làm thêm tìm tích nhỏ nhất của 2 số trong mảng.
Bài 8. Dãy con liên tiếp các phần tử kề nhau đều khác nhau
Cho một dãy số nguyên có n phần tử. Tìm dãy con liên tiếp có các phần tử liền kề khác
nhau có độ dài lớn nhất.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử ai trong mảng . (-109≤ai≤109
).

Output
Kết quả của bài toán.
Ví dụ
Input Output
10
1 2 3 3 3 4 5 2 1 3 6

Tìm dãy con liên tiếp có các phần tử giống nhau có độ dài dài nhất.
Input Output
10
1 2 3 3 3 4 5 2 1 3 3

Tìm dãy con liên tiếp có 2 phần tử liền kề nhau trái dấu có độ dài dài nhất.
Input Output
10
1 2 3 3 3 4 5 2 1 -3 2

Tìm dãy con tăng liên tiếp có độ dài dài nhất.

Input Output
10
1 2 3 3 3 4 5 2 1 -3 3

Bài 9. Dãy tăng
Một đoạn tăng trong một dãy số nguyên là một đoạn liên tiếp trong dãy sao cho phần từ
phía sau lớn hơn phần từ phía trước. Cho dãy số với n phần tử (n không quá 100, các phần
tử đều không quá 1000). Viết chương trình tìm các đoạn tăng liên tiếp trong dãy mà số phần
tử là nhiều nhất.
Input: Dòng đầu ghi số bộ test. Mỗi test gồm 2 dòng, dòng đầu ghi số N là số phần tử của
dãy. Dòng sau ghi N số của dãy. N không quá 100, các số trong dãy đều nguyên dương và
không quá 1000.
Output: Với mỗi bộ test, ghi ra thứ tự bộ test. Sau đó là 1 dòng ghi độ dài của đoạn tăng dài
nhất. Tiếp theo là một số dòng ghi lần lượt các đoạn tăng dài nhất, từ trái qua phải trong
dãy ban đầu.
Ví dụ:
Input Output
2
16

2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
12

2 3 2 3 2 3 2 2 2 3 4 1

Test 1:
4

2 3 5 7
4 5 8 9

6 7 10 12
Test 2:

3
2 3 4

Bài 10. Cặp số bằng nhau
Viết chương trình đếm các cặp số bằng nhau liên tiếp trong dãy số nguyên.
Input: Dòng đầu tiên ghi số bộ test. Mỗi bộ test có hai dòng:
 Dòng đầu ghi số phần tử của dãy, không quá 30
 Dòng tiếp theo ghi các phần tử của dãy, mỗi phần tử cách nhau một khoảng trống.
Các phần tử không quá 100.
Output: Mỗi bộ test viết ra trên một dòng giá trị tổng chữ số tương ứng
Ví dụ:
Input Output
2

4
1 3 3 4

12
1 2 3 3 3 3 4 4 5 5 5 1

1

6

Bài 11. Các số xuất hiện trong mảng
Cho mảng các số nguyên. Thực hiện liệt kê các giá trị xuất hiện trong mảng theo thứ tự
xuất hiện, mỗi giá trị xuất hiện chỉ liệt kê một lần.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
Kết quả của bài toán.
Input Output
10
1 2 3 3 3 3 1 9 9 0 1 2 3 9 0

Bài 12. Tần suất lớn nhất 1
Cho mảng các số nguyên. Thực hiện tìm số có số lần xuất hiện nhiều nhất trong mảng,
trong trường hợp có nhiều số có cùng số lần xuất hiện thì lấy số có giá trị nhỏ hơn.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
In ra số có số lần xuất hiện nhiều nhất và số lần xuất hiện của nó
Input Output
10
1 2 3 3 3 3 9 9 9 9 3 4

Bài 13. Tần suất lớn nhất 2
Cho mảng các số nguyên. Thực hiện tìm số có số lần xuất hiện nhiều nhất trong mảng,
trong trường hợp có nhiều số có cùng số lần xuất hiện thì lấy số xuất hiện trước trong
mảng.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
In ra số có số lần xuất hiện nhiều nhất và số lần xuất hiện của nó
Input Output
10
1 2 9 9 9 9 3 3 3 3 9 4

Bài 14. Tần suất 3
Cho mảng các số nguyên không âm, thực hiện liệt kê các giá trị trong mảng và số lần xuất
hiện.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
In ra các giá trị trong mảng và số lần xuất hiện.
Input Output
10
1 2 9 9 9 9 3 3 3 3

1 1
2 1
9 4

3 4

Bài 15. Liệt kê các số chỉ xuất hiện một lần trong mảng
Cho mảng các số nguyên không âm, thực hiện liệt kê các số chỉ xuất hiện một lần trong
mảng.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
In ra các số chỉ xuất hiện một lần trong mảng.
Input Output
10
1 2 9 9 9 9 3 3 3 3 1 2

Bài 16. Range1
Cho mảng các số nguyên, thực hiện tính toán tổng các phần tử trong đoạn từ vị trí L tới vị
trí R trong mảng.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤100000).
Dòng thứ 2 là các phần tử ai trong mảng . (-109≤ai≤106
).

Dòng thứ 3 là số lượng truy vấn q (1≤q≤1000).
q dòng tiếp theo, mỗi dòng là 2 vị trí L, R (1≤L≤R≤1000).
Output
In ra giá trị cho từng truy vấn.

Input Output
10
1 2 3 4 5 6 7 8 9 10
3
1 3
1 10
2 5

6
55
14

Bài 17. Kadane Algo
Cho mảng các số nguyên. Tìm dãy con liên tiếp có tổng các phần tử lớn nhất.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (-106≤ai≤106
).

Output
In ra tổng lớn nhất của dãy con liên tiếp trong mảng.
Ví dụ
Input Output
5
1 2 -9 3 5 8

Bài 18. Sliding Window
Cho mảng các số nguyên. Hãy tìm dãy con k phần tử liên tiếp có tổng các phần tử lớn
nhất.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n,k. (1≤k≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (-106≤ai≤106
).

Output
In ra tổng lớn nhất của dãy con có k liên tiếp trong mảng, và các số trong dãy con đó. Nếu
có nhiều dãy con có cùng tổng lớn nhất thì in ra dãy con cuối cùng.
Ví dụ
Input Output
10 3
1 2 4 4 8 1 3 3 9 4

16
3 9 4

Bài 19. Số lặp đầu tiên
Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.
Input
Dòng đầu tiên là số lượng test case. T (1≤T≤100).
Mỗi test case bao gồm 2 dòng :
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤10000).
Dòng thứ 2 là các phần tử ai trong mảng . (0≤ai≤106
).

Output
In ra số đầu tiên lặp, nếu không có phần tử nào bị lặp in ra -1.
Ví dụ
Input Output
2
5
1 2 2 3 1
4
8 9 7 2

2
-1

Bài 20. Trộn 2 dãy đã sắp xếp
Cho 2 mảng đã được sắp xếp tăng dần, thực hiện trộn 2 dãy trên thành một dãy được sắp
xếp.
Input
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. (1≤n, m≤106
).

Dòng thứ 2 là n phần tử trong dãy số 1. (-106≤ai≤106
).
Dòng thứ 3 là m phần tử trong dãy thứ 2. (-106≤ai≤106
).

Output
In ra kết quả của bài toán.
Input Output
4 5
1 2 2 3
1 2 3 5 9

1 1 2 2 2 3 3 5 9

Bài 21. Tìm hợp và giao của 2 mảng 1
Cho 2 mảng đã được sắp xếp tăng dần, thực hiện tìm hợp và giao của 2 mảng. Các phần
tử trong mỗi mảng khác nhau đôi một.
Input
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. (1≤n, m≤106
).

Dòng thứ 2 là n phần tử trong dãy số 1. (-106≤ai≤106
).
Dòng thứ 3 là m phần tử trong dãy thứ 2. (-106≤ai≤106
).

Output
Dòng thứ 1 là hợp của 2 mảng
Dòng thứ 2 là giao của 2 mảng

Input Output
4 5
1 2 2 3
1 2 3 5 9

1 2 3 5 9
1 2 3

Bài 22. Tìm hợp và giao của 2 mảng 2
Cho 2 mảng số nguyên không âm, các phần tử trong từng mảng khác nhau đôi một, thực
hiện tìm hợp và giao của 2 mảng.
Input
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. (1≤n, m≤106
).

Dòng thứ 2 là n phần tử trong dãy số 1. (0≤ai≤106
).
Dòng thứ 3 là m phần tử trong dãy thứ 2. (0≤ai≤106
).

Output
Dòng thứ 1 là hợp của 2 mảng
Dòng thứ 2 là giao của 2 mảng
Input Output
4 5
1 4 2 3
1 2 3 5 9

1 2 3 4 5 9
1 2 3

Bài 23. Sắp xếp chẵn lẻ
Cho mảng có n số nguyên, thực hiện sắp xếp các phần tử trong mảng sao cho các sỗ chẵn
xếp trước, các số lẻ xếp sau, các số đều được xếp theo thứ tự tăng dần.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n ( 1≤n≤1000).
Dòng thứ 2 là n phần tử trong mảng (-106≤ai≤106
)

Output
In ra kết quả theo yêu cầu đề bài
Ví dụ
Input Output
10
9 8 1 2 3 6 5 4 7 10 2 4 6 8 10 1 3 5 7 9

Bài 24. Sắp xếp chẵn lẻ 2
Cho mảng có n số nguyên, thực hiện sắp xếp các phần tử trong mảng sao cho các sỗ chẵn
xếp trước, các số lẻ xếp sau, các số chẵn được xếp tăng dần, các số lẻ được xếp giảm dần
Input
Dòng đầu tiên là số lượng phần tử trong mảng n ( 1≤n≤1000).
Dòng thứ 2 là n phần tử trong mảng (-106≤ai≤106
)

Output
In ra kết quả theo yêu cầu đề bài
Ví dụ
Input Output
10
9 8 1 2 3 6 5 4 7 10 2 4 6 8 10 9 7 5 3 1

Bài 25. Số xuất hiện nhiều lần nhất trong dãy
Cho một dãy số nguyên dương không quá 100 phần tử, các giá trị trong dãy không quá
30000. Hãy xác định xem số nào là số xuất hiện nhiều lần nhất trong dãy. Chú ý: trong
trường hợp nhiều số khác nhau cùng xuất hiện số lần bằng nhau và là lớn nhất thì in ra tất
cả các số đó theo thứ tự xuất hiện trong dãy ban đầu.
Input: Dòng đầu là số bộ test, không quá 20. Mỗi bộ test gồm hai dòng. Dòng đầu ghi số
phần tử của dãy, dòng tiếp theo ghi các phần tử của dãy.

Output: Với mỗi bộ test, đưa ra số xuất hiện nhiều lần nhất trong dãy đã cho.
Ví dụ:
Input Output
2
10
1 2 3 1 2 3 1 2 3 1
10
1 2 3 4 5 6 7 8 9 0

1
1 2 3 4 5 6 7 8 9 0

Bài 26. Trộn 2 dãy và sắp xếp
Cho hai dãy số nguyên dương A và B không quá 100 phần tử, các giá trị trong dãy không
quá 30000 và số phần tử của hai dãy bằng nhau. Hãy trộn hai dãy với nhau sao cho dãy A
được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng
thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số
tính từ 0)
Input: Dòng 1 ghi số bộ test. Với mỗi bộ test: dòng đầu tiên ghi số n. Dòng tiếp theo ghi
n số nguyên dương của dãy A. Dòng tiếp theo ghi n số nguyên dương của dãy B
Output: Với mỗi bộ test, đưa ra thứ tự bộ test và dãy kết quả.
Ví dụ:
Input Output
2
5
1 2 3 1 2
3 1 2 3 1
4
4 2 7 1
5 6 2 8

Test 1:
1 3 1 3 2 2 2 1 3 1
Test 2:
1 8 2 6 4 5 7 2

Bài 27. Đổi tiền (Tham lam)
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ
tiền mỗi mệnh giá là không hạn chế. Một người cần đổi số tiền có giá trị bằng N. Hãy xác
định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?
Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 50). Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤
100000).
Output: Với mỗi test, in ra đáp án trên một dòng.
Test ví dụ:
Input Output
2
70
121

2
3

Bài 28. Dãy ưu thế
Cho dãy A[] chỉ bao gồm các số nguyên dương không quá 105 nhưng không biết trước số
phần tử của dãy. Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau
đây:
 Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy
nhiều hơn số lượng số lẻ.
 Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều
hơn số lượng số chẵn.
Hãy kiểm tra xem dãy A[] có phải là dãy ưu thế hay không.
Dữ liệu vào
 Dòng đầu ghi số bộ test, không quá 10
 Mỗi bộ test là một dãy các số nguyên dương (không quá 104

) và có không quá 200

số, các số cách nhau 1 khoảng trống, không biết trước số lượng phần tử.
Kết quả
 Nếu dãy A[] thỏa mãn là dãy ưu thế thì in ra YES, nếu không in ra NO
Ví dụ
Input Output

2
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171

YES
NO

Bài 29. Liệt kê và đếm
Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách nhau vài khoảng
trống, có thể xuống dòng. Hãy tìm các số không giảm (các chữ số theo thứ tự từ trái qua
phải tạo thành dãy không giảm) và đếm số lần xuất hiện của các số đó.
Input: Gồm các số nguyên dương không quá 9 chữ số. Không quá 100000 số.
Kết quả Ghi ra các số không giảm kèm theo số lần xuất hiện. Các số được liệt kê theo thứ
tự sắp xếp số lần xuất hiện giảm dần.
Ví dụ:
Input Output
123 321 23456 123 123 23456 3523 123 321
8988 7654 9899 3456 123 999 3456
987654321 4546 63543 4656 13432 4563
123471 659837 454945 34355 9087 9977
98534 3456 23134

123 5
3456 3
23456 2
999 1

Bài 30. Tam giác vuông
Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a

2 + b2 = c2

thì đó là ba cạnh

của một tam giác vuông.
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số
thỏa mãn là ba cạnh của tam giác vuông hay không.
Dữ liệu vào:
 Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
 Mỗi test gồm số nguyên N (1≤ N ≤5000).
 Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109
).

Kết quả:

Với mỗi test, in ra trên một dòng “YES” nếu tìm được, và “NO” trong trường hợp ngược
lại.
Ví dụ:
Input Output
2
5
3 1 4 6 5
3
1 1 1

YES
NO

Bài 31. BRT
Thành phố X có N thị trấn trên trục đường chính. Tọa độ của các thị trấn lần lượt là a[1],
a[2], ..., a[N], các tọa độ này là phân biệt, không có 2 tọa độ nào trùng nhau.
Chính quyền thành phố muốn xây dựng một tuyến buýt nhanh BRT để kết nối 2 thị trấn
gần nhau nhất với nhau.
Bạn hãy tính thử xem chiều dài của tuyến buýt này bằng bao nhiêu? Và có bao nhiêu cặp
thị trấn có tiềm năng giống nhau để xây dựng tuyến BRT này.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test bắt đầu bằng số nguyên N (N ≤ 100 000).
Dòng tiếp theo gồm N số nguyên A[i] (-109 ≤ A[i] ≤ 109
).

Output:
Với mỗi test in ra 2 số nguyên C và D, lần lượt là khoảng cách ngắn nhất giữa 2 thị trấn, và
số lượng cặp thị trấn có cùng khoảng cách ngắn nhất này.
Ví dụ:
Input Output
2 2 1

4
6 -3 0 4
3
-2 0 2

2 2

PHẦN 2. CÁC BÀI TOÁN LIÊN QUAN TỚI SẮP XẾP VÀ TÌM KIẾM
Bài 0. Custom quicksort
Cho một mảng các số nguyên có n phần tử thực hiện viết comparator cho hàm qsort để
thực hiện các cách sắp xếp sau.
Input
Dòng đầu tiên là số lượng phần tử của mảng.(1≤n≤100000).
Dòng thứ 2 là n phần tử ai trong mảng (-106≤ai≤106
).

Output
In ra các số trong mảng cách nhau một khoảng trắng.
1.Sắp xếp các phần tử tăng dần
2.Sắp xếp các phần tử giảm dần.
3.a.Sắp xếp theo trị tuyệt đối tăng dần.
3.b.Sắp xếp theo trị tuyệt đối tăng dần, nếu 2 số có cùng trị tuyệt đối thì số số dương được
xếp sau.
Input Output
5
14 -88 6 23 -14 6 -14 14 6 -88

4.Sắp xếp theo tổng các chữ số tăng dần.(Số có tổng chữ số lớn hơn sẽ xếp sau).
Input Output
5
11 88 6 23 14 11 14 23 6 88
5.Sắp xếp theo tổng các chữ số tăng dần, nếu 2 số có cùng tổng chữ số thì in ra số có giá
trị nhỏ hơn sẽ xếp sau

Input Output
5
11 88 6 23 14 11 23 14 6 88

6. Sắp xếp sao cho các số chẵn xếp trước, các số lẻ xếp sau.
7. Sắp xếp sao cho các sỗ chẵn xếp trước theo thứ tự giảm dần, các số lẻ xếp sau theo thứ
tự tăng dần.
Input Output
10
1 2 3 4 5 6 7 8 9 10 10 8 6 4 2 1 3 5 7 9

Bài 1. Sắp xếp đổi chỗ trực tiếp
Hãy thực hiện thuật toán sắp xếp đổi chỗ trực tiếp trên dãy N số nguyên. Ghi ra các bước
thực hiện thuật toán. Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số
nguyên dương (không quá 100). Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán.
Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.
Ví dụ:
Input Output
4
5 7 3 2

Buoc 1: 2 7 5 3
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7

Bài 2. Sắp xếp chọn
Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện
thuật toán.
Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá
100).
Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số
trong dãy cách nhau đúng một khoảng trống.
Ví dụ:
Input Output

4
5 7 3 2

Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7

Bài 3. Sắp xếp chèn
Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện
thuật toán.
Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá
100).
Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số
trong dãy cách nhau đúng một khoảng trống.
Ví dụ:
Input Output
4
5 7 3 2

Buoc 0: 5
Buoc 1: 5 7
Buoc 2: 3 5 7
Buoc 3: 2 3 5 7

Bài 4. Sắp xếp nổi bọt
Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện
thuật toán.
Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá
100).
Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số
trong dãy cách nhau đúng một khoảng trống.
Ví dụ:
Input Output
4
5 3 2 7

Buoc 1: 3 2 5 7

Buoc 2: 2 3 5 7

Bài 5. In theo khuôn dạng
Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn
dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, ... Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta
đưa ra : 12, 5, 9, 6, 8, 7.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là
số phần tử của mảng n; dòng tiếp theo là n số A [i] của mảng A [];các số được viết
cách nhau một vài khoảng trống.
 T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input: Output:
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2

7 1 6 2 5 3 4
9 1 8 2 7 3 6 4

Bài 6. Sắp xếp theo trị tuyệt đối
Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị
tuyệt đối của |X - A[i] |. Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp
xếp theo nguyên tắc kể trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-
2|=5. Trong trường hợp có nhiều số có cùng giá trị tuyệt đối so với X thì sắp xếp theo thứ
tự xuất hiện ban đầu của chúng.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là
số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số
được viết cách nhau một vài khoảng trống.

 T, n, X thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, X, A[i] ≤105
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input: Output:
2
5 7
10 5 3 9 2
5 6
1 2 3 4 5

5 9 10 3 2
5 4 3 2 1

Bài 7.Counting sort
Cho mảng A[] gồm n phần tử. Các phần tử của mảng A[] chỉ bao gồm các số 0, 1, 2. Hãy
sắp xếp mảng A[] theo thứ tự tăng dần. Ví dụ với A[] = {0, 2, 1, 2, 0} ta kết quả A[] = {0,
0, 1, 2, 2}.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A [i] của mảng A
[]các số được viết cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ A[i] ≤2; 1≤ n ≤106
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input: Output:
2
5
0 2 1 2 0
3
0 1 0

0 0 1 2 2
0 1

Bài 8. Sắp xếp lại dãy con
Cho mảng A[] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A[R], .., A[L] sao cho
khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp. Ví dụ với A[] = {10, 12,
20, 30, 25, 40, 32, 31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A[4],.., A[9]: {30, 25,
40, 32, 31, 35} để có mảng được sắp.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A [i] của mảng A
[]các số được viết cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤106

; 0≤ A[i] ≤107
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input: Output:
2
11
10 12 20 30 25 40 32 31 35 50 60
9
0 1 15 25 6 7 30 40 50

4 9
3 6

Bài 9. Đếm các cặp phần tử có tổng bằng k
Cho mảng A[] gồm n phần tử và số k. Đếm tất cả các cặp phần tử của mảng có tổng bằng
k. Ví dụ A[] = {1, 5, 3, 4, 2 }, k = 7 ta có kết quả là 2 cặp (3, 4), (5, 2).
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n là số phần tử của mảng A[] và k; dòng tiếp theo là n số A[i] của mảng
A[]các số được viết cách nhau một vài khoảng trống.
 T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 0≤ k ≤100, 0≤ A[i] ≤103
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ

Input: Output:
2
5 9
1 5 4 1 2
3 2
1 1 1

1
3

Bài 10. Sắp xếp chữ số
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao
gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có
kết quả là {0, 1, 2, 3, 4}.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết
cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤107

; 0≤ A[i] ≤1016
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
3
131 11 48
4
111 222 333 446

1 3 4 8
1 2 3 4 6

Bài 11. Cặp có tổng gần 0 nhất
Cho mảng A[] gồm n phần tử, hãy tìm cặp phần tử có tổng gần nhất so với 0. Trong
trường hợp có nhiều cặp có cùng kết quả thì in ra cặp đầu tiên xuất hiện.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.

 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số
được viết cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 2≤N ≤103

, -106≤A[i] ≤106
.

Output:
 Đưa ra tổng gần nhất với 0 của cặp phần tử.
Ví dụ.
Input: Output:
3
3
-8 -66 -60
6
-21 -67 -37 -18 4 -65
4
3 -4 1 0

-68
-14
-1

Bài 12. K phần tử lớn nhất trong mảng
Cho mảng A[] gồm n phần tử, hãy tìm k phần tử lớn nhất của mảng. Các phần tử được
đưa ra theo thứ tự giảm dần.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
đưa vào N và K; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một
vài khoảng trống.
 T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤K < N ≤103

, 1≤A[i] ≤106
.

Output:
 Đưa ra k phần tử lớn nhất trên một dòng.
Ví dụ
Input: Output:
2
5 3

12 10 9
12 9

10 7 9 12 6
6 2
9 7 12 8 6 5

Bài 13.Tìm số lần xuất hiện của phần tử
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy tìm số lần xuất hiện số X trong mảng.
Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
đưa vào N và X; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một
vài khoảng trống.
 T, N, X, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤103

, 1≤A[i], X ≤106
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3

4
-1

Bài 14. Tích lớn nhất
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là tìm tích
giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. Ví dụ A[] = {5, 7,
112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.

 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa
vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i]
; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
 T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤106

; -108≤ A[i] ≤108
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6
1 4 2 3 10 2
4 2 6 5 2 9

-9
20

Bài 15. Hợp nhất 2 mảng
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là hợp nhất
hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. Ví dụ A[] = {5, 7, 112, 9, 3,
6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là C[] = {-1, 1, 0, 2, 3, 5, 6, 6, 7, .
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa
vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i]
; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
 T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤106

; -108≤ A[i] ≤108
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
1

2 3 5 10 15 20

3 3
10 5 15
20 3 2

Bài 16.Tìm phần tử còn thiếu
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[].
Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các
số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng
với các số còn thiếu là 4, 8.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ;
các số được viết cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, A[i] ≤103
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
5
4 5 3 8 6
3
2 1 3

1
0

Bài 17. Sắp xếp theo số lần xuất hiện
Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện
các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần
xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết
quả là A[] = {4, 4, 5, 5, 6}.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.

 Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên
đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ;
các số được viết cách nhau một vài khoảng trống.
 T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤104

; 1≤ A[i] ≤105
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
5
5 5 4 6 4
5
9 9 9 2 5

4 4 5 5 6
9 9 9 2 5

Bài 18.Tìm kiếm nhị phân
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong mảng
A[], ngược lại đưa ra -1.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
đưa vào n, X là số các phần tử của mảng A[] và số X cần tìm; dòng tiếp theo đưa
vào n số A[i] (1≤i≤n) các số được viết cách nhau một vài khoảng trống.
 T, n, A, X thỏa mãn ràng buộc: 1≤T≤100; 1≤N, X, A[i] ≤106
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ.
Input: Output:
2
5 16
2 4 7 9 16
7 98
1 22 37 47 54 88 96

1
-1

Bài 19.Vị trí đầu tiên, vị trí cuối cùng
Cho mảng A[] gồm n phần tử đã được sắp xếp và số nguyên x, tìm vị trí đầu tiên và vị trí
cuối cùng của x trong mảng trong O(logn) .(Tìm hiểu hàm lower_bound và upper_bound
và sử dụng thuần thục .Trong trường hợp x không xuất hiện trong mảng thì in ra -1.
Input:
 Dòng đầu tiên đưa vào số lượng bộ test T.
 Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất
đưa vào n và x; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một
vài khoảng trống.
 T, n, A[i], x thỏa mãn ràng buộc: 1≤T≤100; 1≤N, x, A[i] ≤107
.

Output:
 Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input: Output:
3
10 7
1 2 3 4 5 6 7 8 9 10
5 3
3 3 3 3 3
5 10
1 7 8 9 9

7 7
1 5
-1

Bài tập làm thêm. (70 bài đầu tiên).
https://codeforces.com/problemset?order=BY_SOLVED_DESC&tags=sortings
https://drive.google.com/file/d/1KNc55nTaJjzrhSeI4Jmoi5kaVVKFV1NC/view?usp=shar
ing

PHẦN 3. MẢNG 2 CHIỀU

Bài 1. Tính tổng các hàng của ma trận
Cho ma trận có n hàng, m cột, tính tổng các phần tử của từng hàng
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra tổng các phần tử của từng hàng
Ví dụ
Input Output
3 3
1 2 3
4 5 6
7 8 9

6
15
24

Bài 2. Tính tổng các cột của m trận
Cho ma trận có n hàng, m cột, tính tổng các phần tử của từng cột
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.
N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra tổng các phần tử của từng cột
Ví dụ
Input Output
3 3
1 2 3
4 5 6
7 8 9

12
15
18
Bài 3. Tìm hàng có nhiều số nguyên tố nhất
Cho ma trận có n hàng, m cột, hãy tìm hàng có nhiều số nguyên tố nhất
Input
Dòng đầu tiên là n,m. 1≤n,m≤100.

N dòng tiếp theo, mỗi dòng có m số nguyên.
Output
In ra hàng có nhiều số nguyên tố nhất và liệt kê các số nguyên tố trên hàng đó. Trong
trường hợp có nhiều hàng có cùng số lượng số nguyên tố thì in ra hàng đầu tiên
Ví dụ
Input Output
3 3
23 11 22
14 5 9
2 3 90

1
23 11

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