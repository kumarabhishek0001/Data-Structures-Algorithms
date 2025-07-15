#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    int count = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            cout << "*";
        }
        count--;
        cout << endl;
    }
}

void pattern4_Meathod2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    int count = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            cout << j;
        }
        count--;
        cout << endl;
    }
}

void pattern5_Meathod2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < (2 * i) + 1; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int space=0; space<i; space++){
            cout<<" ";
        }

        for(int star=0; star<2*n-(2*i+1); star++){
            cout<<"*";
        }

        for(int space=0; space<i; space++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    int count = 2*n-1;
    for(int i=0; i<2*n; i++){
        
        if(i>=n){
            //spaces
            for(int spaces=0; spaces<i-n; spaces++){
                cout<<" ";
            }

            //stars
            for(int j=0; j<count; j++){
                cout<<"*";
            }

            //spaces
            for(int spaces=0; spaces<i-n; spaces++){
                cout<<" ";
            }

            count= count-2;
        }
        else{
            for (int space = 0; space < n - i - 1; space++)
            {
                cout << " ";
            }
            for (int star = 0; star < (2 * i) + 1; star++)
            {
                cout << "*";
            }
            for (int space = 0; space < n - i - 1; space++)
            {
                cout << " ";
            }
            
        }
        cout << endl;

    }
}

void pattern9(int n){
    for(int i=1; i<=2*n; i++){
        if(i<=n){
            for(int j=0; j<i; j++){
                cout<<"*";
            }cout<<endl;
        }
        else{
            for(int j=1; j<=2*n-i; j++){
                cout<<"*";
            }cout<<endl;
        }
        
        
    }
}

void pattern10(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            start = 1;
            for(int j=0; j<=i; j++){
                cout<<start;
                start =1- start;
            }
        }
        else{
            start = 0;
            for(int j=0; j<=i; j++){
                cout<<start;
                start =1- start;
            }
        }cout<<endl;
    }
}

void pattern11(int n){
    int count = 2*(n-1);
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //spaces
        for(int j=1; j<=count; j++){
            cout<<" ";
        }count = count-2;

        //rev numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }

        cout<<endl;
    }
}

void pattern12(int n){
    int start =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start++;
        }cout<<endl;
    }
}

void pattern13(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        
        //spaces
        for(int space=0; space<n-i-1; space++){
            cout<<" ";
        }

        //character
        char ch='A';
        int character_count = 2*i+1;
        for(int j=0; j<character_count; j++){
            cout<<ch;

            if(j<(character_count/2)) ch++;
            else ch--;
        }

        //spaces
        for(int space=0; space<n-i-1; space++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A' + (n - i); ch < 'A' + n; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern18(int n){}
void pattern19(int n){}
void pattern20(int n){}
void pattern21(int n){}
void pattern22(int n){}
int main()
{

    int n;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        int g;
        cin >> g;
        // pattern1(g);
        // pattern2(g);
        // pattern3(g);

        // pattern4(g);
        // pattern4_Meathod2(g);

        // pattern5(g);
        // pattern5_Meathod2(g);

        // pattern6(g);

        // pattern7(g);
        // pattern8(g);

        // pattern9(g);
        // pattern10(g);

        // pattern11(g);

        pattern16(g);

        cout << endl;
    }
}