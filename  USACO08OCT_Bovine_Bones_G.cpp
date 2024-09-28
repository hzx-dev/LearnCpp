// This is the solution to the problem "Bovine Bones" of USACO 08OCT 2016.

#include <iostream> // for input/output operations
#include <climits>  // for INT_MIN constant

using namespace std;

int counter[81] = {0}; // counter array to store the number of possible combinations of bovine bones for each possible sum of sizes

int main()
{
    int s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    // initialize the counter array with the number of possible combinations of bovine bones for each possible sum of sizes
    for (int i = 1; i <= s1; i++) for (int j = 1; j <= s2; j++) for (int k = 1; k <= s3; k++) counter[i+j+k]++; 
    
    int count[2] = {-1, INT_MIN};
    
    // find the maximum number of possible combinations of bovine bones and the corresponding sum of sizes
    for (int i = 1; i < 81; i++) if (counter[i] > count[1]) count[1] = counter[i], count[0] = i;

    cout << count[0] << endl; // output the sum of sizes

    return 0;
}

