#include<iostream>
using namespace std;
int main(){

    int x,y,result;
    int *px ,*py ,*pr;
    px=&x;
    py=&y;
    pr=&result;
    cin>>x>>y;
    *pr=*px+*py;
    cout<<"Result "<<result<<endl;
    cout<<"*pr "<<*pr<<endl;


    int a=5;
    int *pa=&a;
    double b=6;
    double *pb=&b;
    char c = 'a';
    char *pc = &c;
    float d = 4.5;
    float *pd = &d;



    cout<<"Size of int pointer : "<<sizeof(pa)<<endl;
    cout<<"Size of double pointer : "<<sizeof(pb)<<endl;
    cout<<"Size of char pointer : "<<sizeof(pc)<<endl;
    cout<<"Size of float pointer : "<<sizeof(pd)<<endl;



    return 0;
}