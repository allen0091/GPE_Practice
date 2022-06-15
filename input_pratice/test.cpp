#include <iostream>
using namespace std;

int main() {
    cout << "start test\n";
    int num;
    cin >> num;
    cout << "input number : " << num << "\n";
    cin.ignore(); // important  https://aprilyang.home.blog/2020/04/10/getline-after-cin/
    for (int i = 0; i < num; i++) {
        char a[256];
        cin.getline(a, 256);
        cout << "input : " << a << "\n";
        // string a;
        // getline(cin, a);
        // cout << "input : " << a << "\n";
    }
    return 0;
}