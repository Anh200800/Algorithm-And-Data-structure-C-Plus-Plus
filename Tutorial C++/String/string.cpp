// Để làm tốt các bài tập về chuỗi bạn cần có kiến thức về bảng mã ASCII, các hàm xử lý
// xâu và kí tự có sẵn trong các thư viện của ngôn ngữ lập trình C và nắm chắc kiến thức về
// mảng, hàm cũng như có một kĩ thuật lập trình tương đối tốt.

// PHẦN 1: CÁC KỸ THUẬT XỬ LÝ KÍ TỰ TRONG XÂU

// Bài 1. Các hàm xử lý chuỗi cơ bản
// Xây dựng các hàm
// int is_lower(char c) : Kiểm tra 1 kí tự có phải là chữ in thường hay không. Nếu đúng trả
// về 1, sai trả về 0.
// int is_upper(char c) : Kiểm tra 1 kí tự có phải là chữ in hoa hay không?
// int is_alphar(char c) : Kiểm tra 1 kí tự có phải là chữ cái hay không?
// int is_digit(char c ) : Kiểm tra 1 kí tự có phải là kí tự hay không?
// char to_lower(char c ) : Trả về dạng in thường của kí tự c
// char to_upper(char c ) : Trả về dạng in hoa của kí tự c
// int strlen(char c ) : Trả về chiều dài xâu
// char* strlwr(char c[]) : Viết thường tất cả các kí tự trong xâu
// char* strupr(char c[]) : Viết hoa tất cả các kí tự trong xâu
// int strcmp(char a[], char b[]) : So sánh 2 xâu a và b theo thứ tự từ điển, nếu a>b trả về 1,
// a=b trả về 0, a < b trả về -1
// int strcmp(char a[], char b[]) : So sánh 2 xâu a và b theo thứ tự từ điển không phân biệt
// hoa thường, nếu a>b trả về 1, a=b trả về 0, a < b trả về -1
// long long atoll(char a[]) : Chuyển 1 xâu kí tự số thành số nguyên long long
// char* strrev(char c[]) : Viết hàm đảo ngược 1 xâu
Bài 2. Nhập vào một xâu kí tự và chuyển các kí tự trong xâu thành kí tự in thường
Input

5

Xâu đầu vào không quá 1000 kí tự
Output
Xâu đầu ra trên 1 dòng
Ví dụ
Input Output
Python JAVA @ python java @
Bài 3. Đếm số lượng chữ cái, kí tự số, kí tự đặc biệt trong xâu
Input
Xâu đầu vào không quá 1000 kí tự
Output
In kết quả trên 1 dòng
Ví dụ
Input Output
Python 123@@ 6 3 3

Bài 4. Đếm số lần xuất hiện của các kí tự trong xâu 1
Nhập vào một xâu có không quá 1000 kí tự chỉ gồm các chữ cái in thường (in hoa). Thực
hiện in ra các chữ cái cùng số lần xuất hiện của nó theo thứ tự từ điển
Input
Xâu đầu vào không quá 1000 kí tự chỉ gồm các chữ cái in thường (in hoa)
Output
In ra các kí tự và số lần xuất hiện tương ứng
Ví dụ
Input Output
aaababca a 5
b 2
c 1

Bài 5. Đếm số lần xuất hiện của các kí tự trong xâu 2
Nhập vào một xâu có không quá 1000 kí tự chỉ gồm các chữ cái in thường (in hoa). Thực
hiện in ra các chữ cái cùng số lần xuất hiện của nó theo thứ tự xuất hiện trong xâu, chú ý
mỗi kí tự chi liệt kê một lần.

6

Input
Xâu đầu vào không quá 1000 kí tự chỉ gồm các chữ cái in thường (in hoa)
Output
In ra các kí tự và số lần xuất hiện tương ứng
Ví dụ
Input Output
baaaabca b 2
a 5
c 1

Bài 6. Đếm số lần xuất hiện của các kí tự trong xâu 3
Thực hiện nhập vào một xâu kí tự có không quá 1000 kí tự. In ra kí tự có tần suất xuất
hiện nhiều nhất trong xâu, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện thì in
ra kí tự có thứ tự từ điển lớn hơn
Input
Dòng duy nhất là xâu kí tự không quá 5000 kí tự
Output
Kí tự có số lần xuất hiện lớn nhất
Ví dụ
Input Output
baaaabca bbb b

Bài 7. Các kí tự xuất hiện ở cả 2 xâu
Cho 2 xâu kí tự, thực hiện liệt kê các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển
Input
Dòng thứ 1 là xâu 1
Dòng thứ 2 là xâu 2
Output
In ra các kí tự xuất hiện ở cả 2 xâu
Ví dụ
Input Output

7

Python java PHP
Project

Poj

Bài 8 .Liệt kê các kí tự chỉ xuất hiện trong xâu 1 mà không xuất hiện trong xâu 2
Cho 2 xâu kí tự, thực hiện liệt kê các kí tự xuất hiện ở xâu 1 mà không xuất hiện ở xâu 2.
Các kí tự trong 2 xâu chỉ gồm các chữ cái
Input
Dòng thứ 1 là xâu 1
Dòng thứ 2 là xâu 2
Output
In ra các kí tự theo thứ tự từ điển
Ví dụ
Input Output
Abcabcabc
ac

Ab

