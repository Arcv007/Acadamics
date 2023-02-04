// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to print all the power set
void printPowerSet(char* set, int set_size)
{
    // Set_size of power set of a set with set_size
    // n is (2^n-1)
    unsigned int pow_set_size = pow(2, set_size);
    int i, j, ans[10];
 
    // Run from counter 000..0 to 111..1
    for (i = 0; i < pow_set_size; i++) {
        for (j = 0; j < set_size; j++) {
            // Check if jth bit in the counter is set
            // If set then print jth element from set
            if (i & (1 << j))
                ans[10]= set[j];
        }
        cout << endl;
    }
}
 
/*Driver code*/
int main()
{
    char set[] = { 'a', 'b', 'c' };
    printPowerSet(set, 3);
    return 0;
}