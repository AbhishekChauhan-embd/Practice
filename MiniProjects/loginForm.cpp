#include<iostream>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

#define MAX_ATTAMPTS 5

/*User Function declarations*/
void homePage();

/*User class defination*/
class LoginPage{

        fstream file;

        string userEmail, userName, userPassword;
        string searchUserName, searchPassword, email;

        public:

        void LP_userLogin(){
                int loginAttamptCntr = 0;
                bool userFound = false;

                cout << "----------User Login---------\n";
                
                while(loginAttamptCntr < MAX_ATTAMPTS)
                {   
                        cout << "Enter the User name\n";
                        getline(cin,userName);

                        //Increament the login attampt counter.
                        loginAttamptCntr++;

                        file.open("userCredentials.txt", ios :: in);

                        // Loop through all users in the file
                        while(getline(file, searchUserName, '*'))
                        {
                                getline(file, searchPassword, '*');
                                
                                getline(file, email); // Skip the email field and move to next line

                                if(userName == searchUserName)
                                {
                                        userFound = true;

                                        cout << "Enter the Password\n";
                                        getline(cin,userPassword);

                                        if(userPassword == searchPassword)
                                        {
                                                //Credential matched successfully. Allow User login.
                                                cout << "Login Successful!\n";
                                                file.close();
                                                homePage();
                                                return;
                                        }
                                        else{
                                                cout << "Password incoract!!\n";
                                                file.close();
                                        }
                                }
                        }
                        
                        if(!userFound) {
                                cout << "User not found!! Try again.\n\n";
                        }
                        file.close();
                }

                if(loginAttamptCntr >= MAX_ATTAMPTS)
                {
                        cout << "Maximum login attampts reached. Please try again later.\n";
                }
        }

        void LP_userSingUp(){
                cout << "----------User Sign Up----------\n";
                cout << "Enter the EmailId.\n";
                getline(cin, userEmail);

                cout << "Enter the User Name.\n";
                getline(cin, userName);

                cout << "Enter the Password.\n";
                getline(cin, userPassword);

                file.open("userCredentials.txt", ios :: out | ios :: app);

                file << userName << '*'<< userPassword << '*' << userEmail <<endl;

                cout << "User registraion successful :)\n";
        }

        void LP_getPassword(){

                bool userFound = false;
                int loginAttamptCntr = 0;

                while(loginAttamptCntr < MAX_ATTAMPTS)
                {
                        loginAttamptCntr++;     

                        cout << "Enter the User Name.\n";
                        getline(cin, userName);

                        file.open("userCredentials.txt", ios :: in);

                        while(getline(file, searchUserName, '*'))
                        {
                                if(userName == searchUserName)
                                {
                                        userFound = true;

                                        cout << "Enter the email id associated with the account.\n";
                                        cin >> userEmail;

                                        getline(file, searchPassword, '*');
                                        getline(file, email);

                                        if(userEmail == email)
                                        {
                                                cout << "Your password is : " << searchPassword << endl;
                                                file.close();
                                                return;
                                        }
                                        else
                                        {
                                                userFound = true;
                                                cout << "Email id does not match with the user name.\n";
                                                file.close();
                                                return;
                                                break;
                                        }
                                }
                                else{
                                        // Skip the password and email fields for the current user and move to next line
                                        getline(file, searchPassword, '*');
                                        getline(file, email);
                                }
                                

                                
                                
                        }

                        if(!userFound)
                        {      
                                cout << "User not found!! Try again.\n";
                                file.close();
                        }
                }
                if(loginAttamptCntr >= MAX_ATTAMPTS)
                {
                        cout << "Maximum login attampts reached. Please try again later.\n";
                }
                 
        }

        void LP_userExit(){
                cout << "Exit code to be Implemanted\n";
        }
};


int main()
{
    int choice;
    LoginPage LPobj;
    cout << "\n1. Login";
    cout << "\n2. SignUp";
    cout << "\n3. Forgot Password";
    cout << "\n4. Exit";

    cout << "\nEnter your Choice :: ";
    cin >> choice;
    cin.ignore();

    switch(choice){
        case 1 : 
                LPobj.LP_userLogin();
        break;
        
        case 2 : 
                LPobj.LP_userSingUp();
        break;
                
        case 3 : 
                LPobj.LP_getPassword();
        break;
        
        case 4 : 
                LPobj.LP_userExit();
        break;
    }

    return 0;
}

void homePage()
{
        cout << "----------Welcome to SBI----------\n";

        //Get time stamp on Login.
         time_t now = time(0);
         char* dt = ctime(&now);
         cout << "Login Time : " << dt << endl;

         // Keep the user logged in for 10 seconds and then log out the user.

         while (true)
         {
                 time_t currentTime = time(0);
                 double elapsedTime = difftime(currentTime, now);

                 if(elapsedTime >= 10)
                 {
                         cout << "Session expired. Logging out...\n";
                         break;
                 }
         }
}