Bài 9. Liệt kê các kí tự xuất hiện ở 1 hoặc 2 xâu.
Cho 2 xâu kí tự, thực hiện liệt kê các kí tự xuất hiện ở xâu 1 hoặc xuất hiện ở xâu 2. Các
kí tự trong 2 xâu chỉ gồm các chữ cái
Input
Dòng thứ 1 là xâu 1
Dòng thứ 2 là xâu 2
Output
In ra các kí tự theo thứ tự từ điển
Input Output
Abcdu
abcdz

Aabcduz

Bài 10. Xâu pangram 1
Một xâu chứa đầy đủ các kí tự in thường từ a-z được gọi là xâu Pangram
Kiểm tra xâu nhập vào có phải là xâu pangram hay không
Input
Dòng duy nhất là xâu gồm các kí tự in thường không quá 1000 kí tự

8

Output
In YES nếu xâu là xâu pangram, ngược lại in NO
Ví dụ
Input Output
thequickbrownfoxjumpsoverthelazydog YES
abcdefghijklmnopzzutvlt NO

Bài 11. Xâu pangram 2.
Một xâu chứa đầy đủ các kí tự từ a-z không phân biệt hoa thường được gọi là xâu
Pangram
Kiểm tra xâu nhập vào có phải là xâu pangram hay không
Input
Dòng duy nhất là xâu gồm các kí tự là chữ cái không quá 1000 kí tự
Output
In YES nếu xâu là xâu pangram, ngược lại in NO
Ví dụ
Input Output
THEquickbrownfoxjumpsoverthelaZydog YES
abcdefghijklmnopzzutvlt NO

Bài 12. Xâu đối xứng 1
Kiểm tra xâu nhập vào có phải là xâu đối xứng hay không
Input
Dòng duy nhất là xâu không quá 1000 kí tự
Output
In YES nếu xâu là xâu đối xứng, ngược lại in NO
Ví dụ
Input Output
AbcdbcbA YES
abcbaa NO

9

Bài 13. Xâu đối xứng 2
Bạn được phép thay đổi đúng một kí tự trong xâu, hãy kiểm tra có thể biến xâu đó thành
xâu đối xứng được hay không
Input
Dòng đâu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng là một xâu không bao gồm khoảng trắng, mỗi xâu có độ dài
không quá 1000 kí tự
Output
In YES nếu có thể biến xâu đầu vào thành xâu đối xứng với duy nhất một thay đổi, ngược
lại in NO
Ví dụ
Input Output
2
abccbZ
abcdxba

YES
YES

PHẦN 2. CÁC BÀI TOÁN CHUẨN HÓA, XỬ LÝ TỪ TRONG CÂU

Bài 1. Liệt kê các từ xuất hiện trong câu
Cho một xâu có không quá 1000 kí tự, thực hiện liệt kê các từ trong câu
Input
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
Mỗi từ trong xâu in trên một dòng
Ví dụ
Input Output
Python Java C++ PHP JS Python
Java
C++
PHP
JS

Bài 2. Đếm số lượng từ trong câu
Cho một xâu có không quá 1000 kí tự, thực hiện đếm số lượng từ trong xâu.
Input

10
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
Số lượng từ trong xâu
Ví dụ
Input Output
Python Java C++ PHP JS 5

Bài 3. Liệt kê các từ in hoa trong xâu
Cho một xâu có không quá 1000 kí tự, thực hiện liệt kê các từ in hoa trong xâu.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
Liệt kê các từ in hoa của xâu, kết quả in trên 1 dòng
Input Output
2
Python Java C++ PHP JS
Pham NGOC hai

PHP JS
NGOC

Bài 4. Sắp xếp các từ trong xâu theo thứ tự từ điển
Cho một xâu có không quá 1000 kí tự, thực hiện sắp xếp các từ trong xâu theo thứ tự từ
điển.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
Liệt kê các từ trong xâu theo thứ tự từ điển tăng dần
Input Output
2
aa abc aaa a bc z
nguyen van long

a aa aaa abc bc z
long nguyen van

11
Bài 5. Sắp xếp các từ trong xâu theo chiều dài
Cho một xâu có không quá 1000 kí tự, thực hiện sắp xếp các từ trong xâu theo thứ tự
chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ có thứ tự từ điển
nhỏ hơn sẽ xếp trước.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
Liệt kê các từ trong xâu theo thứ tự đầu bài yêu cầu
Ví dụ
Input Output
2
aa abc aaa a bc z
nguyen van long

a z aa bc abc aaa
van long nguyen

Bài 6. Sắp xếp các kí tự trong xâu theo thứ tự từ điển
Cho một xâu có không quá 1000 kí tự, thực hiện sắp xếp các kí tự trong xâu theo thứ tự từ
điển tăng dần.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự, xâu không chứa khoảng
trắng.
Output
In ra xâu đã được sắp xếp.
Ví dụ
Input Output
2
aazabcd
dumu

Aaabcdz
dmuu

Bài 7. Chuẩn hóa tên 1
Thực hiện viết hoa chữ cái đầu của từng từ trong tên người. Tên người là một xâu có thể
không chuẩn.
Input

12
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên người đã được chuẩn hóa trên từng dòng
Ví dụ
Input Output
2
NguYEN VAN maNH
nGUYEN thuY LinH

Nguyen Van Manh
Nguyen Thuy Linh

Bài 8. Chuẩn hóa tên 2
Thực hiện chuẩn hóa tên người theo mẫu. Tên người là một xâu có thể không chuẩn.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên người đã được chuẩn hóa trên từng dòng
Ví dụ
Input Output
2
NguYEN VAN maNH
nGUYEN thuY LinH

