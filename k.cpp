#include <iostream>
using namespace std;

int main() {
    long long H, M, S, K;
    cin >> H >> M >> S >> K;

    // تحويل الوقت الحالي إلى ثوانٍ وإضافة K ثانية
    long long total_seconds = H * 3600 + M * 60 + S + K;

    // أخذ باقي القسمة على عدد ثواني اليوم الكامل (24 * 3600 = 86400)
    total_seconds %= 86400;

    // إعادة التحويل إلى ساعات ودقائق وثوانٍ
    long long new_H = total_seconds / 3600;
    long long new_M = (total_seconds % 3600) / 60;
    long long new_S = total_seconds % 60;

    cout << new_H << " " << new_M << " " << new_S << "\n";

    return 0;
}
