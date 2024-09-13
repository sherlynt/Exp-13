#include <iostream>
using namespace std;
class fetch{
int num;
public:
fetch()

{
    num=7;
   
}
fetch (int x){
    num=x;
}
fetch (fetch& b)
{
    num=b.num;
}
void disp(){
    cout<<num<<endl;
}
};
int main(){
    fetch f1;
    f1.disp();
    fetch f2;
    f2.disp();
    fetch f3;
    f3.disp();
}
