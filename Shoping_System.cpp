#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void disp();

class temp{
    string userName,Email,password;
    string searchName,searchPass,searchEmail;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;

int main(){
    char choice;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\t\t  Wellcome to RK ELECTRONICS  "<<endl;
    cout<<"\t\t\t---------------------------------"<<endl;
    cout<<"\t\t\t |1- Login             |"<<endl;
    cout<<"\t\t\t |2- Sign-Up           |"<<endl;
    cout<<"\t\t\t |3- Forgot Password   |"<<endl;
    cout<<"\t\t\t |4- Exit              |"<<endl;
    cout<<"\t\t\t |Enter Your Choice:   |";
    cin>>choice;

    switch(choice){
        case '1':
            cin.ignore();
            obj.login();
        break;
        case '2':
            cin.ignore();
            obj.signUP();
        break;
        case '3':
            cin.ignore();
            obj.forgot();
        break;
        case '4':
            return 0;

        break;
        defualt:
            cout<<"Invalid Selection";
    }
}
void temp :: signUP(){
    cout<<"\t\t\tEnter Your User Name :: ";
    getline(cin,userName);
    cout<<"\t\t\tEnter Your Email Address :: ";
    getline(cin,Email);
    cout<<"\t\t\tEnter Your Password :: ";
    getline(cin,password);

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
    main();
}

void temp::login() {
    cout << "\t\t\t----------LOGIN---------" << endl;
    cout << "\t\t\tEnter Your User Name :: ";
    getline(cin, searchName);
    cout << "\t\t\tEnter Your Password :: ";
    char ch;
    searchPass = "";
    while (true) {
        ch = getch();
        if (ch == 13)
            break;
        else if (ch == 8) {
            if (searchPass.length() > 0) {
                searchPass.pop_back();
                cout << "\b \b";
            }
        } else {
            searchPass.push_back(ch);
            cout << "*";
        }
    }

    cout << endl;

    file.open("loginData.txt", ios::in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');

    while (!file.eof()) {
        if (userName == searchName) {
            if (password == searchPass) {
                cout << "\nAccount Login Successful...!" << endl;
                cout << "\nUsername :: " << userName << endl;
                cout << "\nEmail :: " << Email << endl;
                disp();
                break;
            } else {
                cout << "\t\t\tPassword is Incorrect...!" << endl;
                break;
            }
        }
        getline(file, userName, '*');
        getline(file, Email, '*');
        getline(file, password, '\n');
    }

    if (file.eof()) {
        cout << "\t\t\tUser not found!" << endl;
    }

    file.close();
    main();
}

void temp :: forgot(){
    cout<<"\t\t\tEnter Your UserName :: ";
    getline(cin,searchName);
    cout<<"\t\t\tEnter Your Email Address :: ";
    getline(cin,searchEmail);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName == searchName){
            if(Email == searchEmail){
                cout<<"\t\t\tAccount Found...!"<<endl;
                cout<<"\t\t\tYour Password :: "<<password<<endl;
            }else{
                cout<<"\t\t\tNot found...!\n";
            }
        }else{
            cout<<" ";
        }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
    file.close();
    main();
}

