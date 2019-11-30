#include <iostream>
using namespace std;
int main() {
    int i,h,s,sp;
    do {
        cout << "想要的高為" << "\n";
        cin >> h; }
     while (h > 8 || h <= 0);
      for (i = 0;i <= h;i++) {
        for (sp = h;sp >i ;sp--) {
            cout << " ";}
        for (s = 1;s <= i;++s) {
              cout << "*";}
         cout<<"\n";
        }
}
