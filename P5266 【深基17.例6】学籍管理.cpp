#include <cstdio>
#include <map>
#include <iostream>
#include <string>

using namespace std;

map<string, int> stu;
int n, op, score;
string name;

int main()
{
    cin >> n;

    while (n--) {
        scanf("%d", &op);
        switch (op) {
            case 1: {
                cin >> name >> score;
                stu[name] = score;
                cout << "OK" << endl;
                break;
            }
            case 2: {
                cin >> name;
                if (stu.find(name) == stu.end()) {
                    cout << "Not found" << endl;
                } else {
                    cout << stu[name] << endl;
                }
                break;
            }
            case 3: {
                cin >> name;
                if (stu.find(name) == stu.end()) {
                    cout << ("Not found\n");
                } else {
                    stu.erase(name);
                    cout << ("Deleted successfully\n");
                }
                break;
            } case 4: {
                cout << (stu.size()) << endl;
                break;
            }
        }
    }
    
    return 0;
}