 void smartphone()
	{
	system("cls");
       long int item ,y;
       long int cr;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
	cout<<" \t\t\t|Smart phones|"<<endl;
	cout<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t|(1) SAMSANG :=>  1,20,000   |"<<endl;
	cout<<"\t\t\t|(2) IPHONE  :=>  1,50,000   |"<<endl;
	cout<<"\t\t\t|(3) VIVO    :=>  45,000     |"<<endl;
	cout<<"\t\t\t|(4) MI      :=>  25,000     |"<<endl;
	cout<<"\t\t\t|(5) GO BACK TO MAIN MENU    | "<<endl;


		cout<<"\t\t\tEnter your choice: ";
		cin>>item;
		if(item==1)
		{
		cout<<"\t\t\tPrice of Smart phone is 1,20,000"<<endl;
		cout<<"\t\t\tSAMSUNG Galaxy  5G Cobalt Violet,256 GB,12 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y;

		}
		else if(item==2)
		{
		cout<<"\t\t\tPrice of Smart phone is 1,50,000"<<endl;
		cout<<"\t\t\tIPHONE 16  128 GB  4 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y;
        }
		else if(item==3)
		{
		cout<<"\t\t\tPrice of Smart phone is 45,000"<<endl;
		cout<<"\t\t\tVivo V25  512 GB  12 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  3.9" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y;
        }
		else if(item==4)
		{
		cout<<"\t\t\tPrice of Smart phone is 25,000"<<endl;
		cout<<"\t\t\tREDMI NOTE 13 PRO  256 GB  8 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.9 " <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y;
        }

        else{
            cout<<"wrong choice";
            }
		if(y==1)
		{

		cout<<"\t\t\t|Enter your Creadit number :";
		cin>>cr;
		system("cls");
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		cout<<"\t\t\t|You have entered credit card number           |"<<endl;
		cout<<"\t\t\t|Sent your address in this email rk@gmail.com  |"<<endl;
        cout<<"\t\t\t|You have successfully place an order          |"<<endl;
		cout<<"\t\t\t|Your order is Delivered at Tomorrow           |"<<endl;
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		}
		else{
            main();
		}
	}
	void laptop(){
	system("cls");
       long int item ,y1;
       long int cr1;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
	cout<<"\t\t\t |LAPTOP |"<<endl;
	cout<<"\t\t\t-----------------------"<<endl;
	cout<<"\t\t\t|(1) ASER      :=>  50,000   | "<<endl;
	cout<<"\t\t\t|(2) LENOVO    :=>  1,50,000 | "<<endl;
	cout<<"\t\t\t|(3) MAC BOOK  :=>  2,40,000 | "<<endl;
	cout<<"\t\t\t|(4) ASUS      :=>  75,000   | "<<endl;
	cout<<"\t\t\t|(5) GO BACK TO MAIN MENU    | "<<endl;

		cout<<"\t\t\tEnter your choice: ";
		cin>>item;
		if(item==1)
		{
		cout<<"\t\t\tPrice of laptop is 50,000"<<endl;
		cout<<"\t\t\tAser laptop intel i3 h 512gb,16ram"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y1;

		}
		else if(item==2)
		{
		cout<<"\t\t\tPrice of laptop is 1,50,000"<<endl;
		cout<<"\t\t\tlenovo laptop intel i5 h 512gb,16ram"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y1;
        }
		else if(item==3)
		{
		cout<<"\t\t\tPrice of laptop is 2,40,000"<<endl;
		cout<<"\t\t\tmac book m4 laptop 512gb,12ram"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y1;
        }
		else if(item==4)
		{
		cout<<"\t\t\tPrice of laptop is 75,000"<<endl;
		cout<<"\t\t\tAsus laptop intel i7 hx 512gb,16ram"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.9 " <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y1;
		}
        else{
            cout<<"wrong choice";
            }

		if(y1==1)
		{

		cout<<"\t\t\tEnter your Creadit number :";
		cin>>cr1;
		system("cls");
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		cout<<"\t\t\t|You have entered credit card number           |"<<endl;
		cout<<"\t\t\t|Sent your address in this email rk@gmail.com  |"<<endl;
        cout<<"\t\t\t|You have successfully place an order          |"<<endl;
		cout<<"\t\t\t|Your order is Delivered at Tomorrow           |"<<endl;
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		}
		else{
            main();
		}
	}

	void tv(){
	system("cls");
       long int item ,y2;
       long int cr2;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
	cout<<" \t\t\tSmart TV :"<<endl;
	cout<<" \t\t\t-----------------------"<<endl;
	cout<<" \t\t\t|(1) SAMSANG :=>	1,20,000|"<<endl;
	cout<<" \t\t\t|(2) VU      :=>  1,50,000 |"<<endl;
	cout<<" \t\t\t|(3) SONY    :=>  45,000   |"<<endl;
	cout<<" \t\t\t|(4) MI      :=>  25,000   |"<<endl;
	cout<<"\t\t\t |(5) GO BACK TO MAIN MENU   | "<<endl;

    cout<<" \t\t\t|Enter your choice:        | ";
    cin>>item;
		if(item==1)
		{
		cout<<"\t\t\tPrice of Smart tv is 1,20,000"<<endl;
		cout<<"\t\t\tSAMSUNG SMART TV  2 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y2;

		}
		else if(item==2)
		{
		cout<<"\t\t\tPrice of Smart tv is 1,50,000"<<endl;
		cout<<"\t\t\tVU SMART TV 4 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y2;
        }
		else if(item==3)
		{
		cout<<"\t\t\tPrice of Smart tv is 45,000"<<endl;
		cout<<"\t\t\tSony smart tv 12 GB RAM"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  3.9" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y2;
        }
		else if(item==4)
		{
		cout<<"\t\t\tPrice of Smart tv is 25,000"<<endl;
		cout<<"\t\t\tREDMI smart tv 2 gb Ram"<<endl;
		cout<<"\t\t\tRatings & Review   ::  4.9 " <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y2;
        }
        else{
            cout<<"\t\t\t Wrong Choice";
            }
		if(y2==1)
		{
		cout<<"\t\t\tEnter your Creadit number :";
		cin>>cr2;
       system("cls");
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		cout<<"\t\t\t|You have entered credit card number           |"<<endl;
		cout<<"\t\t\t|Sent your address in this email rk@gmail.com  |"<<endl;
        cout<<"\t\t\t|You have successfully place an order          |"<<endl;
		cout<<"\t\t\t|Your order is Delivered at Tomorrow           |"<<endl;
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		}
		else{
            main();
		}
	}


