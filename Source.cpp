/*  Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Çode and ASCII art by Dr. Jan Pearce, Berea College
 */
#include <iostream>
using namespace std;

int main() {

    int ducknum;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;

    for (int i = 0; i < ducknum; i++) {
        cout << "                __     " << endl;
        cout << "              <(o )___-" << endl;
        cout << "               ( .__> /" << endl;
        cout << "                `----' " << endl;
    }

    return 0;
}