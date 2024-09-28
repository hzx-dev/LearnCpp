#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, p, m, g;

    cin >> a >> b >> c >> d >> p >> m >> g;

    // Postman
    int arrived_a_stats = p % (a + b) <= a && p % (a + b) > 0 ? true : false;
    int arrived_b_stats = p % (c + d) <= c && p % (c + d) > 0 ? true : false;
    if (arrived_a_stats == true && arrived_b_stats == true) 
        cout << "both" << endl;
    else if (arrived_a_stats == true || arrived_b_stats == true)
        cout << "one" << endl;
    else cout << "none" << endl;

    // Milker
    arrived_a_stats = m % (a + b) <= a && m % (a + b) > 0 ? true : false;
    arrived_b_stats = m % (c + d) <= c && m % (c + d) > 0 ? true : false;
    if (arrived_a_stats == true && arrived_b_stats == true) 
        cout << "both" << endl;
    else if (arrived_a_stats == true || arrived_b_stats == true)
        cout << "one" << endl;
    else cout << "none" << endl;
    
    // Street-cleaner
    arrived_a_stats = g % (a + b) <= a && g % (a + b) > 0 ? true : false;
    arrived_b_stats = g % (c + d) <= c && g % (c + d) > 0 ? true : false;
    if (arrived_a_stats == true && arrived_b_stats == true) 
        cout << "both" << endl;
    else if (arrived_a_stats == true || arrived_b_stats == true)
        cout << "one" << endl;
    else cout << "none" << endl;

    return 0;
}
