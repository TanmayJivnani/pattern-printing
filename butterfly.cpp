#include<iostream>
using namespace std;

/*
    *           * 
    * *       * * 
    * * *   * * * 
    * * * * * * * 
    * * * * * * * 
    * * *   * * * 
    * *       * * 
    *           * 
*/


int main(){
    int n;
    cout <<"n: ";
    cin >> n;
    cout<<endl;
    
    //First n rows
    for(int i=1; i<=n; i++){
        for (int j = 1; j <= 2*n-1; j++)  //complete col traversal
        {       
            if(j<=i || j>=2*n-i) cout<< "* ";  //increasing range of stars per row using inc. 'i'
            else cout <<"  ";
        }
        cout << endl;
    }
    //next n rows
    for(int i=1; i<=n; i++){
        for (int j = 1; j <= 2*n-1; j++)
        {   
            if(j<=n+1-i || j>=n-1+i) cout<< "* "; //decreasing range of stars per row using inc. 'i'
            else cout <<"  ";
        }
        cout << endl;
    }

}


