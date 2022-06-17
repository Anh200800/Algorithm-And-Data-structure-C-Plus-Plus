// Bài 1. Tính tổng, hiệu, tích, thương
// Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).

// 4

// Input
// 2 số nguyên a, b ( -109 ≤a, b ≤109)
// Output
// Tổng, hiệu, tích, thương của 2 số

// Ví dụ
// Input                            Output
// 10 2                          12 8 20 5.00
// 1000000 1000000        2000000 0 1000000000000 1.00

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int add = a + b;
	int  subtrac = a -b;
	long long multiply = 1ll * a * b;
	float divide = (float)a / b;
	cout << add << " " << subtrac << " " << multiply << " " << fixed << setprecision(2) << divide << endl;
  return 0;
}

// Bài 2. Tính chu vi, diện tích hình tròn
// Input
// Bán kính r của hình tròn là một số nguyên. (1≤r≤106
// )

// Output
// Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
// Ví dụ
// Input                   Output
// 10                    62.80 314.00

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int r;
cin >> r;
float perimeter = (float)(r * 2) * 3.14;
float area =  (float)(r * r) * 3.14;
cout << fixed << setprecision(2) << perimeter << " " << area;
  return 0;
}

// Bài 3. Tính khoảng cách
// Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
// Input
// Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106
// )

// Output
// Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số
// Ví dụ
// Input                          Output
// 1 4 4 8                         5.00

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int x1, y1, x2, y2;
cin >> x1 >> y1 >> x2 >> y2;
float dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
cout << fixed << setprecision(2) << dis << endl;
  return 0;
}

// Bài 4. Chuyển đơn vị đo C và F
// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau:
// F = (C * 9 / 5) + 32
// Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không
// quá 10^6
// , thực hiện chuyển
// sang đơn vị đo độ F và in ra
// màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

// Input               Output
// 24                  75.20

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int c;
cin >> c;
int F = (c * 9) / 5 + 32;
cout << F;
  return 0;
}

// Bài 5. Tìm trị tuyệt đối của số nguyên (Hàm abs).
// Input
// Số nguyên n ( -109 ≤ n ≤109
// )

// Output
// In ra trị tuyệt đối của n
// Ví dụ
// Input              Output
// -25                  25
// 20                   20

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
int ab = abs(n);
cout << ab;
  return 0;
}

// Bài 6. Tìm lũy thừa (Hàm pow)
// Tính a^b
// Input
// 2 số nguyên a, b (-10 ≤a, b≤10)
// Output
// Kết quả a^b
// Ví dụ
// Input                Output
// 2 10                  1024

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int a, b;
cin >> a >> b;
int power = pow(a, b);
cout << power;
  return 0;
}

// Bài 7. Tìm căn bậc hai ( Hàm sqrt)
// Tính căn bậc 2 của số nguyên không âm n.
// Input
// Số nguyên không âm n. (0 ≤ n ≤ 1018).
// Output
// Kết quả lấy 2 chữ số thập phân sau dấu phẩy
// Ví dụ
// Input                      Output
// 10000000000               100000.00
// 16                          4.00

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int a;
cin >> a;
float squareroot = sqrt(a);
cout << fixed << setprecision(2) << squareroot;
  return 0;
}

// Bài 8. Tính tổng 1
// Sn = 1 + 2 + 3 + 4 + ... + n
// Input
// Số nguyên không âm n. ( 0 ≤ n ≤ 10^8).
// Output
// Kết quả của bài toán
// Ví dụ
// Input                        Output
// 1000000000              5000000050000000

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
long long sum = (n + pow(n, 2)) / 2;
cout << sum;
  return 0;
}

// Bài 9. Tính tổng 2
// Sn = 12 + 22 + 32 + 42 + 52 + ... + n2
// Input
// Số nguyên không âm n. ( 0 ≤ n ≤ 105).
// Output
// Kết quả của bài toán
// Ví dụ
// Input                         Output
// 100000                   333338333350000

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
long long res = 1ll * n * (n + 1) * (2 * n + 1) / 6;
cout << res;
  return 0;
}

// Bài 10. Tính tổng 3
// Sn = 1/1∗2 + 1/2∗3 + 1/3∗4+ ..... + 1/n∗(n+1)
// Input
// Số nguyên dương n. ( 1 ≤ n ≤ 109).
// Output
// Kết quả của bài toán lấy độ chính xác 2 chữ số
// Ví dụ
// Input              Output
//  99                  0.99

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
double res = 1 - 1.0 / (n + 1);
cout << fixed << setprecision(2) << res;
  return 0;
}

Bài 11. Tính tổng 4
Sn = 2 + 4 + 6 + 8 + ... + 2*n
Input
Số nguyên dương n. ( 1 ≤ n ≤ 109
).

Output
Kết quả của bài toán
Input Output
1000000 1000001000000
3 12

Bài 12. Tính tổng 5
Sn = -1 + 2 - 3 + 4 - 5 + 6 + .... + (-1)nn
Input
Số nguyên dương n. ( 1 ≤ n ≤ 1016).
Output
Kết quả của bài toán
Ví dụ
Input Output
10000000000000000 5000000000000000

