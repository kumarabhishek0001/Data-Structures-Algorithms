#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int spaces=1; spaces<=n-i-1; spaces++){
            cout<<" ";
        }

        //stars
        for(int stars=1; stars<=2*i+1; stars++){
            cout<<"*";
        }

        //spaces
        for(int spaces=1; spaces<=n-i-1; spaces++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void pattern8(int n){
    int initStars = n*2-1;
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //stars
        for(int j=0; j<initStars; j++){
            cout<<"*";
        }initStars-=2;


        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern9(int n){
    //upper pattern
    for(int i=0; i<n; i++){
        //spaces
        for(int spaces=1; spaces<=n-i-1; spaces++){
            cout<<" ";
        }

        //stars
        for(int stars=1; stars<=2*i+1; stars++){
            cout<<"*";
        }

        //spaces
        for(int spaces=1; spaces<=n-i-1; spaces++){
            cout<<" ";
        }
        cout<<endl;

    }

    int initStars = n*2-1;
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //stars
        for(int j=0; j<initStars; j++){
            cout<<"*";
        }initStars-=2;


        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern10(int n){
    int initStar = 1;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<=initStar; j++){
            cout<<"*";
        }cout<<endl;

        if (i<n) initStar++;
        else initStar--;
    }
}

void pattern11(int n){
    int start = 1;
    for(int i=1; i<=n; i++){
        if(i%2==0) start = 0;
        else start=1;

        for(int j=1; j<=i; j++){
            
            cout<<start;
            start=1-start;

        }cout<<endl;

    }
}

void pattern12(int n){
    int initStar = n*2-2;
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //stars
        for(int j=1; j<=initStar; j++){
            cout<<" ";
        }initStar-=2;

        //spaces
        for(int j=i; j>=1; j--){
            cout<<j;
        }

        cout<<endl;
    }
}

void pattern13(int n){
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+i; j++){
            cout<<j;
        }cout<<endl;
    }
}

void pattern15(int n){
    for(int i=1; i<=n; i++){
        for(char j='A'; j<='A'+(n-i); j++){
            cout<<j;
        }cout<<endl;
    }
}

void pattern16(int n){
    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }ch++;
        cout<<endl;
    }
}

void pattern17(int n){
    int charCount = 1;
    
    for(int i=0; i<n; i++){
        char initChar = 'A';
        
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        //characters
        for(int j=0; j<charCount; j++){
            cout<<initChar;

            if(j<(charCount/2)) initChar++;
            else initChar--;
        }charCount+=2;


        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    char rowStart = 'A'+n-1;
    for(int i=1; i<=n; i++){
        for(char ch=rowStart; ch<='A'+n-1; ch++){
            cout<<ch;
        }
        rowStart--;
        cout<<endl;
    }
}

void pattern19(int n){
    //upper
    int initSpace=0;
    for(int i=0; i<n; i++){
        
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<initSpace; j++){
            cout<<" ";
        }
        initSpace+=2;
        

        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    initSpace = 2*n-2;
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<initSpace; j++){
            cout<<" ";
        }
        initSpace-=2;

        //stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        
        int stars=i;
        if(i>n) stars=2*n-i;
        
        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        

        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }


        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;

        if(i<n) spaces -= 2;
        else spaces += 2;
    }



}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }else cout<<" ";
        }cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;

            int bottom=2*n-2-i;
            int right=2*n-2-j;

            cout<<n-min(min(top, bottom), min(right, left))<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int k;
    cin>>k;
    for(int i=1; i<=k; i++){
        int input;
        cin>>input;
        
        pattern5(input);
        cout<<endl;
    }
    return 0;
}