Manh, Nguyen Van
Linh, Nguyen Thuy

Bài 9. Chuẩn hóa tên 3
Thực hiện chuẩn hóa tên người theo mẫu. Tên người là một xâu có thể không chuẩn.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên người đã được chuẩn hóa trên từng dòng
Ví dụ
Input Output

13

2
NguYEN VAN maNH
nGUYEN thuY LinH

MANH, Nguyen Van
LINH, Nguyen Thuy

Bài 10. Email1
Thực hiện tạo email từ tên người dùng
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên email được cấp theo mẫu
Ví dụ
Input Output
2
NguYEN VAN maNH
nGUYEN thuY LinH

manhnv@gmail.com
linhnt@gmail.com

Bài 11. Email2
Thực hiện tạo email từ tên người dùng
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên email được cấp theo mẫu
Ví dụ
Input Output
2
NguYEN VAN maNH
nGUYEN thi thuY LinH

nvmanh@gmail.com
nttlinh@gmail.com

Bài 12. Đếm số lần xuất hiện của các từ trong xâu
Thực hiện đếm số lần xuất hiện của các từ trong xâu, không phân biệt hoa thường. Kết
quả in ra các từ trong xâu theo thứ tự xuất hiện.

14

Input
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
Các từ trong xâu ở dạng in thường và số lần xuất hiện của chúng
Ví dụ

Input Output
PYTHON Java php php java pyTHON C python 2
java 2
php 2
c 1

Bài 13. Đếm số lần xuất hiện của các từ trong xâu 2
Thực hiện đếm số lần xuất hiện của các từ trong xâu, không phân biệt hoa thường. Kết
quả in ra các từ trong xâu theo thứ tự từ điển tăng dần.
Input
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
Các từ trong xâu ở dạng in thường và số lần xuất hiện của chúng
Ví dụ
Input Output
PYTHON Java php php java pyTHON C c 1
java 2
php 2
python 2

Bài 14. Từ có số lần xuất hiện nhiều nhất trong xâu.
Thực hiện đếm số lần xuất hiện của các từ trong xâu, không phân biệt hoa thường. In ra từ
có số lần xuất hiện nhiều nhất, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất thì
chọn từ có thứ tự từ điển nhỏ hơn.
Input
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
Từ có số lần xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

15

Ví dụ
Input Output
PYTHON Java php php java pyTHON C java 2

Bài 15. Liệt kê các từ xuất hiện trong câu
Thực hiện liệt kê các từ trong câu theo thứ tự xuất hiện
Input
Dòng duy nhất chứa xâu có không quá 1000 kí tự
Output
In ra các từ trong câu theo thứ tự xuất hiện, mỗi từ chỉ in 1 lần.
Ví dụ
Input Output
lap trinh python java python c lap trinh lap trinh python java c

Bài 16. Loại bỏ từ
Thực hiện loại bỏ các từ trong 1 xâu
Input
Dòng 1 chứa xâu có không quá 1000 kí tự
Dòng 2 chứa từ cần loại bỏ có không quá 10 kí tự
Output
Thực hiện loại bỏ từ trong xâu
Ví dụ
Input Output
lap trinh python java python c lap trinh
trinh

lap python java python c lap

Bài 17. Tập từ riêng của 2 xâu
Cho 2 xâu, mỗi xâu chứa các từ mỗi từ có độ dài không quá 100 kí tự, thực hiện liệt kê
các từ chỉ xuất hiện trong xâu 1 mà không xuất hiện trong xâu thứ 2 theo thứ tự từ điển,
mỗi từ chỉ liệt kê một lần
Input
Dòng đầu tiên là xâu 1 có không quá 1000 kí tự

16
Dòng 2 là xâu 2 có không quá 1000 kí tự
Output
Các từ xuất hiện trong xâu 1 mà không xuất hiện trong xâu 2
Ví dụ
Input Output
lap trinh python java python c lap trinh
trinh php java

c lap python

Bài 18. Tập từ riêng của 2 xâu 2.
Cho 2 xâu, mỗi xâu chứa các từ mỗi từ có độ dài không quá 100 kí tự, thực hiện liệt kê
các từ chỉ xuất hiện trong xâu 1 mà không xuất hiện trong xâu thứ 2 theo thứ tự từ điển,
mỗi từ chỉ liệt kê một lần
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 2 dòng :
Dòng đầu tiên là xâu 1 có không quá 1000 kí tự
Dòng 2 là xâu 2 có không quá 1000 kí tự
Output
Các từ xuất hiện trong xâu 1 mà không xuất hiện trong xâu 2 theo từng test case.
Ví dụ
Input Output
2
lap trinh python java python c lap trinh
trinh php java
aaa abc abcd a
a abc

c lap python
aaa abcd

Bài 19. Xóa từ trong câu
Thực hiện xóa từ trong xâu không phân biệt hoa thường. Cho trước 1 xâu chỉ gồm chữ cái
và khoảng trắng và một từ. Thực hiện tìm kiếm từ trong xâu 1 không phân biệt hoa
thường và loại bỏ từ khỏi xâu
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 2 dòng :

17
Dòng đầu tiên là xâu 1 có không quá 1000 kí tự
Dòng 2 là từ có không quá 100 kí tự
Output
Thực hiện xóa từ khỏi xâu
Ví dụ
Input Output
2
ngon ngu lap trinh C python lap trinH
trinh
aaa AAA bcd bc Aaa ZZZ
aaa

