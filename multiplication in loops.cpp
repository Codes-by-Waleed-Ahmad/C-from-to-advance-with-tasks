  #include<iostream>
  using namespace std;
  int main()
  {
  	int num1,num2,result,boss;
  	cout<<"\n Enter your number for num1:";
  	cin>>num1;
  	num2=1;
  	while(num2<=10)
  	{
  		result=num1*num2;
  		
  		cout<<num1<<"="<<num2<<"="<<result<<endl;
  		
  		num2+=2;
  		boss=num1+num2;
		  	  }
		  	  cout<<"\n there sum is eq="<<boss<<endl;
  	
  	
  	
  	
  	
  	
  	
  	
  	return 0;
  }