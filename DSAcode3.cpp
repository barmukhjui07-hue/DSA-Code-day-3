// While loops-
/*#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int count = 1;
    while (count<=n){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
    return 0;
}*/
// For loops and break statement use-
/*#include<iostream>
using namespace std;
int main(){
   int n = 25;
   int sum = 0;
   for(int i=1; i<=n; i++){
    sum+= i;
    if(i==10){
        break;
    }
   } 
   cout<<"sum is = "<<sum<<endl;
    return 0;
}*/
//Print Prime and Non-Prime nos. using loops-
#include<iostream>
using namespace std;
int main(){
    int n = 21;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<n<<" is Prime no."<<endl;
    } else{
        cout<<n<<" is Non-Prime no."<<endl;
    }
    return 0;
}