#Test 1: ngon ngu lap C python lap
#Test 2: bcd bc ZZZ

Bài 20. Từ lặp đầu tiên trong xâu
Chỉ ra từ đầu tiên lặp trong xâu, nếu không có từ nào lặp in ra -1.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng duy nhất là xâu có không quá 1000 kí tự
Output
Từ lặp đầu tiên trong xâu hoặc chỉ ra rằng nó không tồn tại.
Ví dụ
Input Output
2
ngon ngu lap trinh C python lap trinh ngon
a abcd aa aaa bc d

#Test 1: lap
#Test 2: -1

Bài 21. Xâu con
Cho 2 chuỗi a và b, nếu chuỗi a xuất hiện trong chuỗi b in ra YES, ngược lại in
NO.
Input
2 xâu a và b trên 2 dòng. 2 xâu 2 và b chỉ chứa kí tự thường.
Output
Kết quả của bài toán.
Ví dụ

18
Input Output
abcde
azhuywfjalzabcde

YES

Bài 22. Xâu đối xứng 3
Kiểm tra xem có thể hoán đổi vị trị các kí tự trong một chuỗi cho trước để tạo thành
chuỗi đối xứng hay không. In ra YES nếu có thể, ngược lại in ra NO.
Input
Dòng đầu tiên là số lượng test case t.
T dòng tiếp theo mỗi dòng chứa một xâu.
Output
In kết quả trên mỗi dòng.
Ví dụ
Input Output
2
aaaabbbbc
ttyz$$$$***********ywai4o43p4

YES
NO

Bài 23. Kí tự không lặp
Cho xâu ký tự S. Nhiệm vụ của bạn là in ra tất cả các ký tự không lặp khác nhau trong S.
Ví dụ S =”ABCDEABC” ta nhận được kết quả là “DE”.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một
dòng.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤105
.

Output:
Đưa ra kết quả mỗi test theo từng dòng. In ra theo thứ tự bảng chữ cái.
Ví dụ
Input Output
2
ABCDEAABC
ABC

DE
ABC

19

Bài 24. Tính tổng các số trong xâu
Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. Nhiệm vụ của bạn là hãy tính
tổng các số có mặt trong xâu.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤105
.

Input đảm bảo đáp án không vượt quá 10^9.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input Output
3
1abc23
1abc2x30yz67
123abc

24
100
123

Bài 25.Số lớn nhất trong xâu
Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. Nhiệm vụ của bạn là hãy tìm số
lớn nhất có mặt trong xâu.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤105
.

Input đảm bảo đáp số không vượt quá 10^9.

20

Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input Output
3
100klh564abc365bg
abvhd9sdnkjdfs
abchsd0sdhs

564
9
0

Bài 26. Tổng 2 đa thức.
Tính tổng của 2 đa thức
Input: Dòng đầu tiên là số lượng bộ test T (1≤ T ≤100)
Mỗi bộ test gồm 2 dòng, dòng đầu chứ đa thức thứ 1.
Dòng thứ 2 chứa đa thức thứ 2
Chú ý đa thức được liệt kê cả mũ 0. Bậc của 2 đa thức không vượt quá 10000.
Output:
In ra kết quả mỗi test case trên 1 dòng.
Ví dụ:
Input Output
1
2*x^5 + 3*x^2 + 5*x^0
4*x^5 + 2*x^1 + 10*x^0

#Test 1: 6*x^5 + 3*x^2 + 2*x^1 + 15*x^0

Bài 27. Xâu kí tự đầy đủ.
Một xâu kí tự được gọi là đầy đủ nếu xóa đi 0 hoặc 1 số kí tự trong xâu ta thu được xâu
abcdefghijklmnopqrstuvwxyz.
Tìm số lượng kí tự cần chèn vào xâu để tạo được xâu đầy đủ

21

Input:
Xâu duy nhất chỉ chứa chữ cái in thường có không quá 100 kí tự
Output:
Số lượng kí tự cần chèn vào xâu để được xâu đầy đủ
Ví dụ:
Input Output
abczzzzzzzx 22
zyx 25

Bài 28. Xếp đá
Có n viên đá trên bàn liên tiếp, mỗi viên có thể có màu đỏ, xanh lá cây hoặc xanh
dương. Đếm số lượng đá tối thiểu cần lấy từ bàn để bất kỳ hai viên đá lân cận nào
có màu khác nhau. Đá liên tiếp được coi là lân cận nếu không có đá khác giữa
chúng.
Input
Dòng đầu tiên chứa số nguyên n (1<=n<=50) - số lượng đá trên bàn.
Dòng tiếp theo chứa chuỗi s, đại diện cho màu sắc của đá. Chúng tôi sẽ xem xét các
viên đá trong hàng được đánh số từ 1 đến n từ trái sang phải. Sau đó, ký tự thứ i
bằng "R", nếu viên đá thứ i có màu đỏ, "G", nếu nó màu xanh lá cây và "B", nếu nó
màu xanh.
Output
In một số nguyên duy nhất - câu trả lời cho vấn đề.
Ví dụ
Input Output
RRRR 3

22

