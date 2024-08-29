#include <iostream>
#include <string>
using namespace std;
struct Sinh_vien
{
    long mssv;
    string ho_ten;
    string lop;
    float diem_gpa;
    Sinh_vien(long mssv1, string ho_ten1, string lop1, float diem_gpa1)
    {
        mssv=mssv1;
        ho_ten=ho_ten1;
        lop=lop1;
        diem_gpa=diem_gpa1;
    }
    Sinh_vien()
    {
        mssv=0;
        ho_ten='0';
        lop='0';
        diem_gpa=0;
    }
    
};
void display(Sinh_vien sv)
{
    cout<<"MSSV: "<<sv.mssv<<endl;
    cout<<"Ho ten: "<<sv.ho_ten<<endl;
    cout<<"Lop: "<<sv.lop<<endl;
    cout<<"Diem gpa: "<<sv.diem_gpa;
}
int main()
{
    Sinh_vien SV1(20233455, "DanHuy", "ETTN", 2.9);

    int n;
    cout<<"Nhap so sinh vien"<<endl;
    cin>>n;
    Sinh_vien sv[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Nhap thong tin cho sinh vien thu "<<i+1<<endl;
        cout<<"MSSV:";
        cin>>sv[i].mssv;
        cin.ignore();
        cout<<"Ho va ten:";
        getline(cin, sv[i].ho_ten);
        cout<<"Lop:";
        getline(cin, sv[i].lop);
        cout<<"Diem gpa:";
        cin>>sv[i].diem_gpa;
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Thong tin sinh vien thu "<<i<<endl;
        display(sv[i]);
    }
}