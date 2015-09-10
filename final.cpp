//Student name: Kenneth Mark Coffie
//Let's get to work
//Project name: Peak Health Spa
//date started: sometime in december
//date ended: not yet

#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>


// declaring functions
void password();
void fileread();
void filewrite();
void loading();
void prices();
void menu();
void help();
void deletedata();
void discount();
void about();
int option;
int selection;



using namespace std;


void loading()
{
	system("cls");
	cout<<"\nloading......\n";
	cout<<"press any key to continue. . .";
	cin.get();


}



int main(void)
{
	loading();
	string option;
	string a,b, c;

	system("cls");
	system("color f0");
	cout <<"\n\n\t\t";
	cout << "***************************************\n\t\t";
	cout << "***                                 ***\n\t\t";
	cout << "***   WELCOME      TO         THE   ***\n\t\t";
	cout << "***                                 ***\n\t\t";
	cout << "***     PEAK            HEALTH      ***\n\t\t";
	cout << "***                                 ***\n\t\t";
	cout << "***               SPA               ***\n\t\t";
	cout << "***                                 ***\n\t\t";
	cout << "***                                 ***\n\t\t";
	cout << "***************************************\n\t\t";


	cout<<"\n\n";
	cout<<"\nEnter your the password and username\n";
	
		
	password();
	
	
	
		

}






void password()
{
	
	string username="admin";
	string password="";


	char ch;

    system ("color f0");

	cout<<"\n\n";
	cout<<"Enter username:";
	cin>>username;

	if (username == "admin")
	{
		cout<<"\n\n";
		cout<<"You can now enter your password:\n";
		cin.get();

	}

	else
	{
		cout<<"Contact administrator for correct username:\n";
		cin.get();
		

	}

	cout<<"\nEnter password:";

	ch=_getch();

	while(ch!=13)// character is 13

	{
		password.push_back(ch);
		cout<<'*';
		ch=_getch();
	}

	if (password =="admin")
	{
		cout<<"\nAccess granted: You can now enter your system\n";
		 menu();
		cin.get();
	}

	else {
		cout<<"\nAccess aborted...\n";
		cin.get();
	}
}





// main menu function
void menu()
{
	system("color 5b");
	system("cls");

    cout << "\n\n\n\t\t   Main Menu\n";
	cout << " \n\n  Please Select from one of the options of below";
    cout << "\n______________________________________________________\n";

   
    cout<< "\n";
    cout << "1. Add a member\n\n";


    cout << "2. View activities and prices\n\n";
  
	cout << "3. View discounted prices \n\n";
	
    cout << "4. Read file/member details\n\n";


    cout << "5. Delete file\n\n";


    cout << "6. Help Menu\n\n";

  

    cout << "Please enter a number option:";
    cin >> option;
    cin.ignore();

    switch(option)
    {
		case 1:
		filewrite();
		break;

		case 2:
		prices();
		break;

		case 3:
		discount();
		break;

		case 4:
		fileread();
		break;

		case 5:
		deletedata();
		break;
		
		case 6:
		help();
		break;

		}
		   cin.get();


}


