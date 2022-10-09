#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    long double f, c;
    in >> f >> c;
    out << fixed << setprecision(10);
    out << 5.0 / 9.0 * (f - 32.0);
    out << " " << 9.0 / 5.0 * c + 32.0;
}