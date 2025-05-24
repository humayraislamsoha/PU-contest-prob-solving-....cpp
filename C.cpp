  /*This problem gives you a flavor of the concept of a special judge. That means the judge is smart enough to verify your code even though it may print different results. In this problem, you are asked to find the opposite task of the previous problem.

To be specific, I have two computers where I stored my problems. Now I know the total number of problems is n. There are no duplicate problems, and there can be at most 10 problems in each computer. You have to find the number of problems on each of the computers.

Since there can be multiple solutions. Any valid solution will do.*/           
             
#include <iostream>
using namespace std;

int main () {
    int T ;
    cin >> T ;
     
    while (T--) {
        int n;
        cin >> n; 

        cout << n/2 << "" << n - n/2 << endl;
    }
    return 0;
}