#include<iostream>
using namespace std;
/*
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4 
    4 3 2 2 2 3 4   Extra Space
    4 3 2 1 2 3 4 
    4 3 2 2 2 3 4 
    4 3 3 3 3 3 4 
    4 4 4 4 4 4 4 
*/

int main(){
    int n;
    cout <<"n: ";
    cin >> n;
    cout<<endl;
    //My Soln for n=4, will help understand my next level soln :)
    for(int i=1; i<=2*n-1; i++){
        for (int j = 1; j <=2*n-1; j++)  //complete square
        {  
            if(i==n && j==n) cout <<1<<" ";  //center 1
            else if((i>=n-1 && i<=n+1) && (j>=n-1 && j<=n+1)){  //range using n
                cout << 2<<" ";  //2 square
            }
            else if((i>=n-2 && i<=n+2) && (j>=n-2 && j<=n+2)){
                cout << 3<<" ";  // 3 square
            }
            else{
                cout << n<<" ";   // 4 square
            }
            // ... need to use loop to continue for n>4
            // completed in nextLevel Soln ;)
        }
        cout << endl;
    } 
    cout << endl;
    // Sir's Soln- using min(i,j) i.e. min(row,col) then inverting
    int a,b; //pseudo index for i,j>n
    for(int i=1; i<=2*n-1; i++){
        for (int j = 1; j <=2*n-1; j++) 
        {   
            a=i; b=j;
            if(i>n) a=2*n-i;   //to continue applying min(i,j)
            if(j>n) b=2*n-j;
            int x=min(a,b);
            cout << n-x+1 << " "; //inverting
        } 
        cout << endl;
    }
}