Bài 13. Số chia hết lớn nhất
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a. Chú
ý không dùng vòng lặp và các hàm có sẵn.
Input

8
2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108
)

Output
Kết quả của bài toán
Ví dụ
Input Output
19 5 15
20 5 20

Bài 14. Số chia hết nhỏ nhất
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a.
Chú ý không dùng vòng lặp và các hàm có sẵn.
Input
2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108
)

Output
Kết quả của bài toán
Ví dụ
Input Output
19 5 20
20 5 20
21 5 25

Bài 15. Kiểm tra số chẵn lẻ.
Input
Số nguyên n. (-1018 ≤ n ≤ 1018)
Output
In ra 0 nếu n là số chẵn, 1 nếu n là số lẻ
Ví dụ
Input Output
20 0
51 1

9
Bài 16. Kiểm tra số chia hết cho 3 và 5
Input
Số nguyên n. (-1018 ≤ n ≤ 1018)
Output
In ra 1 nếu n chia hết cho cả 3 và 5, ngược lại in ra 0
Ví dụ
Input Output
30 1
25 0

Bài 17. Kiểm tra năm nhuận
Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100).
Input
Năm là một số nguyên. (-106 ≤ n ≤ 106
)

Output
In ra INVALID nếu n là một số nguyên âm hoặc số 0. Nếu n là năm nhuận, in ra YES,
ngược lại in ra NO
Ví dụ
Input Output
2021 NO
2020 YES
-1982 INVALID

Bài 18. In ra số ngày của tháng
Input
2 số nguyên t, n lần lượt là tháng và năm. (-106 ≤ t, n ≤ 106
)

Output
Nếu tháng và năm nhập vào không hợp lệ ( tháng, năm không phải là số dương, tháng
không năm trong các số từ 1 tới 12) in ra INVALID, ngược lại in ra số ngày trong năm.
Chú ý tháng 2 của năm nhuận có 29 ngày
Ví dụ
Input Output

10
2 2021 28
1 2021 31
14 2020 INVALID
-1 2019 INVALID
2 2020 29

Bài 19. Kiểm tra chữ in thường
Input
Kí tự cần kiểm tra
Output
In ra YES nếu kí tự nhập vào là chữ cái in thường, NO trong trường hợp ngược lại
Ví dụ
Input Output
A NO
a YES
% NO

Bài 20. Kiểm tra in hoa
Input
Kí tự cần kiểm tra
Output
In ra YES nếu kí tự nhập vào là chữ cái in hoa, NO trong trường hợp ngược lại
Ví dụ
Input Output
A YES
a NO
% NO

Bài 21. Kiểm tra chữ cái
Input
Kí tự cần kiểm tra
Output
In ra YES nếu kí tự nhập vào là chữ cái, NO trong trường hợp ngược lại

11

Ví dụ
Input Output
A YES
a YES
% NO
1 NO

Bài 22. Kiểm tra chữ số
Input
Kí tự cần kiểm tra
Output
In ra YES nếu kí tự nhập vào là chữ số, NO trong trường hợp ngược lại
Ví dụ
Input Output
A NO
a NO
5 YES

Bài 23. Chuyển ký tự hoa thành thường
Input
Kí tự cần chuyển
Output
Nếu kí tự nhập vào là chữ in hoa, in ra dạng in thường tương ứng của nó. Trong trường
hợp kí tự nhập vào không phải là chữ in hoa thì không thay đổi kí tự ban đầu.
Ví dụ
Input Output
A a
a a
% %

Bài 24. Chuyển kí tự thường thành kí tự hoa
Input
Kí tự cần chuyển

12

Output
Nếu kí tự nhập vào là chữ in thường, in ra dạng in hoa tương ứng của nó. Trong trường
hợp kí tự nhập vào không phải là chữ in thường thì không thay đổi kí tự ban đầu.
Ví dụ
Input Output
A A
a A
% %

Bài 25. Chữ cái kế tiếp
Input
Kí tự duy nhất
Output
Nếu kí tự nhập vào là chữ cái, tiến hành in ra chữ cái kế tiếp của nó trong bảng chữ cái ở
dạng in thường, ta coi chữ cái kế tiếp của z là a. Nếu kí tự nhập vào không phải là chữ cái
in ra INVALID.
Ví dụ
Input Output
A b
Z a
l m
$ INVALID

Bài 26. Số lớn, số nhỏ
Input
3 số nguyên a, b, c (-106 ≤ a, b, c ≤ 106
)

Output
In ra số lớn nhất và nhỏ nhất trong 3 số
Ví dụ
Input Output
1 2 3 3 1
1 1 1 1 1

13

Bài 27. Tam giác hợp lệ
Input
a, b, c là độ dài 3 cạnh của tam giác. a, b, c là các số nguyên (-106 ≤ a, b, c ≤ 106
)

Output
In ra YES nếu tam giác nhập vào là hợp lệ, ngược lại in NO
Ví dụ
Input Output
3 4 5 YES
1 1 5 NO
-1 2 3 NO
0 4 5 NO