//adding member data
void filewrite()
{
	system("cls");
	system("color 3a");

    cout<< "\n\n\t\t" << " Please Enter The User Information Below \n\n";

        ofstream file_ptr; ("memInfo.txt"),ios::out;
        char filename [100];

        cout<< "\n\t\t" << "\nEnter the filename to be stored:";
        gets (filename);

        //file_ptr.open("info.dat",ios::out);
        file_ptr.open(filename,ios::out);
        //open file called info.dat for output

      	char name[30];
		char address[30];
		char postcode[30];
		char memType[30];
		char memSign[30];
		char telno[30];
		char startdate[30];
		char memNo[30];
		char enddate[30];

        int count;

        if(!file_ptr)                           //check file open ok
          cout<<"Error opening file info.dat";
        else
        {
            for(count=1;count<=1;count++)
            {
            	cout << "\n Please enter a name:";
				gets(name);
				file_ptr << count << " " << name << "\n";


				cout << "\n Please enter an address:";
				gets(address);
				file_ptr << count << " " << address << "\n";


				cout << "\n Please enter the postcode:";
				gets(postcode);
				file_ptr << count << " " << postcode << "\n";


				cout << "\n Please enter the telephone number:";
				gets(telno);
				file_ptr << count << " " << telno << "\n";


				cout << "\n Please enter the start date:";
				gets(startdate);
				file_ptr << count << " " << startdate << "\n";


				cout << "\n Please enter membership number:";
				gets(memNo);
				file_ptr << count << " " << memNo << "\n";


				cout << "\n Please enter membership type:";
				gets(memType);
				file_ptr << count << " " << memType << "\n";

				cout << "\n Please enter membership signature:";
				gets(memSign);
				file_ptr << count << " " << memSign<< "\n";


				cout << "\n Please enter end date:";
				gets(enddate);
				file_ptr << count << " " << enddate << "\n";
            }
        }
        file_ptr.close();                       //close file

        cout<<"\n\n";
        cout<<"Your information has been stored!\n ";

		cout<<"Do you want to go to back to the main menu?(y/n)";
		
		char option;
		cin>>option;
		switch(option)
				{
    			case 'y': menu();
    			break;
    			case 'n': loading();

    			break;
    			default: 
    			cout<<"Selection is not recognized";
			 }


}


//function for the prices
void prices()
{
	system("cls");
	system("Color 3A");
	
	char x=156;    //declaring Pound sign


	cout<<"\n\n\n\n\n\t\t";

	cout<<"     !ACTIVITY PRICES & MEMBERSHIP OPTIONS!\n\t\t" ;
	cout<<"    ........................................\n\n\n\t\t";
	cout<< "  Activity          Prices        \n\t\t";
	cout<<"_______________________________________________\n\n\t\t";

	cout<<"Sports Hall      "<<x <<" 30   per hour\n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"Sauna            "<<x <<" 3.00 per session\n\n\t\t";
	cout<<"______________________________________________\n\n\t\t";
	cout<<"Swimming Pool    "<<x <<" 3.50 per session \n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"Fitness Suite    "<<x <<" 4.50 per session (for non members)\n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"Fitness Class                                  \n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"     Beginner   "<<x <<"  5.50 per session \n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"     Advanced   "<<x <<"  7.00 per session \n\n\t\t";
	cout<<"_______________________________________________\n\n\n\t\t";
	cout<<"Badminton       "<<x <<"  10.00 per hour(max 4 ppl)\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"Five-A-Side Football "<<x <<" 35.00 per hour\n\n\t\t";
	cout<<"_______________________________________________\n\n\n\t\t";

	cout<<"MEMBERSHIP\n\t\t";
	cout<<"_______________________________________________\n\n\t";
	cout<<"              Bronze "<<x<<"  10.00 per month\n\n\t\t";
	cout<<"_______________________________________________ \n\n\t\t";
	cout<<"               Silver "<<x<<" 15.00 per month\n\n\t\t";
	cout<<"_______________________________________________\n\n\t\t";
	cout<<"              Gold   "<<x <<" 20.00 per month\n\n\t\t";
	cout<<"_______________________________________________\n\n\n\t\t";

	 cout<<"Do you want to go to back to the main?(y/n)\n\n\n";
	 
	 char option;
	 cin>>option;
	 switch(option)
		{
			case 'y': menu();
			break;
			case 'n': loading();

			break;
			default: cout<<"Selection is not recognized";
		 }


	cin.get();
	
	menu();

}


