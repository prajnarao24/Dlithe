//integer to roman

/*Step 1: Learn Roman Symbols
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000

Examples:

3  = III
5  = V
10 = X
50 = L
Step 2: Special Cases

Romans don't write:

IIII
VIIII
XXXX

Instead they use:

4   = IV
9   = IX
40  = XL
90  = XC
400 = CD
900 = CM

So our complete table becomes:

1000 -> M
900  -> CM
500  -> D
400  -> CD
100  -> C
90   -> XC
50   -> L
40   -> XL
10   -> X
9    -> IX
5    -> V
4    -> IV
1    -> I
Step 3: What do we do with a number?

Suppose:

num = 58

Ask:

Can I use 1000?
58 >= 1000 ?
No
Can I use 900?
58 >= 900 ?
No

Keep checking.

Can I use 50?
58 >= 50 ?
Yes

Take it.

ans = "L"
num = 58 - 50 = 8

Now:

num = 8

Check again from the table.

8 >= 5 ?
Yes

Take it.

ans = "LV"
num = 3

Now:

3 >= 1 ?
Yes

Take it.

ans = "LVI"
num = 2

Again:

ans = "LVII"
num = 1

Again:

ans = "LVIII"
num = 0

Stop.

Answer:

LVIII

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    vector<int> val = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    vector<string> sym = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    string ans = "";

    for(int i = 0; i < val.size(); i++) {

        while(num >= val[i]) {
            ans += sym[i];
            num -= val[i];
        }
    }

    cout << "Roman Numeral = " << ans;

    return 0;
}