Bài 28. Kiểm tra tam giác
Input
a, b, c là độ dài 3 cạnh của tam giác. a, b, c là các số nguyên (-106 ≤ a, b, c ≤ 106
)

Output
In ra INVALID tam giác đã cho không hợp lệ
In ra 1 nếu tam giác là tam giác đều
In ra 2 nếu tam giác là tam giác cân
In ra 3 nếu tam giác là tam giác vuông
In ra 4 nếu tam giác là tam giác vuông cân
In ra 5 nếu tam giác là tam giác thường.
Ví dụ
Input Output
3 4 5 3
3 3 3 1
1 1 8 INVALID
4 4 6 2

Bài 29. Chuyển đổi ngày sang tháng, năm, ngày
Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang
năm, tuần, ngày (Bỏ qua trường hợp năm nhuận)

14

Input
Số nguyên n không âm. (0 ≤ n ≤ 106
)

Output
Chuyển số ngày đã cho xem số năm, số tháng, số ngày
Ví dụ
Input Output
373 1 1 1

Bài 30. Phương trình bậc 2
Phương trình bậc 2 là phương trình dạng ax2 + bx + c = 0.
Viết chương trình C cho phép nhập vào a,b,c và thực hiện giải phương trình bậc 2.
Nếu vô nghiệm thì in ra dòng NO, nếu vô số nghiệm thì in ra INF
Nếu có nghiệm thì in các nghiệm (luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
cách nhau một khoảng trắng.
Input Output
8 -4 -2 0.81 -0.31

Bài 31. Goldbach
Một cách để tạo ra các bài toán là học từ toán học. Bạn có thể tạo một số câu lệnh
toán học ngẫu nhiên hoặc sửa đổi một số định lý để có được một cái gì đó mới và
xây dựng một nhiệm vụ mới từ đó.
Ví dụ, có một tuyên bố gọi là "phỏng đoán của Goldbach". Nó nói: "mỗi số chẵn
không dưới bốn có thể được biểu diễn dưới dạng tổng của hai số nguyên tố". Hãy
sửa đổi nó. Xét tuyên bố sau đây: "mỗi số nguyên không ít hơn 12 có thể được biểu
diễn dưới dạng tổng của hai hợp số." Không giống như phỏng đoán của Goldbach,
tôi có thể chứng minh định lý này.
Bạn được cấp một số nguyên n không nhỏ hơn 12, biểu thị nó dưới dạng tổng của
hai hợp số.
Input
Dòng duy nhất chứa một số nguyên n (12≤ n ≤10^6).
Output
Xuất hai số nguyên là hợp số : x và y (1 <x, y <n) sao cho x + y = n. Nếu có nhiều
giải pháp, bạn có thể xuất bất kỳ giải pháp nào.
Ví dụ
Input Output
26 4 22

15
30 20 10
Link submit : https://codeforces.com/problemset/problem/472/A
Bài 32. 617A
Một con voi quyết định đến thăm bạn mình. Hóa ra nhà của voi nằm ở điểm 0 và
nhà của bạn anh ta nằm ở điểm x (x> 0) của đường tọa độ. Trong một bước, con voi
có thể di chuyển 1, 2, 3, 4 hoặc 5 vị trí về phía trước. Xác định, số bước tối thiểu
anh ta cần thực hiện để đến nhà của bạn mình là bao nhiêu.
Input
Dòng đầu tiên của đầu vào chứa một số nguyên x (1 ≤ x ≤ 1 000 000) - Tọa độ của
nhà của người bạn.
Output
In số bước tối thiểu mà voi cần thực hiện để đi từ điểm 0 đến điểm x.
Ví dụ
Input Output
12 3

Link submit: https://codeforces.com/problemset/problem/617/A

Bài 33. 581A
Một ngày nọ, Vasya the Hipster quyết định đếm xem anh ta có bao nhiêu chiếc vớ.
Hóa ra anh ta có a đôi vớ đỏ và b vớ xanh.
Theo thời trang mới nhất, những người hipster sẽ mang những đôi tất có màu sắc
khác nhau: một màu đỏ ở bàn chân trái, một màu xanh ở bàn chân phải.
Mỗi ngày Vasya mang vớ mới vào buổi sáng và vứt chúng đi trước khi đi ngủ vì
anh không muốn giặt chúng.
Vasya tự hỏi, số ngày tối đa anh ta có thể ăn mặc theo đúng thời trang và sau đó là
số ngày mà anh ta có thể đeo 2 chiếc tất cùng màu.
Bạn có thể giúp anh ta?
Input
Dòng duy nhất của đầu vào chứa hai số nguyên dương a và b (1 <=a, b<= 100) - số
vớ màu đỏ và màu xanh mà Vasya có.
Output
In hai số nguyên cách nhau một khoảng trắng - số ngày tối đa khi Vasya có thể
mang vớ khác nhau và số ngày anh ta có thể mang đôi tất cùng màu cho đến khi hết
tất hoặc không thể tạo một đôi từ tất mà anh ta có.
Hãy nhớ rằng vào cuối ngày, Vasya sẽ vứt bỏ tất mà anh ấy đang mang vào ngày
hôm đó.
Ví dụ

16
Input Output
7 3 3 2