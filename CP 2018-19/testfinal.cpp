#include<bits/stdc++.h>
using namespace std;
class name{
   public:
       string x;
       name()
       {

       }
       name(string y)
       {
           x=y;
       }
       name operator +(name ob)
       {
           name temp;
           temp.x=x+ob.x;

           return temp;
       }
      void show()
      {
          cout<<x;
      }

};
int main()
{
    name ob1("Hello "),ob2("World"),ob4(" Faisal"),ob3;

    ob3=ob1+ob2+ob4;
    ob3.show();
}