// file reading
	void fileread()
{
	system("Color 4c");
	system("cls");
	ifstream textfile;
	char filename[100];


		cout << "\nEnter the filename to be read:";
		gets(filename); //file name is filename

		textfile.open(filename, ios::in);

			char in_char;        //temp variable for file data


		if (!textfile)
			cout << "Error...file does not exist";


		else
		{
			while (!textfile.eof())      //while not end of file
			{

				textfile.get(in_char); //get the character from the file one at a time

				cout << in_char;        //display each character to the screen
			}


		}
		textfile.close();           //close file
		
		cout<<"Do you want to you return to the main menu?(y/n)";
		char option;
		cin>>option;
		switch(option)
		{
			case 'y': menu();
			break;
			
			
			case 'n': help();
			break;
			
			default: cout<<"Selection is not recognized";
			break;
		}

}


//data deletion function
void deletedata()

{
		system ("cls");
        ofstream file_ptr;	//declaring file pointer
        char file_name [100];

        system("color 5b");
		cout<< "\nEnter filename to be deleted: ";
		cin >> file_name;
		file_ptr.open(file_name,ios::trunc);  //Using Trunc
		
		if(!file_ptr)	//check file open ok
		cout<<"Error opening file info.dat";

	  else
	  {
	  	cout<<"\n\n";
	  	cout<<"Erasing File............\n\n";
	  	cout<<"Done\n\n";
		cin.ignore();
	    cin.get();

	  }
	  file_ptr.close();

		cout<<"\n\n";
	
		cout<<"Do you wish you return to the main menu?(y/n)";
	 	char option;
 		cin>>option;
 		switch(option)
		{
			case 'y':
			menu();
			break;
			
			case 'n':
			loading();
			break;
			
			
			default: 
			cout<<"Selection is not recognized";
		 }
		cin.get();
}