Bài 29. Hello
Vasya gần đây đã học cách gõ và đăng nhập vào Internet. Anh lập tức bước vào
một phòng chat và quyết định nói xin chào với mọi người. Vasya gõ từ s. Vasya
được coi là nói xin chào nếu một vài chữ cái có thể bị xóa khỏi từ đã gõ để nó dẫn
đến từ "hello". Ví dụ: nếu Vasya gõ từ "ahhellllloou", anh ta sẽ nói rằng anh ta nói
xin chào, và nếu anh ta gõ "hlelo", sẽ bị coi là Vasya bị hiểu lầm và anh ta không
thể nói xin chào. Xác định xem Vasya có thể nói xin chào bằng từ đã cho không.
Input
Dòng đầu tiên và duy nhất chứa từ s, mà Vasya đã gõ. Từ này liên quan đến các
chữ cái Latinh viết thường, độ dài của nó không dưới 1 và không quá 100 chữ cái.
Output
Nếu Vasya có thể nói xin chào, hãy in "YES", nếu không thì in "NO".
Ví dụ
Input Output
Ahhellllloou YES

Bài 30.1303A Codeforces
Bạn được cung cấp một chuỗi s. Mỗi ký tự là 0 hoặc 1.
Bạn muốn tất cả các số 1 trong chuỗi tạo thành một phân đoạn liền kề. Ví dụ: nếu
chuỗi là 0, 1, 00111 hoặc 01111100, thì tất cả 1 đều tạo thành một phân đoạn liền
kề và nếu chuỗi là 0101, 100001 hoặc 11111111111101, thì điều kiện này không
được đáp ứng.
Bạn có thể xóa một số (có thể không) 0 khỏi chuỗi. Số 0 tối thiểu mà bạn phải xóa
là bao nhiêu?
Input

23

Dòng đầu tiên chứa một số nguyên t (1≤t≤100) - số lượng trường hợp kiểm tra.
Sau đó t dòng tiếp theo, mỗi dòng đại diện cho một trường hợp thử nghiệm. Mỗi
dòng chứa một chuỗi s (1≤ | s |<=100); mỗi ký tự của s là 0 hoặc 1.
Output
In số nguyên t, trong đó số nguyên thứ i là câu trả lời cho mẫu thử thứ i (số tối
thiểu là 0 mà bạn phải xóa khỏi s).
Ví dụ
Input Output
3
010011
0
1111000

2
0
0

Bài 31. Số điện thoại
Số điện thoại là một chuỗi có đúng 11 chữ số, trong đó chữ số đầu tiên là 8. Ví dụ:
dãy 80011223388 là số điện thoại, nhưng các dãy 70011223388 và
80000011223388 thì không.
Bạn được cung cấp một chuỗi s có độ dài n, bao gồm các chữ số.
Trong một thao tác, bạn có thể xóa bất kỳ ký tự nào khỏi chuỗi s. Ví dụ: có thể lấy
các chuỗi 112, 111 hoặc 121 từ chuỗi 1121.
Bạn cần xác định xem có một chuỗi các hoạt động như vậy (có thể là không), sau
đó chuỗi s trở thành số điện thoại.
Input
Dòng đầu tiên chứa một số nguyên t (1≤t≤100) - số lượng trường hợp kiểm tra.

24

Dòng đầu tiên của mỗi trường hợp chứa một số nguyên n (1≤n≤100) - độ dài của
chuỗi s.
Dòng thứ hai của mỗi trường hợp kiểm tra chứa chuỗi s (| s | = n) bao gồm các chữ
số.
Output
Đối với mỗi bài kiểm tra in một dòng.
Nếu có một chuỗi các hoạt động, sau đó s trở thành một số điện thoại, in YES.
Nếu không, in NO.
Ví dụ
Input Output
2
13
7818005553535
11
31415926535

YES

NO

Link submit : https://codeforces.com/problemset/problem/1167/A

Bài 32. Xâu con chẵn
Bạn được cung cấp một chuỗi s = s1s2....sn có độ dài n, chỉ chứa các chữ số 1, 2,
..., 9.
Một chuỗi con s [lr] của s là một chuỗi liên tiếp bắt đầu từ vị trí l tới vị trí r ở trong
chuỗi ban đầu. Một chuỗi con s [l...r] của s ngay cả khi nó là một chuỗi rỗng.
Tìm số lượng các chuỗi con chẵn của s. Lưu ý rằng ngay cả khi một số chuỗi con
giống nhau, nhưng có l và r khác nhau, chúng được tính là các chuỗi con khác

25

nhau.
Input
Dòng đầu tiên chứa số nguyên n (1≤n≤65000) - độ dài của chuỗi s.
Dòng thứ hai chứa một chuỗi s có độ dài n. Chuỗi s chỉ bao gồm các chữ số 1, 2, ...,
9.
Output
In số lượng các phần tử chẵn của s.
Ví dụ
Input Output
4
1234 6

Link submit : https://codeforces.com/problemset/problem/1139/A

