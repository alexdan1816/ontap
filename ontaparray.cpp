#include <iostream>
using namespace std;
void display(int *p, int n)
{
    for(int i=0;i<n;i++)
    printf("[%d] ",p[i]);
}
int main()
{
    int a[]={10,4,5,4,8,4,66,3,2,9};
    int N;
    printf("nhap so nguyen N\n");
    scanf("%d",&N);
    int b[N];
    for (int i=0;i<N;i++)
    {
        scanf ("%d",&b[i]);
    }
    int c[N];
    int *p=c;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&p);
        p++;
    }
    display(b,N);
    display(c,N);


}