// helpscreen function
void help()
{
	system("Color 6b");
	system("cls");

    cout << "\n\n\t\t\t WELCOME TO THE HELP MENU \n\t\t";
    cout << "\n\t\t_____________________________________\n\n\t\t";

	cout << "\n\t\tChose a number and press enter\n\t\t";
    
	cout << "1. How to add a member\n\n\t\t";
    cout << "2. Activity and Prices overview\n\n\t\t";
    cout << "3. Discounts help menu\n\n\t\t";
    cout << "4. How to read stored data of a member\n\n\t\t";
    cout << "5. How to delete member data\n\n\t\t";
    cout << "6. Return to menu\n\n\t\t";
    cout << "7. About Program\n\n\t\t";

    cout << "Please enter a number option:";
    
	cin >> selection;
    cin.ignore();

    switch(selection)
    {


	case 1:

	system("cls");


	cout<<"\n\t\tHow to add a member\n\t\t";
	cout<<"---------------------------\n\n\t\t";
	
	cout<<"1.First enter file name\n\n\t\t";
	cout<<"2.Then enter customers name\n\n\t\t";
	cout<<"3.Followed by address\n\n\t\t";
	cout<<"4.After that enter your postcode, telephone, start date,\n\t\t membership number etc\n\n\t\t";

	cout<<"Once you are done, you can return to the main menu \n\n\t\t";
	cout<<"Do you wish you return to the main menu?(y/n)";
	
	char option;
	cin>>option;
	switch(option)
	{
		case 'y': menu();
		break;
		
		
		case 'n': help();
		break;
		
		default: cout<<"Selection is not recognized";
		break;

	 }


	case 2:
    system("cls");


	cout<<"\n      Prices and Acitivity help menu\n";
	cout<<"\n ________________________________________\n";
	cout<<"\n";

	cout<<"The prices and activities menu is where you view the prices for each activity\n\n";
	cout<<"After you are done with this, you can choose to view the discounted prices\n\n";
	cout<<"Do you want to return to the main menu?(y/n)\n\n";
	cout<<"Press y for the main menu and n to return back to the help menu:";
	
	char response;
	cin>>response;
	switch(response)
	{
	case 'y': menu();
	break;
	
	
	case 'n': help();
	break;
	
	
	default: cout<<"Selection is not recognized";
	break;

	}

	case 3:

	system("cls");
	cout<<"\n\n\t\t";
	cout<<"\n\t\t Discounts help menu \n\t\t";
	cout<<"_______________________________\n\t\t";
	cout<<"c\n\n";
	
	cout<<"The discounts screen display the available discounts for\n\t\teach membership\n\n\t\t";
	cout<<"If you are not content with this, you can press enter \n\t\t to view the select prices for each membership\n\n\t\t";
	cout<<"in their discounted prices\n\n\t\t";
	cout<<"Remember to keep pressing enter to to view each membership.\n\n\n\t\t";
	cout<<"Do you wish you return to the main menu?(y/n)";
	char choice;
	cin>>choice;
	switch(choice)
	{
		case 'y': menu();
		break;
		case 'n': help();
	
		break;
		default: cout<<"Selection is not recognized";
	 }
	break;
	

	case 4:

	system("cls");
	cout<<"\n\n\t\t";
	cout<<"\n  How to read member data\n\t\t";
	cout<<"_______________________________\n\t\t";

	
	cout<<"You can read a file by typing in the same name of file\n\n\t\t";
	cout<<"The program is case sensitive so make sure you \n\t\ttype in the\n name of the file correctly\n\n\t\t";
	cout<<"For example if the file is called mem45,\n\t\t you wont be able to type in Memb45 to retrieve the same file\n\n\t\t";
	
	cout<<"Do you wish you return to the main menu?(y/n)";
	char response11;
	cin>>response11;
	switch(response11)
	{
		case 'y': menu();
		break;
		case 'n': help();
	
		break;
		default: cout<<"Selection is not recognized";
	 }
	break;
	
	case 5:
	
	system("cls");
	 
	 cout<<"\t\t";
	 cout<<"\n How to delete a member\nt ";
	 cout<<"_____________________________\n\t\t";
	 cout<<"\n";
	 cout<<"If you want to erase a file, you have \n\t\t to type in the name of the given file\n\t\t";
	 cout<<"For example, mem45\n\t\t";
	 cout<<"Also remember, the program is case sensitive\n\n\t\t";
	 
	 cout<<"Do you want to return to the main menu?(y/n)";
	 
	 char reply;
	 cin>>reply;
	 switch(reply)
	 {
		case 'y': menu();
		break;
		case 'n': help();
	
		break;
		default: cout<<"Selection is not recognized";
	 }
	
	
	
	 break;
	

	case 6:

	menu();

	break;
	
	case 7:
	about();
	break;

	}
	cin.get();
}
	


//decalaring function for discount
void discount()

