#include <iostream>
using namespace std;
struct human
{
    human(int age1, float height1, float weight1)
    {
        age=age1;
        height=height1;
        weight=weight1;
    }
    human()
    {
        age=0;
        height=0;
        weight=0;
    }
    int age;
    float height;
    float weight;
};
int main()
{
    struct human Huy(19, 175, 75);
    struct human Huy2(19, 177,68);
    human bot[10];
    bot[1]={18,199,66};
    bot[2]={19,189,99};
    cout<<bot[1].age<<endl<<bot[1].height<<endl<<bot[1].weight<<endl;
    

}