Bài 33. 1301A Codeforces
Bạn được cung cấp ba chuỗi a, b và c có cùng độ dài n. Các chuỗi chỉ bao gồm các
chữ cái tiếng Anh viết thường. Chữ cái thứ i của a là ai, chữ cái thứ i của b là bi,
chữ cái thứ i của c là ci.
Với mỗi i (1≤i≤n), bạn phải trao đổi ( ci với ai hoặc bi. Vì vậy, trong tổng số bạn sẽ
thực hiện chính xác n thao tác hoán đổi, mỗi thao tác đều là ci↔ai hoặc ci↔bi (lặp
đi lặp lại trên tất cả các số nguyên từ 1 đến n).
Ví dụ: nếu a là "code", b là "true" và c là "help", bạn có thể đặt c bằng "crue" lấy
các chữ cái 1 và 4 từ a và các chữ cái khác từ b . Theo cách này, a trở thành "hodp"
và b trở thành "tele".

26

Có thể là sau khi hoán đổi, chuỗi a trở nên giống hệt như chuỗi b?
Input
Đầu vào bao gồm nhiều trường hợp . Dòng đầu tiên chứa một số nguyên t
(1≤t≤100) - số lượng trường hợp kiểm tra. Mô tả các trường hợp thử nghiệm sau
đây.
Dòng đầu tiên của mỗi trường hợp kiểm tra chứa một chuỗi các chữ cái tiếng Anh
viết thường a.
Dòng thứ hai của mỗi trường hợp kiểm tra chứa một chuỗi các chữ cái tiếng Anh
viết thường b.
Dòng thứ ba của mỗi trường hợp kiểm tra chứa một chuỗi các chữ cái tiếng Anh
chữ thường c.
Đảm bảo rằng trong mỗi trường hợp thử nghiệm, ba chuỗi này không trống và có
cùng độ dài, không vượt quá 100.
Output
In dòng t với câu trả lời cho tất cả các trường hợp thử nghiệm. Đối với mỗi trường
hợp thử nghiệm:
Nếu có thể tạo chuỗi bằng chuỗi b in "YES” (không có dấu ngoặc kép), nếu không
thì in “NO" (không có dấu ngoặc kép).
Ví dụ
Input Output
4
aaa
bbb

NO
YES
YES

27

ccc
abc
bca
bca
aabb
bbaa
baba
imi
mii
iim

NO

Link submit : https://codeforces.com/problemset/problem/1301/A
Bài 34. 1216A Codeforces.
Nikolay có một chuỗi s có độ dài bằng n, chỉ bao gồm các chữ cái Latinh viết
thường 'a' và 'b'. Vị trí của nó được đánh số từ 1 đến n.
Anh ta muốn sửa đổi chuỗi của mình sao cho mỗi tiền tố có độ dài chẵn của nó có
số lượng chữ cái 'a' và 'b' bằng nhau. Để đạt được điều đó, Nikolay có thể thực hiện
thao tác sau tùy ý số lần (có thể là 0): chọn một số vị trí trong chuỗi của mình và
thay thế chữ cái trên vị trí này bằng chữ cái khác (nghĩa là thay 'a' bằng 'b' hoặc
thay thế ' b 'với' a '). Nikolay không thể sử dụng chữ cái nào ngoại trừ 'a' và 'b'.
Tiền tố của chuỗi s có độ dài l (1≤l≤n) là một chuỗi s [1..l].
Ví dụ: đối với chuỗi s = "abba", có hai tiền tố có độ dài chẵn. Đầu tiên là s [1 Lọ 2]
= "ab" và s thứ hai [1...4] = "abba". Cả hai đều có cùng số 'a' và 'b'.

28

Nhiệm vụ của bạn là tính toán số lượng hoạt động tối thiểu Nikolay phải thực hiện
với chuỗi s để sửa đổi nó để mỗi tiền tố có độ dài chẵn của nó có số lượng chữ cái
'a' và 'b' bằng nhau.
Input
Dòng đầu tiên của đầu vào chứa một số nguyên n chẵn (2≤n≤2⋅105) - độ dài của
chuỗi s.
Dòng thứ hai của đầu vào chứa chuỗi s có độ dài n, chỉ bao gồm các chữ cái Latinh
viết thường 'a' và 'b'.
Output
Trong dòng đầu tiên, số lượng hoạt động tối thiểu Nikolay phải thực hiện với chuỗi
s để sửa đổi nó để mỗi tiền tố có độ dài chẵn của nó có số lượng chữ cái 'a' và 'b'
bằng nhau.
Trong dòng thứ hai in chuỗi Nikolay có được sau khi áp dụng tất cả các thao tác.
Nếu có nhiều câu trả lời, bạn có thể in bất kỳ câu trả lời nào.
Ví dụ
Input Output
4
bbbb

2
abab

Link submit : https://codeforces.com/problemset/problem/1216/A
Bài 34. Ghép xâu
Cho trước các từ, hãy ghép các từ này thành một xâu sao cho xâu được ghép có thứ tự từ
điển nhỏ nhất
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng gồm số đầu tiên là n - số từ trong test case, theo sau là n từ

29

Output
In ra xâu ghép có thứ tự từ điển nhỏ nhất
Ví dụ
Input Output
2
4 java python c php
5 a b cdef zabc word

cjavaphppython
abcdefwordzabc

Bài 35. Số La Mã.
Trước khi xuất hiện chữ số Ả Rập - là các chữ số từ 0 đến 9 mà chúng ta đang sử dụng
rộng rãi ngày nay - trong thời cổ đại và trung đại người ta sử dụng số La Mã. Số La Mã
gồm 7 ký tự tương ứng với các số Ả Rập như sau:

Người ta quy định các chữ số I, X, C, M, không được lặp lại quá ba lần liên tiếp; các chữ
số V, L, D không được lặp lại quá một lần liên tiếp. Chính vì thế mà có 6 nhóm chữ số
đặc biệt được nêu ra trong bảng sau:

Quy tắc viết: ký tự lớn viết trước, ký tự nhỏ viết sau tương tự như hàng trăm, hàng chục,
hàng đơn vị trong số Ả rập. Với các ký tự trên, số La Mã có thể biểu diễn các con số từ 1
đến 3999.

30

Ví dụ: III = 3, VIII = 8, XIX = 19, XXXII = 32, XLV = 45, MMMCMXCIX = 3999.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case là một số La Mã
Output
In ra dạng thập phân của số La Mã
Input Output
2
III
MMMCMXCIX

3
3999

Bài 36. Xâu có chữ các chữ cái liên tiếp khác nhau
Tìm xâu con liên tiếp mà trong đó các kí tự liền kề nhau đều khác nhau
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case là một xâu có không quá 1000 kí tự là chữ cái thường
Output
In ra độ dài xâu con liên tiếp lớn nhất trong đó kí tự liền kề nhau đều khác nhau
(Bạn thử tìm cách in ra xâu con có độ dài lớn nhất mà xâu đó xuất hiện cuối cùng đó thay
vì in ra mỗi chiều dài xâu)
Ví dụ
Input Output
1
abcdddzozozozozozozoabcd 19

Bài 37. Xâu liên tiếp có chữ các chữ cái giống nhau
Input

31
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case là một xâu có không quá 1000 kí tự là chữ cái thường
Output
In ra độ dài xâu con liên tiếp lớn nhất trong đó mọi kí tự đều giống nhau
Ví dụ
Input Output
2
abcdddzozozozozozozoabcd
aaaaabbbbbbbzzzzzzzz

3
8

PHẦN 3. CÁC BÀI TOÁN LIÊN QUAN TỚI SỐ NGUYÊN LỚN VÀ CÁC BÀI TOÁN

SỬ DỤNG XÂU XỬ LÝ SỐ NGUYÊN

Bài 1. Tổng 2 số nguyên lớn
Tính tổng 2 số nguyên lớn, mỗi số có không quá 1000 kí tự
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 2 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In ra tổng của 2 số nguyên trên 1 dòng
Input
Input
1
812317349123232323232323232323232323232318247124
12316237123333333333333333333331231
Output

32

812317349123244639469446565656565656565651578355

Bài 2. Hiệu 2 số nguyên lớn
Tính hiệu 2 số nguyên lớn, mỗi số có không quá 1000 kí tự, ta lấy trị tuyệt đối của kết quả
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 2 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In ra hiệu của 2 số nguyên trên 1 dòng, chú ý lấy trị tuyệt đối của kết quả.
Input
Input
3
192389123919239123912912931923912931923
81239123912931290491284912498
888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888886
912939123912931923912391283473572347237421347124124102789541906274512
912939123912931923912391283473572347237421347124124102789541906274512
Output
192389123837999999999981641432628019425
2
0

Bài 3. Tổng chữ số của số nguyên lớn
Tính tổng chữ số của số nguyên lớn
Input

33
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In ra tổng các chữ số của số nguyên dương.
Ví dụ
Input Output
2
812317349123232323232323232323232323232318247124
12316237123333333333333333333331231

143
98

Bài 4. Số nguyên toàn chẵn.
Kiểm tra xem số nguyên đã cho có phải là số thuận nghịch và chứa toàn số chẵn hay không?
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Ví dụ
Input Output
3
2222222222222222222225222222222222222222222
555555555555555555555555555555555555555555555
28882

NO
NO
YES

Bài 5. Số nguyên toàn lẻ.
Kiểm tra xem số nguyên đã cho có phải là số thuận nghịch và chứa toàn số lẻ hay không?

34

Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Ví dụ
Input Output
3
2222222222222222222225222222222222222222222
555555555555555555555555555555555555555555555
28882

NO
YES
NO

Bài 6. Số đẹp 1
Một số nguyên được coi là chữ số đẹp nếu nó chỉ chứa các chữ số là số nguyên tố và tổng
các chữ số của nó có tận cùng là 0.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Ví dụ
Input Output
3
55555555555555555555555555555555555555555555
235723572357235723572357235723572357235723573
YES
YES

35

2375757575772727272777288727272732737 NO

Bài 7. Số đẹp 2
Một số nguyên được coi là chữ số đẹp nếu nó chỉ chứa các chữ số là số nguyên tố và là số
thuận nghịch
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Ví dụ
Input Output
3
55555555555555555555555555555555555555555555
235723572357235723572357235723572357235723573
2375757575772727272777288727272732737

YES
NO
NO

Bài 8. Số chia hết cho 6
Nhập vào một số nguyên dương n (1<=n<=10^1000). Xác định xem n có
chia hết cho 6 hay không?
Input
Dòng đầu tiên là số bộ test T (1<=T<=100).
Mỗi bộ test bao gồm một dòng chưa số nguyên dương cần kiểm tra.
Output
In YES nếu n chia hết cho 6, ngược lại in NO.
Ví dụ

36

Input Output
2
18
3333333399999993333333333333333333333333333333333333222
YES
YES

Bài 9. Số chia hết cho 4
Nhập vào một số nguyên dương n (1<=n<=10^1000). Xác định xem n có
chia hết cho 4 hay không?
Input
Dòng đầu tiên là số bộ test T (1<=T<=100).
Mỗi bộ test bao gồm một dòng chưa số nguyên dương cần kiểm tra.
Output
In YES nếu n chia hết cho 6, ngược lại in NO.
Ví dụ
Input Output
2
18
333333339999999333333333333333333333333333333333333322210024
NO
YES

Bài 10. Số chia hết cho 25
Nhập vào một số nguyên dương n (1<=n<=10^1000). Xác định xem n có
chia hết cho 25 hay không?
Input
Dòng đầu tiên là số bộ test T (1<=T<=100).
Mỗi bộ test bao gồm một dòng chưa số nguyên dương cần kiểm tra.
Output

37
In 1 nếu n chia hết cho 25, ngược lại in 0.
Ví dụ
Input Output
2
18
18283128381238182812481248182480912481284812412841824875
NO
YES

Bài 11 .Số chia hết cho 8
Nhập vào một số nguyên dương n (1<=n<=10^1000). Xác định xem n có
chia hết cho 8 hay không?
Input
Dòng đầu tiên là số bộ test T (1<=T<=100).
Mỗi bộ test bao gồm một dòng chưa số nguyên dương cần kiểm tra.
Output
In YES nếu n chia hết cho 8, ngược lại in NO.
Ví dụ
Input Output
2
16
12381289471245812581251275129581258128512851825182541257800
YES
YES

Bài 12. Số chia hết cho 2, 3, và 5
Kiểm tra xem một số nguyên dương có chia hết cho cả 2 3 và 5 hay không
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).