{
	system("cls");
	system("color 1A");
	char x=156; //declaring pound sign
	char selection;

	cout<< "\n";
	cout<< " Bronze - 10% discount on all activities.\n";
	cout<< " Silver - 15% discount on all activities and free access to the Swimming Pool.\n";
	cout<< " Gold   - 40% discount and free access to the Swimming Pool and Sauna.\n";
	cout<< "\n\n ";

	

	cout<< "\n\n Which category do you want to view?\n";
	cout<< "\n";
	cout<< " = Discounts =\n";
	cout<< " 1 - Bronze (10% discount)\n";
	cout<< " 2 - Silver (15% discount)\n";
	cout<< " 3 - Gold (40% discount)\n\n";
	
	

		switch (selection)
		{
			default:
			cout<< " \nUnrecognised entry.\n";
			
			cout<< " \nPlease select an option from the list above.\n ";
			cout<< " ";
			cin>> selection;
	
			case 1:
			system("cls");
			cout<< "\n\n\t\t You selected Bronze.\n\n\t\t\t ";
			cout<< "\n _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t";
			cout<< "\n\n\t\t       Activity List\t\t\t" ;
			cout<< endl;
			cout<< " _ _ _ _ _ _ _ _ _ _ _ _ _\n\n\t\t";
	
			cin.ignore();
	
			cout<< "Sports Hall   "<< x<< 3<< " per hour\n\n\t\t";
			cout<< "Sauna   " << x << 0.30<< " per hour\n\n\t\t";
			cout<< "Swimming Pool  " << x <<0.35<< " per hour\n\n\t\t";
			cout<< "Fitness Suite  FREE\n\n\t\t";
			cout<< "Fitness Class  \n\n\t\t";
			cout<< "         - Beginner " << x << 0.55<<" \n\n\t\t";
			cout<< "         - Advanced " << x << 0.35<< " \n\n\t\t";
			cout<< "Badminton  " << x<< "1.00 per hour\n\n\t\t";
			cout<< "Five-A-Side Football" << x<< "3.5 per hour\n\n\t\t";
			 
			cin.ignore();
		
	
			case 2:
			system("cls");
			cout<< "\n You selected Silver.\n\n ";
	
			cout<< "\n _ _ _ _ _ _ _ _ _ _ _ _ _";
			cout<<"\n\n       Activity List" ;
			cout<< endl;
			cout<< " _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t";
	
			cin.ignore();
	
			cout<< "Sport Hall " << x<<4.5<< " per hour\n\n\t\t";
			cout<< "Sauna    "  << x << 0.45<< "per hour\n\n\t\t";
			cout<< "Swimming Pool FREE \n";
			cout<< "Fitness Suite "  << x << 0.67<< "\n\n\t\t ";
			cout<< "Fitness Class  \n\n\t\t";
			cout<< "         - Beginner "  << x << 0.83<<" \n\n\t\t";
			cout<< "         - Advanced " << x << 1.05 <<" \n\n\t\t";
			cout<< "Badminton  " << x << "1.5 per hour\n";
			cout<< "Five-A-Side Football" << x << 5.25 << " per hour\n\n\t\t";
		
	
			case 3:
			system("cls");
			
			cout<<"\n\n\t\t\t\t";
			cout<< "\n You selected Gold.\n\n\t\t\t\t ";
	
			cout<< "\n _ _ _ _ _ _ _ _ _ _ _ _ _\n\t\t\t\t";
			cout<< "\n\n       Activity List\n\t\t\t\t";
			cout<< " _ _ _ _ _ _ _ _ _ _ _ _ _\n\n\t\t";
	
	
			cout<< "Sports Hall  " << x << 12 << " per hour\n\n\t\t";
			cout<< "Sauna   FREE \n\n\t\t";
			cout<< "Swimming Pool  FREE \n\n\t\t";
			cout<< "Fitness Suite  FREE \n\n\t\t";
			cout<< "Fitness Class  \n\n\t\t";
			cout<< "         - Beginner " << x << 2.2 << " per hour\n\n\t";
			cout<< "         - Advanced " << x << 2.80 << " per hour\n\n\t\t";
			cout<< "Badminton  " << x << 4 << " \n\n\t\t";
			cout<< "Five-A-Side Football" << x << "14 per hour\n\n\t\t";	
		}
		
		cout<<"Do you want to you return to the main menu?(y/n)";
		char option;
		cin>>option;
		switch(option)
		{
			case 'y': menu();
			break;
			
			
			case 'n': loading();
			break;
			
			default: cout<<"Selection is not valid";
			break;
		}
}

//about screen
void about()
{
	system("cls");
	system("color 4a");
	
	cout<<"\n\t\t\t";
	cout<<"\n\n\t\tAbout Screen\n\t\t";
	cout<<"_____________________\n\n\n\n\n\t\t";

	cout<<"Programmer : Kenneth Mark Coffie\n\n\t\t";
	cout<<"Software : The Peak Physique Health Club Software\n\n\t\t";
	cout<<"Version : 1.0\n\n\t\t";
	cout<<"Date Created: 18/05/2015\n\n\t\t";
	cout<<"Copyright: Kenneth Mark Inc 2015\n\n\t\t";

	cin.get();
	
}

