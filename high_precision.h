#ifndef HIGH_PRECISION_H
#define HIGH_PRECISION_H

#include <algorithm>
#include <string>

using namespace std;

class HighPrecision {
    
    private:
        int numbers[505] = {0};

    public:
        HighPrecision();
        HighPrecision(const string & str);
        HighPrecision operator+(const HighPrecision & num) const;
        // friend HighPrecision operator+(long long num, const HighPrecision & n);
};

#endif
