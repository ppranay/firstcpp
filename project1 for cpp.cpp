#include<iostream>
#include<windows.h>
using namespace std;
void showMenu()
{
	cout<<"*************************"<<endl;
	cout<<"*******Quiz App**********"<<endl;
	cout<<"*************************"<<endl;
	cout<<"1)New Quiz"<<endl;
	cout<<"2)highestScore"<<endl;
	cout<<"3) Exit\n\n";

}
int main(){


	string questions[5] =
	{
	   
	   "  1. Which of the following is a stringizing operator?"
	   " 2. Which of the following is the correct syntax of including a user defined header files in C++?"
	    "3. Which of the following is called address operator? "
	"4. Which function is used to read a single character from the console in C++?" 
	"5. Which function is used to write a single character to console in C++?"
	
	
	
	

	};
	
	string options[5]=
	{" 1) < >   2) #   3) %   4) ## "
	 "1) #include <userdefined.h> 2) #include <userdefined>  3) #include “userdefined” 4) #include [userdefined]"
	"1) *   2) &   3) _  4) %"
	"1) cin.get(ch)  2) getline(ch)  3) read(ch)  4) scanf(ch)"
	"1) cout.put(ch)  2) cout.putline(ch)   3) write(ch)   4) printf(ch)"
	};
	int ans[5]={1,2,3,4,5};
	string PlayerName="pranay";
	int highestScore=0;
	char ch='y';
	while(ch=='y')
	{	
		string currentPlayer;
		int currentResult=0;
		system("CLS");
		showMenu();
		int menu;
		cin>>menu;
		
		switch(menu)
		{
			case 1:system("color 74");
				system("CLS");
				cout<<"******************************"<<endl;
				cout<<"*******playing quiz******"<<endl;
				cout<<"******************************"<<endl;
				cout<<"Enter your name";
				cout<<"\n\n";
				cin>>currentPlayer;
				
				for(int i=0;i<5;i++)
				{
				int op;
				cout<<questions[i]<<endl;
				cout<<options[i]<<endl<<endl;	
				cout<<"enter option";
				cin>>op;
				if(op==ans[i])
				{
				currentResult++;
				
					if(currentResult>highestScore)	
					{
						highestScore=currentResult;
						PlayerName=currentPlayer;
						
					}
				}
				
			}
			break;
			
			case 2:
				system("color 46");
				system("CLS");
				cout<<"****************************"<<endl;
				cout<<"******highestScore  ******"<<endl;
				cout<<"*****************************"<<endl;
				cout<<"\n\n\n highestScore is "<<highestScore<<"by"<<PlayerName<<endl;
			break;
			
			case 3:
				cout<<"thank you for using quiz app";
				exit(0);
			break;
			
			default:
			cout<<"something went wrong";		
		}
		
  

	cout<<"Do you want to continue y/n?";
	cin>>ch;
	
   }
}


	
	


