Phần 1. Star pattern
// Bài 1. Hình chữ nhật 1
// Input                 Output
// 5                      *****
//                        *****
//                        *****
//                        *****
//                        ***** 

#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
for(int i = 1; i <= n; i++) {
for(int j = 1; j <= n; j++) {
cout << "*";
}
cout << endl;
}
  return 0;
}

// Bài 2. Hình chữ nhật 2
// Input                 Output
// 5                     *****
//                       *   *
//                       *   *
//                       *   *
//                       *****

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
for(int i = 1; i <= n; i++) {
for(int j = 1; j <= n; j++) {
	if( i == 1 || i == n || j == 1 || j == n){
			cout << "*";
	} else {
		cout << " ";
		}

}
cout << endl;
}
  return 0;
}

// Bài 3. Hình chữ nhật 3
// Input                       Output
// 4 5                         *****
//                             *   *
//                             *   *
//                             *****

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int a, b;
cin >> a >> b;
for(int i = 1; i <= a; i++) {
for(int j = 1; j <= b; j++) {
	if( i == 1 || i == a || j == 1 || j == b){
			cout << "*";
	} else {
		cout << " ";
		}

}
cout << endl;
}
  return 0;
}


// Bài 4. Hình chữ nhật 4
// Input                    Output
// 4 5                      *****
//                          *~~~*
//                          *~~~*
//                          *****

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int a, b;
cin >> a >> b;
for(int i = 1; i <= a; i++) {
for(int j = 1; j <= b; j++) {
	if( i == 1 || i == a || j == 1 || j == b){
			cout << "*";
	} else {
		cout << "~";
		}

}
cout << endl;
}
  return 0;
}

// Bài 5. Tam giác 1
// Input                       Output
// 5                           *
//                             **
//                             ***
//                             ****
//                             *****

#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
for(int i = 1; i <= n; i++) {
for(int j = 1; j <= i; j++) {
cout << "*";
}
cout << endl;
}
  return 0;
}

// Bài 6. Tam giác 2
// Input                       Output
// 5                           *****
//                             ****
//                             ***
//                             **
//                             *

#include <iomanip>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
for(int i = 1; i <= n; i++) {
for(int j = 5; j >= i; j--) {
cout << "*";
}
cout << endl;
}
  return 0;
}

// Bài 7. Tam giác 3
// Input                      Output
// 5                               *
//                                **
//                               ***
//                              ****
//                             *****

Bài 8. Tam giác 4
Input Output
5 *****
****
***
**
*

Bài 9. Tam giác 5.

Input Output
5 *
**
* *
* *

5
*****

Bài 10. Tam giác 6
Input Output
5 *
***
*****
*******
*********

Bài 11. Tam giác 7.
Input Output
5 *
* *
* *
* *
*********

Bài 12. Tam giác 8.
Input Output
5 *********
*******
*****
***
*

Bài 13. Đường chéo 1.
Input Output
5 *~~~~
**~~~
***~~
****~
*****

Bài 14. Đường chéo 2.
Input Output
5 *****
****~
***~~
**~~~

6
*~~~~

Bài 15. Hình bình hành.
Input Output
4 5 *****
~*****
~~*****
~~~*****

Bài 16. Hình chữ nhật 5
Input Output
5 ~~~~*
~~~**
~~* *
~* *
*****

Bài 17. Hình thoi

Bài 18. Hình thoi 2
Input Output
5 ~~~~*
~~~***
~~*****
~*******
5 *
**
***
****
*****
****
***
**
*

7
*********
~*******
~~*****
~~~***
~~~~*

Bài 19. Hình thoi 3
Input Output
5 **********
****~~****
***~~~~***
**~~~~~~**
*~~~~~~~~*
**~~~~~~**
***~~~~***
****~~****
**********

Bài 20. Mũi tên 1.

Input Output
5 *****
~~****
~~~~***
~~~~~~**
~~~~~~~~*
~~~~~~**
~~~~***
~~****
*****

Bài 21. Mũi tên 2
Input Output
5 ~~~~*****
~~~****
~~***

8
~**
*
~**
~~***
~~~****
~~~~*****

Phần 2. Number pattern
Bài 1. Hình chữ nhật số 1
Input Output
5 10101
01010
10101
01010
10101

