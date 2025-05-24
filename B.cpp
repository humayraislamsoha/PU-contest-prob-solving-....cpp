/*When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked 
n
n people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these 
n
n people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.*/


#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    bool ok = false ;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x ;

        if (x == 1) {
            ok = true;
        }
    }
    if (ok == true){
        cout << "HARD" << endl;
    }
    els{
        cout << "EASY" << endl;
    }
    return 0;
}