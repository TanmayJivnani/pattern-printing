#include<iostream>
using namespace std;

/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4   Extra Space
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

int main(){
    int n;
    cout <<"n: ";
    cin >> n;
    cout<<endl;
    int k=1;
    // My Soln ;)
    for(int i=1; i<=2*n-1; i++){
        for (int j = 1; j <=2*n-1; j++) 
        {   k=1;
            while(k<=n-1){
                if(i==n && j==n) {  //center 1
                    cout <<1<<" ";
                    break;
                }
                //check for each cell
                if((i>=n-k && i<=n+k) && (j>=n-k && j<=n+k)){ //keep incrementing k to expand row,col check outwards
                cout << k+1<<" ";  
                break;        
                }
                else k++;
                
            }   
    } 
    cout << endl;
}
}


