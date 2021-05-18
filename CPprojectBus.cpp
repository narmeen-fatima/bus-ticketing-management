#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <conio.h>
#include <iomanip>
#include <fstream>

///////////////////////////// FUNCTIONS DECLARATION //////////////////////////////////////
void mainmenu ();
void buses ();
void summary ();
void quit ();
void aboutus ();
void opening();
void seating();
/////////////////////////////////// MAIN PROGRAM ////////////////////////////////////////
using namespace std;
int main ()
{	

    system("color 8E");
	int MainMenuChoice;
    opening();
	mainmenu();
	cin>>MainMenuChoice;
	if(MainMenuChoice==1)
	{
	buses();		
	}
	else if(MainMenuChoice==2)
	{
	summary();
    }
	else if (MainMenuChoice==3)
	{
	quit();
    }
	else if(MainMenuChoice==4)
	{
	aboutus();
    }
	return 0;
} //Main program ends

/////////////////////////// FUNCTIONS DEFINITIONS ///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

void mainmenu()
{
    system("color 8E");

	cout<<setw(54)<<setfill('*')<<"WELCOME TO KARAKORAM TRAVELS "<<"********************"<<endl<<endl;
	cout<<setw(75)<<setfill('=')<<"\n";
	cout<<"=    "<<setw(35)<<setfill(' ')<<"MAIN MENU"<<setw(34)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<"1-Available BUSES"<<setw(52)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<"2-Summary"<<setw(60)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<"3-Quit"<<setw(63)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<"4-About Us"<<setw(59)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"=    "<<setw(69)<<"="<<endl;
	cout<<"="<<setw(74)<<setfill('=')<<"\n";
	cout<<"enter your choice : ";

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void buses()
{
	
	int MainMenuChoice=0, ChoiceForBuses=0, ChoiceForProceedFurther=0;
	string fname;
	string lname;
	string address;
	string PassportNumber;
	string CNIC;
	int ticket=0;
	char gender;
		system("cls");
		system("color 8E");
		cout<<setw(43)<<setfill(' ')<<"                                           AVAILABLE BUSES "<<endl<<endl;
		cout<<"  No.\tKT-BUS no.\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate"<<endl<<endl;
		cout<<"  1.\tKT-110\t\tKarachi\t\tLahore\t\t21:00 \t\t5500/- PKR\t21-06-2018"<<endl;
		cout<<"  2.\tKT-220\t\tLahore\t\tKarachi\t\t18:00 \t\t4000/- PKR\t23-06-2018"<<endl;
		cout<<"  3.\tKT-330\t\tIslamabad\tMultan\t\t14:00 \t\t3500/- PKR\t24-06-2018"<<endl;
		cout<<"  4.\tKT-440\t\tMultan\t\tFaislabad\t16:00 \t\t5700/- PKR\t27-06-2018"<<endl;
		cout<<"  5.\tKT-550\t\tFaislabad\tMurree\t\t23:00 \t\t4600/- PKR\t28-06-2018"<<endl;
		
		cout<<"  Enter your choice OR Press 0 to return to Main Menu: ";
		cin>>ChoiceForBuses;
		cout<<endl;
		system("color 8E");
		ofstream outFile("data.txt");//filing
		if (ChoiceForBuses==1)
		{
			
			system("CLS");
			cout<<endl<<setw(20)<<" "<<setfill(' ')<<setw(50)<<setfill('*')<<"*" <<endl;
            cout<<"                    *             Thank you for choosing..           *"<<endl; 
			cout<<"                    *               Departure: Karachi               *"<<endl;
			cout<<"                    *                 Arrival: Lahore                *"<<endl; 
			cout<<"                    *                    Time: 21:00                 *";
			cout<<"\n                    *                                                *";
			cout<<endl<<"                    *                                                *"<<endl;
			cout<<"                    *  Would you like to proceed further?            *"<<endl;
			cout<<"                    *  Press 1 to proceed further!                   *"<<endl;
			cout<<"                    *  Press 2 to go back!                           *"<<endl; 
			cout<<"                    *                                                *"<<endl<<"                    *";
            cout<<setw(49)<<setfill('*')<<"*" <<endl;
			cout<<"                      enter your choice : ";
			cin>>ChoiceForProceedFurther;
			if (ChoiceForProceedFurther==1)
			{
				
				cout<<"                      Enter your First Name:\t"; cin.ignore();
			    getline(cin,fname);
			    outFile<<fname<<endl;
			    cout<<"                      Enter your Last Name:\t";cin.ignore();
			    getline(cin,lname);
			    outFile<<lname<<endl;
			    cout<<"                      Enter your gender (M/F):\t";
			    cin>>gender;
			    outFile<<gender<<endl;
			    cout<<"                      Enter your Passport no:\t";
			    cin>>PassportNumber;
			    outFile<<PassportNumber<<endl;
			    cout<<"                      Enter your address:\t";
			    cin>>address;
			    outFile<<address<<endl;
			    cout<<"                      Enter your CNIC number:\t";
			    cin>>CNIC;
			    outFile<<CNIC<<endl;
			    cout<<"                      How many tickets you want to book:\t";
			    cin>>ticket;
			    outFile<<ticket<<endl;
			    system("CLS");
			    cout<<"                          SUMMARY"<<endl;
			    cout<<"_____________________________________________________________"<<endl;
			    cout<<"                                                     "<<endl;
		    	cout<<"                   BUS & JOURNEY INFORMATION                "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" YOUR RESERVATION NUMBER                     :  "<<rand()%1000+0<<endl;
		    	cout<<" YOUR KT-BUS NUMBER                          : 210"<<endl;
		    	cout<<" DEPARTURE                                   : Karachi"<<endl;
		    	cout<<" ARRIVAL                                     : Lahore"<<endl;
		    	cout<<" DATE OF YOUR DEPARTURE                      : 21-05-2017"<<endl;
		    	cout<<" TIME OF YOUR DEPARTURE                      : 21:00"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"                                                     "<<endl;
		    	cout<<"                 PASSENGER INFORMATION               "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n YOUR NAME IS                             : "<<fname.append(lname)<<endl;Sleep(300);
		    	cout<<" YOUR GENDER IS                           :";
				if(gender=='M' || gender=='m') 
				cout<<" Male"<<endl; 
				else if(gender=='F' || gender=='f') 
				cout<<" Female"<<endl;
		    	cout<<" YOUR ADDRESS IS                          : "<<address<<endl;Sleep(300);
		    	cout<<" YOUR PASSPORT NUMBER IS                  : "<<PassportNumber<<endl;Sleep(300);
		    	cout<<" YOUR CNIC IS                             : "<<CNIC<<endl;Sleep(300);
			    cout<<" TICKETS YOU HAVE RESERVED                : "<<ticket<<endl;Sleep(300);
			    cout<<" YOUR TOTAL PRICE IS                      : "<<ticket*5500<<endl;Sleep(300);
			    cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n"; 
		    	cout<<" WE HOPE YOU WILL ENJOY YOUR JOURNEY WITH KARAKORAM TRAVELS"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
	            cout<<"Press M to go back menu : ";
	            	outFile.close();
	            char m;
	            int MainMenuChoice;
	            cin>>m;	
	            if(m=='M' || m=='m')
	            {
	            	mainmenu();
	            	cin>>MainMenuChoice;
	            	if(MainMenuChoice==1)
	            	{
	            	buses();
            		}
	            	else if(MainMenuChoice==2)
	            	{
	            	summary();
                	}
	            	else if(MainMenuChoice==3)
	            	{
	            	quit();
	            	}
	            	else if (MainMenuChoice==4)
	            	{
	            		aboutus();
	            	}
				}
			}
		    else if (ChoiceForProceedFurther==2)
			{
				buses();
			}
        }
		else if (ChoiceForBuses==2)
		{
			system("CLS");
			cout<<endl<<setw(20)<<" "<<setfill(' ')<<setw(50)<<setfill('*')<<"*" <<endl;
			cout<<"                    *             Thank you for choosing..           *"<<endl; 
			cout<<"                    *               Departure: Lahore                *"<<endl;
			cout<<"                    *                 Arrival: Karachi               *"<<endl; 
			cout<<"                    *                    Time: 18:00                 *";
			cout<<"\n                    *                                                *";
			cout<<endl<<"                    *                                                *"<<endl;
			cout<<"                    *  Would you like to proceed further?            *"<<endl;
			cout<<"                    *  Press 1 to proceed further!                   *"<<endl;
			cout<<"                    *  Press 2 to go back!                           *"<<endl; 
			cout<<"                    *                                                *"<<endl<<"                    *";
            cout<<setw(49)<<setfill('*')<<"*" <<endl;
			cout<<"                      enter your choice : ";
			cin>>ChoiceForProceedFurther;
			if (ChoiceForProceedFurther==1)
			{
				cout<<"                      Enter your First Name:\t";cin.ignore();
			    getline(cin,fname);
			    outFile<<fname<<endl;
			    cout<<"                      Enter your Last Name:\t";cin.ignore();
			    getline(cin,lname);
			    outFile<<lname<<endl;
			    cout<<"                      Enter your gender (M/F):\t";
			    cin>>gender;
			    outFile<<gender<<endl;
			    cout<<"                      Enter your Passport no:\t";
			    cin>>PassportNumber;
			    outFile<<PassportNumber<<endl;
			    cout<<"                      Enter your address:\t";
			    cin>>address;
			    outFile<<address<<endl;
			    cout<<"                      Enter your CNIC number:\t";
			    cin>>CNIC;
			    outFile<<CNIC<<endl;
			    cout<<"                      How many tickets you want to book:\t";
			    cin>>ticket;
			    outFile<<ticket<<endl;
			    
			    system("CLS");
			    cout<<"                          SUMMARY"<<endl;
			    cout<<"_____________________________________________________________"<<endl;
			    cout<<"                                                     "<<endl;
		    	cout<<"                   BUS & JOURNEY INFORMATION                "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" YOUR RESERVATION NUMBER                     : "<<rand()%1000+0<<endl;
		    	cout<<" YOUR KT-BUS NUMBER                          : 220"<<endl;
		    	cout<<" DEPARTURE                                   : Lahore"<<endl;
		    	cout<<" ARRIVAL                                     : Karachi"<<endl;
		    	cout<<" DATE OF YOUR DEPARTURE                      : 23-05-2017"<<endl;
		    	cout<<" TIME OF YOUR DEPARTURE                      : 18:00"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"                                                     "<<endl;
		    	cout<<"                 PASSENGER INFORMATION               "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n YOUR NAME IS                             : "<<fname.append(lname)<<endl;Sleep(300);
		    	cout<<" YOUR GENDER IS                           :";
				if(gender=='M' || gender=='m') 
				cout<<" Male"<<endl; 
				else if(gender=='F' || gender=='f') 
				cout<<" Female"<<endl;
		    	cout<<" YOUR ADDRESS IS                          : "<<address<<endl;Sleep(300);
		    	cout<<" YOUR PASSPORT NUMBER IS                  : "<<PassportNumber<<endl;Sleep(300);
		    	cout<<" YOUR CNIC IS                             : "<<CNIC<<endl;Sleep(300);
			    cout<<" TICKETS YOU HAVE RESERVED                : "<<ticket<<endl;Sleep(300);
			    cout<<" YOUR TOTAL PRICE IS                      : "<<ticket*4000<<endl;Sleep(300);
			    cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n"; 
		    	cout<<" WE HOPE YOU WILL ENJOY YOUR JOURNEY WITH KARAKORAM TRAVELS"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"Press M to go back menu : ";
		    	char m;
		    	int MainMenuChoice;
		    	cin>>m;	
		    	if(m=='M' || m=='m')
		    	{
		    	mainmenu();
		    	cin>>MainMenuChoice;
		    	if(MainMenuChoice==1)
		    	{
		    	buses();
		    	}
		    	else if(MainMenuChoice==2)
			    {
			    summary();
  		     	}
		    	else if(MainMenuChoice==3)
		    	{
		    	quit();
		    	}
		    	else if (MainMenuChoice==4)
		    	{
			    aboutus();
		    	}
            	}
           }
	       else if (ChoiceForProceedFurther==2)
			{	
			buses();
			}
		}
		else if (ChoiceForBuses==3)
		{
			system("CLS");
			cout<<endl<<setw(20)<<" "<<setfill(' ')<<setw(50)<<setfill('*')<<"*" <<endl;
			cout<<"                    *             Thank you for choosing..           *"<<endl; 
			cout<<"                    *               Departure: ISlamabad             *"<<endl;
			cout<<"                    *                 Arrival: Multan                *"<<endl; 
			cout<<"                    *                    Time: 04:00                 *";
			cout<<"\n                    *                                                *";
			cout<<endl<<"                    *                                                *"<<endl;
			cout<<"                    *  Would you like to proceed further?            *"<<endl;
			cout<<"                    *  Press 1 to proceed further!                   *"<<endl;
			cout<<"                    *  Press 2 to go back!                           *"<<endl; 
			cout<<"                    *                                                *"<<endl<<"                    *";
            cout<<setw(49)<<setfill('*')<<"*" <<endl;
			cout<<"                      enter your choice : ";
			cin>>ChoiceForProceedFurther;
			if (ChoiceForProceedFurther==1)
			{
				cout<<"                      Enter your First Name:\t";cin.ignore();
			    getline(cin,fname);
			    outFile<<fname<<endl;
			    cout<<"                      Enter your Last Name:\t";cin.ignore();
			    getline(cin,lname);
			    outFile<<lname<<endl;
			    cout<<"                      Enter your gender (M/F):\t";
			    cin>>gender;
			    outFile<<gender<<endl;
			    cout<<"                      Enter your Passport no:\t";
			    cin>>PassportNumber;
			    outFile<<PassportNumber<<endl;
			    cout<<"                      Enter your address:\t";
			    cin>>address;
			    outFile<<address<<endl;
			    cout<<"                      Enter your CNIC number:\t";
			    cin>>CNIC;
			    outFile<<CNIC<<endl;
			    cout<<"                      How many tickets you want to book:\t";
			    cin>>ticket;
			    outFile<<ticket<<endl;
			    
			    
			    system("CLS");
			    cout<<"                          SUMMARY"<<endl;
			    cout<<"_____________________________________________________________"<<endl;
			    cout<<"                                                     "<<endl;
		    	cout<<"                   BUS & JOURNEY INFORMATION                "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" YOUR RESERVATION NUMBER                     : "<<rand()%1000+0<<endl;
		    	cout<<" YOUR KT-BUS NUMBER                          : 230"<<endl;
		    	cout<<" DEPARTURE                                   : Islamabad"<<endl;
		    	cout<<" ARRIVAL                                     : Multan"<<endl;
		    	cout<<" DATE OF YOUR DEPARTURE                      : 24-05-2017"<<endl;
		    	cout<<" TIME OF YOUR DEPARTURE                      : 14:00"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"                                                     "<<endl;
		    	cout<<"                 PASSENGER INFORMATION               "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n YOUR NAME IS                             : "<<fname.append(lname)<<endl;Sleep(300);
		    	cout<<" YOUR GENDER IS                           :";
				if(gender=='M' || gender=='m') 
				cout<<" Male"<<endl; 
				else if(gender=='F' || gender=='f') 
				cout<<" Female"<<endl;
		    	cout<<" YOUR ADDRESS IS                          : "<<address<<endl;Sleep(300);
		    	cout<<" YOUR PASSPORT NUMBER IS                  : "<<PassportNumber<<endl;Sleep(300);
		    	cout<<" YOUR CNIC IS                             : "<<CNIC<<endl;Sleep(300);
			    cout<<" TICKETS YOU HAVE RESERVED                : "<<ticket<<endl;Sleep(300);
			    cout<<" YOUR TOTAL PRICE IS                      : "<<ticket*3500<<endl;Sleep(300);
			    cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n"; 
		    	cout<<" WE HOPE YOU WILL ENJOY YOUR JOURNEY WITH KARAKORAM TRAVLES"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"Press M to go back menu : ";
		    	char m;
		    	int MainMenuChoice;
		    	cin>>m;	
		    	if(m=='M' || m=='m')
		    	{
		    	mainmenu();
		    	cin>>MainMenuChoice;
		    	if(MainMenuChoice==1)
		    	{
		    	buses();
		    	}
		    	else if(MainMenuChoice==2)
		    	{
		    	summary();
  		        }
		    	else if(MainMenuChoice==3)
		    	{
		    	quit();
		    	}
		    	else if (MainMenuChoice==4)
		    	{
		    	aboutus();
		    	}
		    	}
            }
	        else if (ChoiceForProceedFurther==2)
			{
			buses();
			}	
		}
        else if (ChoiceForBuses==4)
		{
			system("CLS");
			cout<<endl<<setw(20)<<" "<<setfill(' ')<<setw(50)<<setfill('*')<<"*" <<endl;
			cout<<"                    *             Thank you for choosing..           *"<<endl; 
			cout<<"                    *               Departure: Multan                *"<<endl;
			cout<<"                    *                 Arrival: Faisalabad            *"<<endl; 
			cout<<"                    *                    Time: 06:00                 *";
			cout<<"\n                    *                                                *";
			cout<<endl<<"                    *                                                *"<<endl;
			cout<<"                    *  Would you like to proceed further?            *"<<endl;
			cout<<"                    *  Press 1 to proceed further!                   *"<<endl;
			cout<<"                    *  Press 2 to go back!                           *"<<endl; 
			cout<<"                    *                                                *"<<endl<<"                    *";
            cout<<setw(49)<<setfill('*')<<"*" <<endl;
			cout<<"                      enter your choice : ";
			cin>>ChoiceForProceedFurther;
			if (ChoiceForProceedFurther==1)
			{
				cout<<"                      Enter your First Name:\t";cin.ignore();
			    getline(cin,fname);
			    outFile<<fname<<endl;
			    cout<<"                      Enter your Last Name:\t";cin.ignore();
			    getline(cin,lname);
			    outFile<<lname<<endl;
			    cout<<"                      Enter your gender (M/F):\t";
			    cin>>gender;
			    outFile<<gender<<endl;
			    cout<<"                      Enter your Passport no:\t";
			    cin>>PassportNumber;
			    outFile<<PassportNumber<<endl;
			    cout<<"                      Enter your address:\t";
			    cin>>address;
			    outFile<<address<<endl;
			    cout<<"                      Enter your CNIC number:\t";
			    cin>>CNIC;
			    outFile<<CNIC<<endl;
			    cout<<"                      How many tickets you want to book:\t";
			    cin>>ticket;
			    outFile<<ticket<<endl;
			    system("CLS");
			    cout<<"                          SUMMARY"<<endl;
			    cout<<"_____________________________________________________________"<<endl;
			    cout<<"                                                     "<<endl;
		    	cout<<"                   BUS & JOURNEY INFORMATION                "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" YOUR RESERVATION NUMBER                     : "<<rand()%1000+0<<endl;
		    	cout<<" YOUR BK-BUS NUMBER                          : 240"<<endl;
		    	cout<<" DEPARTURE                                   : Multan"<<endl;
		    	cout<<" ARRIVAL                                     : Faisalabad"<<endl;
		    	cout<<" DATE OF YOUR DEPARTURE                      : 27-05-2017"<<endl;
		    	cout<<" TIME OF YOUR DEPARTURE                      : 16:00"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"                                                     "<<endl;
		    	cout<<"                 PASSENGER INFORMATION               "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n YOUR NAME IS                             : "<<fname.append(lname)<<endl;Sleep(300);
		    	cout<<" YOUR GENDER IS                           :";
				if(gender=='M' || gender=='m') 
				cout<<" Male"<<endl; 
				else if(gender=='F' || gender=='f') 
				cout<<" Female"<<endl;
		    	cout<<" YOUR ADDRESS IS                          : "<<address<<endl;Sleep(300);
		    	cout<<" YOUR PASSPORT NUMBER IS                  : "<<PassportNumber<<endl;Sleep(300);
		    	cout<<" YOUR CNIC IS                             : "<<CNIC<<endl;Sleep(300);
			    cout<<" TICKETS YOU HAVE RESERVED                : "<<ticket<<endl;Sleep(300);
			    cout<<" YOUR TOTAL PRICE IS                      : "<<ticket*5700<<endl;Sleep(300);
			    cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n"; 
		    	cout<<" WE HOPE YOU WILL ENJOY YOUR JOURNEY WITH KARAKORAM TRAVELS"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"Press M to go back menu : ";
		    	char m;
		    	int MainMenuChoice;
			    cin>>m;	
			    if(m=='M' || m=='m')
		    	{
		    	mainmenu();
		    	cin>>MainMenuChoice;
		    	if(MainMenuChoice==1)
		    	{
		    	buses();
		    	}
		    	else if(MainMenuChoice==2)
		    	{
		    	summary();
   		    	}
			    else if(MainMenuChoice==3)
		    	{
			    quit();
			    }
			    else if (MainMenuChoice==4)
			    {
				aboutus();
			    }
                }	
            }
	        else if (ChoiceForProceedFurther==2)
			{
				
			buses();
			}
		}
        else if (ChoiceForBuses==5)
		{
			
			system("CLS");
			cout<<endl<<setw(20)<<" "<<setfill(' ')<<setw(50)<<setfill('*')<<"*" <<endl;
			cout<<"                    *             Thank you for choosing..           *"<<endl; 
			cout<<"                    *               Departure: Faisalabad            *"<<endl;
			cout<<"                    *                 Arrival: Murree                *"<<endl; 
			cout<<"                    *                    Time: 23:00                 *";
			cout<<"\n                    *                                                *";
			cout<<endl<<"                    *                                                *"<<endl;
			cout<<"                    *  Would you like to proceed further?            *"<<endl;
			cout<<"                    *  Press 1 to proceed further!                   *"<<endl;
			cout<<"                    *  Press 2 to go back!                           *"<<endl; 
			cout<<"                    *                                                *"<<endl<<"                    *";
            cout<<setw(49)<<setfill('*')<<"*" <<endl;
			cout<<"                      enter your choice : ";
			cin>>ChoiceForProceedFurther;
			if (ChoiceForProceedFurther==1)
			{
				cout<<"                      Enter your First Name:\t";cin.ignore();
			    getline(cin,fname);
			    outFile<<fname<<endl;
			    cout<<"                      Enter your Last Name:\t";cin.ignore();
			    getline(cin,lname);
			    outFile<<lname<<endl;
			    cout<<"                      Enter your gender (M/F):\t";
			    cin>>gender;
			    outFile<<gender<<endl;
			    cout<<"                      Enter your Passport no:\t";
			    cin>>PassportNumber;
			    outFile<<PassportNumber<<endl;
			    cout<<"                      Enter your address:\t";
			    cin>>address;
			    outFile<<address<<endl;
			    cout<<"                      Enter your CNIC number:\t";
			    cin>>CNIC;
			    outFile<<CNIC<<endl;
			    cout<<"                      How many tickets you want to book:\t";
			    cin>>ticket;
			    outFile<<ticket<<endl;
			    
			    system("CLS");
			    cout<<"                          SUMMARY"<<endl;
			    cout<<"_____________________________________________________________"<<endl;
			    cout<<"                                                     "<<endl;
		    	cout<<"                   BUS & JOURNEY INFORMATION                "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" YOUR RESERVATION NUMBER                     : "<<rand()%1000+0<<endl;
		    	cout<<" YOUR KT-BUS NUMBER                          : 250"<<endl;
		    	cout<<" DEPARTURE                                   : Faisalabad"<<endl;
		    	cout<<" ARRIVAL                                     : Murree"<<endl;
		    	cout<<" DATE OF YOUR DEPARTURE                      : 28-05-2017"<<endl;
		    	cout<<" TIME OF YOUR DEPARTURE                      : 23:00"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<"                                                     "<<endl;
		    	cout<<"                 PASSENGER INFORMATION               "<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n YOUR NAME IS                             : "<<fname.append(lname)<<endl;Sleep(300);
		    	cout<<" YOUR GENDER IS                           :";
				if(gender=='M' || gender=='m') 
				cout<<" Male"<<endl; 
				else if(gender=='F' || gender=='f') 
				cout<<" Female"<<endl;
		    	cout<<" YOUR ADDRESS IS                          : "<<address<<endl;Sleep(300);
		    	cout<<" YOUR PASSPORT NUMBER IS                  : "<<PassportNumber<<endl;Sleep(300);
		    	cout<<" YOUR CNIC IS                             : "<<CNIC<<endl;Sleep(300);
			    cout<<" TICKETS YOU HAVE RESERVED                : "<<ticket<<endl;Sleep(300);
			    cout<<" YOUR TOTAL PRICE IS                      : "<<ticket*4600<<endl;Sleep(300);
			    cout<<"_____________________________________________________________"<<endl;
		    	cout<<" \n"; 
		    	cout<<" WE HOPE YOU WILL ENJOY YOUR JOURNEY WITH KARAKORAM TRAVELS"<<endl;
		    	cout<<"_____________________________________________________________"<<endl;
				cout<<"Press M to go back menu : ";
				char m;
				int MainMenuChoice;
				cin>>m;	
				if(m=='M' || m=='m')
				{
				mainmenu();
				cin>>MainMenuChoice;
				if(MainMenuChoice==1)
				{
				buses();
				}
				else if(MainMenuChoice==2)
				{
				summary();
  			    }
				else if(MainMenuChoice==3)
				{
				quit();
				}
				else if (MainMenuChoice==4)
				{
				aboutus();
				}
                }
            }
	        else if (ChoiceForProceedFurther==2)
			{
				buses();
			}
        }
        
	    else if (ChoiceForBuses==0)
	    {
	    	mainmenu();
	        cin>>MainMenuChoice;
	        if(MainMenuChoice==1)
        	{
        		buses();
        	}
        	if(MainMenuChoice==2)
        	{
        	summary();
            }
        	if(MainMenuChoice==3)
        	{
        	quit();
            }
        	if (MainMenuChoice==4)
        	{
	        	aboutus();
            }
		}
		else 
		{
			cout << "Enter Right Choice please !"<< endl;
			Sleep (3000);
			buses();
		}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void summary()
{
	system("CLS");
	cout<<"                          SUMMARY"<<endl;
	cout<<"_____________________________________________________"<<endl;
	cout<<" YOUR KT-BUS NUMBER                          : NONE"<<endl;
	cout<<" DATE OF YOUR DEPARTURE                      : NONE"<<endl;
	cout<<" TIME OF YOUR DEPARTURE                      : NONE"<<endl;
	cout<<"_____________________________________________________"<<endl;
	cout<<" \n YOUR NAME IS                             : NONE"<<endl;
	Sleep(300);
	cout<<" YOUR PASSPORT NUMBER IS                  : NONE"<<endl;Sleep(300);
	cout<<" YOUR CNIC IS                             : NONE"<<endl;Sleep(300);
	cout<<" TICKETS YOU HAVE RESERVED                : NONE"<<endl;Sleep(300);
	cout<<" YOUR TOTAL PRICE IS                      : NONE"<<endl;Sleep(300);
	cout<<"_____________________________________________________"<<endl;
	cout<<" \n";
	cout<<" You haven't booked anything yet!"<<endl;
	cout<<"_____________________________________________________"<<endl;
	cout<<" Press M to go back menu : ";
	char m;
	int MainMenuChoice;
	cin>>m;	
	if(m=='M' || m=='m')
	{
	mainmenu();
	cin>>MainMenuChoice;
	if(MainMenuChoice==1)
	{
		buses();
	}
	if(MainMenuChoice==2)
	{
	summary();
    }
	if(MainMenuChoice==3)
	{
	quit();
	}
	if (MainMenuChoice==4)
	{
		aboutus();
	}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void quit()
{
	system("cls");
	cout<<endl<<endl<<endl;
	cout<<"              *********************************************************"<<endl;
	cout<<"              *                                                       *"<<endl;
	cout<<"              *                                                       *"<<endl;		
	cout<<"              *   Thank you for visiting our site, have a good time   *"<<endl;
	cout<<"              *                                                       *"<<endl;
	cout<<"              *                                                       *"<<endl;				
	cout<<"              *********************************************************"<<endl<<endl;
}
void aboutus()
{
    system("CLS");
    cout<<endl<<endl<<endl;
    cout<<"               __________________________________________________________ "<<endl;
    cout<<"              |                   ABOUT OUR ORGANZATION                  |"<<endl;	
    cout<<"              |                                                          | "<<endl;	
    cout<<"              |                                                          | "<<endl;	
    cout<<"              |                     KARAKORAM TRAVELS                    | "<<endl;  Sleep(100);                       
    cout<<"              |            IS AN ORGANIZATION THAT PROMOTS               | "<<endl;  Sleep(100); 
    cout<<"              |       travelling and works to facilitate the people      | "<<endl;  Sleep(100); 
    cout<<"              |         of our country.  Our Organization has its        | "<<endl;  Sleep(100); 
    cout<<"              |     Offices in almost all the big cities of Country      | "<<endl;  Sleep(100); 
    cout<<"              |        KARAKORAM TRAVELS started working in year         | "<<endl;  Sleep(100); 
    cout<<"              |      2018, is working efficienty for the service         | "<<endl;  Sleep(100); 
    cout<<"              |                 of our beautiful people.                 | "<<endl;  Sleep(100); 
    cout<<"              |                                                          | "<<endl;  Sleep(100); 
    cout<<"              |             KARAKKORAM TRAVELS has made its name         | "<<endl;  Sleep(100); 
    cout<<"              |    among the leading travelling services in short time   | "<<endl;  Sleep(100); 
    cout<<"              |       Our Buses Go to Karachi, Hyerdabad, islamabad,     | "<<endl;  Sleep(100); 
    cout<<"              |          Lahore, Peshawar, Quetta and other cities       |"<<endl;  Sleep(100); 
    cout<<"              |        Our Service Includes Comfortable enviornment,     | "<<endl;  Sleep(100); 
    cout<<"              |       one time meal and very good non-stop journey       | "<<endl;  Sleep(100); 
    cout<<"              |      Our organization will always be there for the       | "<<endl;  Sleep(100); 
    cout<<"              |        service of our people . We Hope You Will          | "<<endl;  Sleep(100); 
    cout<<"              |      Like to Travel with us becuase we work for you      | "<<endl;  Sleep(100); 
    cout<<"              |                                                          | "<<endl;	 Sleep(100); 
    cout<<"              |                                                          | "<<endl;  Sleep(100); 
    cout<<"              |__________________________________________________________|"<<endl;
    cout<<"              Press M to go back menu : ";
	char m;
	int MainMenuChoice;
	cin>>m;	
	if(m=='M' || m=='m')
	{
	mainmenu();
	cin>>MainMenuChoice;
	if(MainMenuChoice==1)
	{
		buses();
	}
	if(MainMenuChoice==2)
	{
	summary();
    }
	if(MainMenuChoice==3)
	{
	quit();
	}
	if (MainMenuChoice==4)
	{
		aboutus();
	}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void opening()
{
	Sleep(1000);
	cout<<"                      KARAKORAM BUS TRANSPORTATION AND RESERVATION SYSTEM"<<endl;
	Sleep(1000);
	cout<<"                                Presented by "<<endl;
	Sleep(1000);
	cout<<"                         MARRIUM FATIMA - 136"<<endl;
	Sleep(500);
	cout<<"                         MOHID AHMED - 038"<<endl;
	Sleep(500);
	cout<<"                         NARMEEEN FATIMA - 035"<<endl;
	Sleep(500);
	cout <<"                         SYED ZUNAIR - 090 " << endl;
	Sleep(1000);
	system("cls");
}
  
  
  
void seating()
{
	cout << "                     Bus has total 32 seats          "<< endl;
	cout << "      |       ================================     | "<< endl;
	cout << "      |                                            | "<< endl;
	cout << "      |     = 29 =   = 30 =    = 31 =   = 32 =     |"<< endl;
	cout << "      |     = 28 =   = 27 =    = 26 =   = 25 =     |"<< endl;
	cout << "      |     = 21 =   = 22 =    = 23 =   = 24 =     |"<< endl;
	cout << "      |     = 20 =   = 19 =    = 18 =   = 17 =     |"<< endl;
	cout << "      |     = 13 =   = 14 =    = 15 =   = 16 =     |"<< endl;
	cout << "      |     = 12 =   = 11 =    =  10 =   = 9 =     |"<< endl;
	cout << "      |     =  5 =   = 6  =    = 7  =   = 8  =     |"<< endl;
	cout << "      |     =  4 =   = 3  =    =  2 =   =  1 =     |"<< endl;

}
