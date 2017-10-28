#include<iostream>

using namespace std;

           // DECLARATION OF FUNCTIONS
void merge(int a[10],int low,int high);
void mergesort(int a[10],int low,int mid,int high);


int b[10];

        //EXECUTION WILL START FROM HERE
int main(){

int arr[10],i,j,sizeArray;

 cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY"<<endl;
  cin>>noOfElement;

 cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
 for (i=0; i<noOfElement; i++){
   cin>>arr[i];
   }

        // CALLING MERGEFUNCTION 
merge(arr,1,noOfElement);

 cout<<"SORTED ARRAY"<<endl;
  for (i=1;i<=noOfElement;i++){
    cout<<a[i]<<" "; 
    }

return 0;
}


              // DEFINATION OF MERGESORT FUNCTION
void merge (int arr[10],int low,int high)
{
 int mid;
 
  if(low<high){
     mid=(low+high)/2; 
     merge(arr,low,mid);
     merge(arr,(mid+1),high);
     mergesort(arr,low,mid,high);
   }
 
return;
}
 
               //SORTING OCCURS HERE 
void mergesort(int arr[],int low,int mid,int high)
{

int i,j,k;
i=low;
k=low;
j=mid+1;
while ((i<=mid)&&(j<=high)){
 
    if (a[i]<=a[j]) {
       b[k]=a[i];
       k++;
       i++;
       }
    
    else{
       b[k]=a[j];
       k++;
       j++;
       }
 
}

while (i <= mid){

 b[k] = a[i];
 k++;
 i++;
}

 while (j <= high){
  
   b[k]=a[j];
   k++;
   j++;
  }

 for (i=low;i<=high;i++){
      a[i]=b[i];
       }

return ;
}
