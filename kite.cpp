#include<iostream>
using namespace std;
// hollowDiamond + diagonals
/*
      *
    * * *
  *   *   *        Extra Space
* * * * * * *      
  *   *   *        
    * * *
      *
*/


int main(){
    int n;
    cout <<"n: ";
    cin >> n;
    cout<<endl;
    
    //First n rows
    for(int i=1; i<=n; i++){
        for (int j = 1; j <= 2*n-1; j++)
        {       // extra diagonal condn i=n or j=n
            if(i==n || j==n || j==n+1-i || j==n-1+i) cout<< "* ";  //spread away from center using inc. 'i'
            else cout <<"  ";
        }
        cout << endl;
    }
    //next n-1 rows
    for(int i=1; i<=n-1; i++){
        for (int j = 1; j <= 2*n-1; j++)
        {   // extra vertical diagonal condn  j=n
            if(j==n || j==i+1 || j==2*n-1-i) cout<< "* "; //spread away from edges using inc. 'i'
            else cout <<"  ";
        }
        cout << endl;
    }

}


