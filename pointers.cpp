// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int maxi(int *arr,int n)
{
    int max = *arr;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)>max)
        {
            max = *(arr+i);
        }
    }
    return max;
}
void rev(char *s,int len)
{
    // reverse(s.begin(),s.end());
    char *a = s;
    char *end = s+len-1;
    while(a<end)
    {
        char temp = *a;
        *a = *end;
        *end = temp;
        a++;
        end--;
    }
}
int summ(int *arr,int n)
{
    int max = *arr;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
            sum+=*(arr+i);
        
    }
    return sum;
}
bool search(char *s,char target,int len)
{
    for(int i=0;i<len;i++)
    {
        if(*(s+i)==target)
        {
            return true;
        }
    }
    return false;
}
bool searchnum(int *s,int target,int len)
{
    for(int i=0;i<len;i++)
    {
        if(*(s+i)==target)
        {
            return true;
        }
    }
    return false;
}
int main() {
    // Write C++ code here
    
    // int a[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>a[i];
    // }
    // int n = sizeof(a)/sizeof(a[0]);
    // cout<<"The max element is "<<maxi(a,n);
    // cout<<"The sum element is "<<summ(a,n
    
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int target;
    cin>>target;
    int a = sizeof(s)/sizeof(s[0]) - 1;
   if(searchnum(s,target,a) == true)
   {
       cout<<"PRES";
   }
   else
   {
       cout<<"NOO";
   }
    // rev(s,n);
    // cout<<s;

    return 0;
}