#include <bits/stdc++.h>
using namespace std;
string result(int participation, int assignment, int midterm, int final) {
    if(participation <= 100 && assignment <= 100 && midterm <= 100 && final <= 100) {  
        // bug: tất cả các giá trị này đều phải >= 0  
        double average = 0.2 * assignment + 0.1 * participation + 0.3 * midterm + 0.4 * final;

        if(average < 40) {
            return "F";
        }
        if(average < 50) {
            return "D";
        }
        if(average < 55) {
            return "D+";
        }
        if(average < 65) {
            return "C";
        }
        if(average < 70) {
            return "C+";
        }
        if(average < 80) {
            return "B";
        }
        if(average < 85) {
            return "B+";
        }
        if(average < 90) {
            return "A";
        }
        if(average < 100) {
            return "A+";
        }
        // bug: chưa xử lý giá trị average = 100
    }
    return "Dau vao khong hop le";
}

int main() {
    int participation, assignment, midterm, final;
    cin >> participation >> assignment >> midterm >> final;
    cout << result(participation, assignment, midterm, final);
}