Bài 2. Hình chữ nhật số 2
Input Output
5 1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

Bài 3. Hình chữ nhật số 3

Input Output
5 1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Bài 4. Hình chữ nhật số 4
Input Output
5 ~~~~1
~~~22

9
~~333
~4444
55555

Bài 5. Hình chữ nhật số 5
Input Output
5 1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

Bài 6. Hình chữ nhật số 6
Input Output
5 4444444
4333334
4322234
4321234
4322234
4333334
4444444

Bài 7. Hình chữ nhật số 7

Input Output
5 5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1

Bài 8. Hình chữ nhật số 8
Input Output
5 1 2 3 4 5
2 1 2 3 4
3 2 1 2 3
4 3 2 1 2
5 4 3 2 1

10

Bài 8. Hình chữ nhật số 9
Input Output
5 12345
23455
34555
45555
55555

Bài 9. Hình tam giác số 1
Input Output
5 1
12
123
1234
12345

Bài 10. Hình tam giác số 2
Input Output
5 1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

Bài 11. Hình tam giác số 3
Input Output
5 ~~~~2
~~~242
~~24642
~2468642
2468108642

Bài 12. Hình tam giác số 4
Input Output
4 1
3 2
4 5 6
10 9 8 7

11

Bài 13. Hình tam giác số 5
Input Output
4 1
2 4
7 11 16
22 29 37 46
56 67 79 92 106

Bài 14. Hình tam giác số 6
Input Output
5 2
242
24642
2468642
2468108642

Bài15. Hình tam giác số 7
Input Output
5 ~~~~1
~~~131
~~13531
~1357531
135797531

Phần 3. Character pattern
Bài 1. Hình chữ nhật số 1
Input Output
4 4 1234
2341
3421
4321
3 5 12345
23451
34521
6 4 1234
2341
3421
4321
5321
6321

12

Bài 2. Hình chữ nhật số 2
Input Output
4 4 1234
2343
3432
4321
3 5 12345
23454
34543
5 3 123
232
321
432
543

Bài 3. Hình chữ nhật số 3
Input Output
4 4 1234
2123
3212
4321
4 6 123456
212345
321234
432123

13
6 4 1234
2123
3212
4321
5432
6543

Bài 4. Hình chữ nhật số 4
Input Output
4 4 4321
3212
2123
1234
4 6 654321
543212
432123
321234
6 4 6543
5432
4321
3212
2123
1234

14

Bài 5. Hình chữ nhật kí tự 1
nput Output
4 4 DDDD
CDDD
BCDD
ABCD
3 5 CDEEE
BCDEE
ABCDE
5 3 CCC
CCC
CCC
BCC
ABC

Bài 6. Hình chữ nhật kí tự 2
Input Output
4 4 @ABC
ABCC
BCCC
CCCC
3 5 @ABCD
ABCDD
BCDDD

15
5 3 @AB
ABB
BBB
BBB
BBB

Bài 7. Hình chữ nhật kí tự 3
Input Output
4 4 ABCD
BCDA
CDBA
DCBA
3 5 ABCDE
BCDEA
CDEBA
5 3 ABC
BCA
CBA
CBA
CBA

Bài 8. Hình chữ nhật kí tự 4
Input Output

16
5 5 eeeee
edddd
edccc
edcbb
edcba
4 6 ffffff
feeeee
fedddd
fedccc
6 4 ffff
feee
fedd
fedc
fedc
fedc

Bài 9. Hình tam giác kí tự 1
Input Output
4 a
c b
d e f
j i h g

Bài 10. Hình tam giác kí tự 2
Input Output

17
5 @
@B@
@BDB@
@BDFDB@
@BDFHFDB@

Bài 11. Hình tam giác kí tự 3
Input Output
4 ACEG
CEG
EG
G

Bài 12. Hình tam giác kí tự 4
Input Output
4 CDEF
BCD
AB
@

Bài 13. Hình tam giác kí tự 5
Input Output
5

A
B A B
C B A B C
D C B A B C D

18
E D C B A B C D E

Bài 14. Hình tam giác kí tự 6
Input Output
5

a
B c
D e F
g H i J
k L m N o

Bài 15. Hình tam giác kí tự 7
Input Output
5

A
A B A
A B C B A
A B C D C B A
A B C D E D C B A