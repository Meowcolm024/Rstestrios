#include <ctime>
#include <iostream>
using namespace std;
int main() {
    time_t now;
    struct tm * timeinfo;
    time(&now);
    timeinfo = localtime(&now);
    cout << timeinfo->tm_hour << endl;
    return 0;
}