#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Monitor {
    string n;
    int g;
    double c;
};

bool cmpM(const Monitor& a, const Monitor& b) {
    return a.c > b.c;
}

void task1() {
    vector<Monitor> m = { {"Dell", 3, 500}, {"LG", 2, 300}, {"Samsung", 4, 700} };
    sort(m.begin(), m.end(), cmpM);
    for (auto& i : m) cout << i.n << " " << i.g << " " << i.c << "\n";
}

struct Car {
    string mk, md, d;
    int y, o;
    double p;
    bool t;
};

void task2() {
    vector<Car> c = { {"BMW", "X5", "3.0/black/2", 2018, 40000, true},
                      {"Audi", "A6", "2.0/white/1", 2020, 35000, false} };
    cout << "Mark Model Year Price Bargain Details\n";
    for (auto& i : c)
        cout << i.mk << " " << i.md << " " << i.y << " " << i.p << " " << (i.t ? "Yes" : "No") << " " << i.d << "\n";
}

typedef struct {
    string s;
    char g;
    double a;
} Student;

void task3() {
    vector<Student> st = { {"Ivanov", 'M', 4.5}, {"Petrova", 'F', 4.8}, {"Sidorov", 'M', 4.2} };
    double am = 0, af = 0, cm = 0, cf = 0;
    for (auto& i : st) (i.g == 'M' ? (am += i.a, cm++) : (af += i.a, cf++));
    cout << (am / cm > af / cf ? "Boys" : "Girls") << " have a higher average score.\n";
}

int main() {
    task1();
    cout << "\n";
    task2();
    cout << "\n";
    task3();
    return 0;
}