	void speaker(){
	    system("cls");
       long int item ,y3;
       long int cr3;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
	cout<<" \t\t\tSpeaker :"<<endl;
	cout<<"\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t|(1) JBL     :=>  5,000    |"<<endl;
	cout<<"\t\t\t|(2) BOUT    :=>  1,500    |"<<endl;
	cout<<"\t\t\t|(3) oppo    :=>  3,000    |"<<endl;
	cout<<"\t\t\t|(4) MI      :=>  2,000    |"<<endl;
	cout<<"\t\t\t|(5) GO BACK TO MAIN MENU  | "<<endl;


		cout<<"\t\t\tEnter your choice: ";
		cin>>item;
		if(item==1)
		{
		cout<<"\t\t\tPrice of Speaker is 5,000"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y3;

		}
		else if(item==2)
		{
		cout<<"\t\t\tPrice of Speaker is 1,500"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y3;
        }
		else if(item==3)
		{
		cout<<"\t\t\tPrice of Speaker is 3,000"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  3.9" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y3;
        }
		else if(item==4)
		{
		cout<<"\t\t\tPrice of speaker is 2,000"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.9 " <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :"<<endl;
        cin>>y3;
        }
        else{
            cout<<"wrong choice";
            }
		if(y3==1)
		{

		cout<<"\t\t\tEnter your Creadit number :";
		cin>>cr3;
		system("cls");
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		cout<<"\t\t\t|You have entered credit card number           |"<<endl;
		cout<<"\t\t\t|Sent your address in this email rk@gmail.com  |"<<endl;
        cout<<"\t\t\t|You have successfully place an order          |"<<endl;
		cout<<"\t\t\t|Your order is Delivered at Tomorrow           |"<<endl;
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		}
		else{
            main();
		}
	}
	void ac(){
	    system("cls");
       long int item ,y4;
       long int cr4;
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        cout<<" \t\t\t|Ac| :"<<endl;
        cout<<"\t\t\t-----------------------"<<endl;
        cout<<"\t\t\t|(1) VOLTAS      :=>  1,20,000   |"<<endl;
        cout<<"\t\t\t|(2) LG          :=>  1,50,000   |"<<endl;
        cout<<"\t\t\t|(3) HAIER       :=>  45,000     |"<<endl;
        cout<<"\t\t\t|(4) GODREJ      :=>  1,25,000   |"<<endl;
        cout<<"\t\t\t|(5) GO BACK TO MAIN MENU        | "<<endl;

		cout<<"\t\t\tEnter your choice: ";
		cin>>item;
		{
        if(item==1)
		{
		cout<<"\t\t\tPrice of AC is 1,50,000"<<endl;
		cout<<"\t\t\tVOLTAS 1.5 TON "<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y4;
        }
		else if(item==2)
		{
		cout<<"\t\t\tPrice of AC is 1,50,000"<<endl;
		cout<<"\t\t\tLG 7 2 TON"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  5" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y4;
        }
		else if(item==3)
		{
		cout<<"\t\t\tPrice of AC is 45,000"<<endl;
		cout<<"\t\t\tHAIER 1.5 TON"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  3.9" <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :";
        cin>>y4;
        }
		else if(item==4)
		{
		cout<<"\t\t\tPrice of AC is 25,000"<<endl;
		cout<<"\t\t\tGODREJ 5 2 TON"<<endl;
		cout<<"\t\t\tRatings & Reviews ::  4.9 " <<endl;
		cout<<"\t\t\tPRESS ANY KEY TO GOTO MAIN MENU   ::::::  "<<endl;
		cout<<"\t\t\tPRESS 1 TO BUY  :"<<endl;
        cin>>y4;
        }
        else{
            cout<<"wrong choice";
            }
		if(y4==1)
		{

		cout<<"\t\t\tEnter your Creadit number :";
		cin>>cr4;
		system("cls");
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		cout<<"\t\t\t|You have entered credit card number           |"<<endl;
		cout<<"\t\t\t|Sent your address in this email rk@gmail.com  |"<<endl;
        cout<<"\t\t\t|You have successfully place an order          |"<<endl;
		cout<<"\t\t\t|Your order is Delivered at Tomorrow           |"<<endl;
		cout<<"\t\t\t|----------------------------------------------|"<<endl;
		}
		else{
            main();
		}
	}
}

	void disp()
	{
	system("cls");
	int ch1;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\t\t  Wellcome to RK ELECTRONICS  "<<endl;
    cout<<"\t\t\t---------------------------------"<<endl;
    cout<<"\t\t\t |1- SMART PHONE             |"<<endl;
    cout<<"\t\t\t |2- TV                      |"<<endl;
    cout<<"\t\t\t |3- LAPTOP                  |"<<endl;
    cout<<"\t\t\t |4- SPEAKER                 |"<<endl;
    cout<<"\t\t\t |5- AC                      |"<<endl;

    cout<<"\t\t\t |Enter Your Choice:         |";
    cin>>ch1;

	switch (ch1)
		{
		case 1:
			smartphone();
			break;

		case 2:
		    tv();
		    break;

		case 3:
		    laptop();
			break;
		case 4:
		    speaker();
			break;
        case 5:
            ac();

	       default:
	       cout<<"\t\t\t Invalid choise  ";
	}

    }


