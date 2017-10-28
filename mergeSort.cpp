#include<iostream.h>
#include<conio.h>
void merge(int a[10],int low,int high);
void mergesort(int a[10],int low,int mid,int high);
int b[10];
int main()
{
clrscr();
int a[10],i,j,n;
cout<<"ENTER THE SIZE OF ARRAY"<<endl;
cin>>n;
cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
for(i=1;i<=n;i++)
{
cin>>a[i];
}

merge(a,1,n);
cout<<"SORTED ARRAY"<<endl;
for(i=1;i<=n;i++)
{
cout<<a[i]<<" ";
}
getch();
return 0;
}
void merge (int a[10],int low,int high)
{
 int mid;
if(low<high)
{
mid=(low+high)/2;
merge(a,low,mid);
merge(a,(mid+1),high);
mergesort(a,low,mid,high);
}
return;
}
 void mergesort(int a[10],int low,int mid,int high)
{

int i,j,k;
i=low;
k=low;
j=mid+1;
while((i<=mid)&&(j<=high))
{
 if(a[i]<=a[j])
 {
 b[k]=a[i];
 k++;
 i++;
 }
 else
 {
 b[k]=a[j];
 k++;
 j++;
 }
}

while(i<=mid)
{
b[k]=a[i];
k++;
i++;
}
while(j<=high)
{
b[k]=a[j];
k++;
j++;
}
for(i=low;i<=high;i++)
{
a[i]=b[i];
}
return ;
}
