 #include<iostream>
using namespace std;
int main(){
  int digits;
  cout<<"\n Enter your digit for sequnce :";
  cin>>digits;

  int mul=1;
   int temp=digits;
   int im=0;
   while(temp>0){
   //	digits++;
   im++;
  
   temp/=10;
   }
   for(int i=1;i<im;i++){
   	 mul*=10;
   }
   int final=digits;
   for(int j=0;j<im;j++ ){
         int first=final/mul;
       final =(final%mul)*10+first;

cout<<"\n Final result of the sequence :"<<final;
   }
cout<<endl;


    return 0;
}