38

Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Input Output
2
12944471241828581825818235818583885
263730746028908374890

NO
YES

Bài 13. Số nhị phân chia hết cho 5
Kiểm tra xem một số nguyên dương có chia hết cho 5 hay không
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương n được biểu diễn dưới dạng
số nhị phân có không quá 1000 bit.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Input Output
2
111
0001101110100100101111000011111011000010010101111011010011110011
NO
YES

Bài 14. Tìm số dư của 1 số nguyên lớn với 1 số long long.
Cho số nguyên dương N rất lớn được biểu diễn như một xâu và số M. Hãy tìm K = N%M.
Ví dụ N=123456789873123456778976, M = 100 thì K=76.
Input:
Dòng đầu tiên đưa vào số lượng test T.

39

Những dòng kế tiếp mỗi dòng đưa vào các test. Mỗi test là bộ đôi N, M được viết trên hai
dòng khác nhau.
T, N, M thỏa mãn ràng buộc : 1≤T≤100; 0≤length(N) ≤1000; 2≤M ≤1012
.

Output:
Đưa ra kết quả mỗi test theo từng dòng.
Input Output
2
1234519231092301293129391294120401294129412949124912491294
10
18923128381243125412845812581284518248182439123812838123817
4

4

1

Bài 15. Tìm ước chung lớn nhất của 1 số nguyên lớn với 1 số long long.
Tìm ước chung lớn nhất của 2 số m và n.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 2 số n và m. Trong đó (0≤m≤1016, 0≤n≤101000).
Output
In ra gcd của m và n trên một dòng
Ví dụ
Input Output
2
10120391293189239192318294124871248124172471247179241297417982
1000000007
12030123012949129491240120410240124912949124912041024010010230135
1

