#include<iostream>
using namespace std;

/*  
    1 2 3 4 5 6 7
    1 2 3   5 6 7
    1 2       6 7     Extra Space
    1           7
*/

int main(){
    int n;
    cout <<"n: ";
    cin >> n;
    cout<<endl;
    int nsp=1;
    //My Soln - Great one! Seperate 1st line, Start from 5/6 in right triangle and decrease
    int num=n+1;  //start from 5,6,..
    int add=1;// Increse added number to get 6,7,8..
    int m=n-1; //exclude 1st line
    for(int i=1;i<=2*n-1; i++){
        cout << i<<" ";            //First line
    }
    cout<< endl;
    for(int i=1; i<=m; i++){
        for (int j = 1; j <=m-i+1; j++) 
        {  
            cout << j<<" ";
        }
        for (int j = 1; j <=nsp; j++) 
        {  
            cout << "  ";
        }
        nsp+=2;
        for(int j = 1; j <=m-i+1; j++) //dhacha
        {  
            cout << num<<" ";
            num++;
        }
        num=n+1;
        num+=add;
        add++;   // increase add to get 6,7,8...
        cout << endl;
    } 
    cout <<endl;
    //Sir's Soln - Maza aa gaya :) 
    //Create var a that is incremented horizontally through the spaces
    nsp=1; //reset
    for(int i=1;i<=2*n-1; i++){
        cout << i<<" ";
    }
    cout<< endl;
    for(int i=1; i<=m; i++){
        int a=1;
        for (int j = 1; j <=m-i+1; j++) 
        {  
            cout << a<<" ";
            a++;
        }
        for (int j = 1; j <=nsp; j++) 
        {  
            cout << "  ";
            a++;
        }
        nsp+=2;
        for(int j = 1; j <=m-i+1; j++) 
        {  
            cout << a<<" ";
            a++;
        }
        cout << endl;
    } 

}   


