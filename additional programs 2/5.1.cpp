#include <iostream>
using namespace std;

class Counter {
public:
    static int total;
    static int alive;

    Counter() {
        total++;
        alive++;
    }

    ~Counter() {
        alive--;
    }

    static void display() {
        cout << "Total created: " << total << endl;
        cout << "Currently alive: " << alive << endl;
    }
};

int Counter::total = 0;
int Counter::alive = 0;

int main() {
    Counter c1, c2;

    Counter::display();

    {
        Counter c3;
        Counter::display();
    }

    Counter::display();

    return 0;
}