5

40

5

Bài 16. Tìm (a^b)%MOD trong đó a là số nguyên lớn
Cho số nguyên dương a, b, M, trong đó a là số rất lớn được biểu diễn như một xâu ký tự số.
Hãy tìm K = (ab

) %M. Ví dụ a = 3, b=2, M = 4 thì K = (32
)%4 = 1

Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp mỗi dòng đưa vào một test. Mỗi test là bộ ba a, b, M được viết trên
một dòng.
T, a, b, M thỏa mãn ràng buộc : 1≤T≤100; 0≤length(a) ≤1000; 2≤ b, M ≤1012
.

Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ
Input Output
1
3 2 4 1

Bài 17. Số nhị phân chia hết cho 2^x
Kiểm tra một số nguyên dương được biểu diễn dưới dạng số nhị phân có chia hết
cho 2x hay không.
Input
Dòng đầu tiên là số lượng bộ test, mỗi bộ test gồm một dòng bao gồm số nhị phân
n có không quá 1000 bit .và số tự nhiên x (1 <=x<=1000).
Output
In YES nếu n chia hết cho 2k

, ngược lại in NO.

Ví dụ

41

Input
2
10101010101010101010101010101010101000000000 6
1111111111111111010101010101010101010101010101010101010101010101010101
0101010101101111111111111111111111111110111111111111111111111111111111
1111111000000000000000000000000000000000000000000001111111101010 3
YES
NO

Bài 18. Số đầy đủ
Kiểm tra xem một số nguyên dương có đầy đủ các chữ số từ 0 tới 9 hay không.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In YES nếu số đã cho thỏa mãn yêu cầu đầu bài, ngược lại in NO
Ví dụ
Input Output
2
1098765432281238182381283189471274172481248912841924912471824
5819239011181818189219839123912391

YES
NO

Bài 19. Số ưu thế
Số ưu thế là số nguyên dương và nếu nó là số có sỗ chữ số lẻ và số lượng chữ số lẻ lớn hơn
số lượng chữ số chẵn hoặc nó có số chữ số chẵn và số lượng chữ số chẵn nhiều hơn số
lượng chữ số lẻ. Hãy kiểm tra số nhập vào có phải là số ưu thế hay không?
Trong trường hợp số nhập vào không hợp lệ ( Chữ kí tự không hợp lệ hoặc số bắt đầu bằng
số 0) in ra -1.
Input

42
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng, mỗi dòng là một số nguyên dương có không quá 1000 số.
Output
In ra YES nếu số đã cho là số ưu thế, ngược lại in NO
Ví dụ
Input Output
3
A78182381283182381823@
0912931823
4444757520

-1
-1
YES