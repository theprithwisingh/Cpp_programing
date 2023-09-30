/*
#include <iostream>
using namespace std;

int main() {

for (int i = 19 ; i <= 190; i = i + 19)
{
    cout<<i<<endl;
}

}
*/

/*
#include <iostream>
using namespace std;
int main(){
    int x;
    x= 5>8 ? 10 : 1!=2<5?20 : 30;
    cout << "value of x : "<< x;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
int n;
cout<< "Enter the n value :" ;

cin>>n;
 for(int i = n; i<= 20 ; i += 2 ){
    cout << i << endl;
 }
}
*/

/*
#include <iostream>
using namespace std;
 int main(){
 int n;
 cout<< "Enter the number :";
 cin>>n;
  for(int i = 1; i <= 2*n-1; i+=2){
    cout<<i<<endl;
  }
 }
*/

/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number :";
    cin>>n;
    int a = 1;
    for (int i = 0; i <= n; i++)
    {
        cout<<a<<endl;
        a = a + 3;
    }

}*/


//ARITHMETIC PROGRESSION
/* #include <iostream>
using namespace std;

int main(){
    int a;
    int d;
    int n;
    cout<<"Enter the first value :";
    cin>>a;

    cout<<"Enter the value of common diff. :";
    cin>>d;

    cout<<"Enter the value how many times print :";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a=a+d;
    }
}
*/

 /* 
//GEOMETRIC PROGRESSION
// 1,2,3,4,5,6,7....
#include <iostream>
using namespace std;
 int main(){
  for(int i = 0;i<=10;i++){
    cout<<i<<endl;
  }
 }
*/ 

/*
//1 2 4 8 16 32 64 128 256 512 1024
#include <iostream>
using namespace std;
 int main(){
  int a;
  cout<<"Enter the First Number :";
  cin>>a;

  int d;
  cout<<"Enter the common ratio :";
  cin>>d;

  int n;
  cout<<"Enter the Nubmer of terms :";
  cin>>n;

  for(int i = a;i<=n;i++){
    cout<<a<<endl;
    a  = a*d;
  }
 }
*/

/*
//100 99 98 97 95 94....1
 #include <iostream>
 using namespace std;
 
  int main(){
   for (int i = 100; i >= 20; i--)
   {
    cout<<i<<endl;
   }
  }
  */

 /*
 Display this ap- 100 97 94 91 88------ 1 all terms which are positive.
 by mathematical solution
 get last term 1 on 34th terms
 */


/*
#include <iostream>
using namespace std;
 int main(){
  int a = 100;
  for(int i = 1; i <= 34; i++)
  {
    cout<<a<<endl;
    a = a-3;
  }
}
*/

#include <iostream>
using namespace std;
int main(){
  for (int i = 100; i > -6 ; i= i-3)
  {
    cout<<i<<endl;
  }
  
}
