#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{

    //Variable Declaration That i'll use

    int Choose_option = -1;
    int count = 0;
    string Name_ModelNumber;
    string Colour;
    string Brand_Car;
    char input;
    string name_parts;
    int amount;
    string user_name = {"Admin"};
    string password = {"12345"};
    string user;
    string pass;
    int price;

    //Enums section

    enum Cars
    {
        Tesla_Inc,
        Toyota_Motor_Corporation,
        Volkswagen,
        Ford_Motor_Company,
        Honda,

    };
    enum Car_Parts
    {
        Engines,
        Batteries,
        Tyres,
        Radiators,
        Axles,
    };

    //arrays (1D and 2D)

    int row = 5;
    int coloumn = 3;
    string Car_Name[row][coloumn] = {{"Tesla Model S", "Tesla Model X", "Tesla Model S"}};
    string Car_Model[row][coloumn] = {{"AWD 60D", "AWD P90D", "AWD 100D"}};
    string Car_ModelYear[row][coloumn] = {{"2013", "2016", "2017"}};
    int Car_Price[row][coloumn] = {
        {68000, 109500, 94000},
    };
    string Cars_Colours[row][coloumn] = {{"Silver Metallic,Solid Black", "Obsidian Black Metallic", "Red Multi-Coat"}, {}, {}, {}, {}};

    string Cars_Brand[] = {"Tesla_Inc", "Toyota_Motor_Corporation", "Volkswagen", "Ford_Motor_Company", "Honda"};

//start
start:
    cout << endl;
    cout << "                                 Choose The Type OF Access: " << endl;
    cout << "                                      1.Admin" << endl;
    cout << "                                      2.Customer" << endl;
    cout << "                                Enter The Type(1/2): ";
    cin >> Choose_option;
    system("CLS");

    //admin

    if (Choose_option == 1)
    {
    userdetail:
        cin.ignore();
        cout << "                            Enter Username: ";
        getline(cin, user);

        cout << "                            Enter Password: ";
        getline(cin, pass);
        system("CLS");
        if (user == user_name && pass == password)
        {
            cout << "****************++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++****************" << endl;
            cout << "                                     WelCome To Branded Automotive Showroom" << endl;
            cout << "****************++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++****************\n\n";
            while (Choose_option != 0)
            {
                cout << "                       ++++******************************************************++++" << endl;
                if (count == 0)
                {
                    cout << "                                        Pleausre To have You !!!" << endl;
                    count = count + 1;
                }
                cout << "                        Branded Automotive Showroom Provided You Following Facilities \n"
                     << endl;
                cout << "                             Press 1.To View The Cars With Details(Name,Brand,Price etc..)" << endl;
                cout << "                             Press 2.To Add A Car" << endl;
                cout << "                             Press 3.To Search a Car " << endl;
                cout << "                             Press 4.To View Top Cars" << endl;
                cout << "                             Press 5.To add  Parts(Accessories)" << endl;
                cout << "                             Press 6.To View User Dashboard and add users" << endl;
                cout << "                             Press 7.To Logout" << endl;
                cout << "                             Press 0.To Exit From The Program " << endl;
                cout << "                       ++++******************************************************++++\n\n"
                     << endl;
                cout << "                             Please Enter Your Action ....: ";
                cin >> Choose_option;
                system("CLS");

                //switch
                switch (Choose_option)
                {
                    //case 1

                case 1:
                    cout << "********************************************************************************************************************************************************************" << endl;
                    cout << "                                                       All Cars With Details(Name,Brand,Price etc..)" << endl;
                    cout << setw(35) << left << "ManuFacturer/Brand" << setw(30) << left << "Car Name " << setw(20) << left << "Car_Model" << setw(20) << left << "Model_Year" << setw(20) << left << "Price" << setw(40) << left << "Available colors" << endl;
                    cout << endl;
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < coloumn; j++)
                        {
                            cout << setw(35) << left << Cars_Brand[i] << setw(30) << left << Car_Name[i][j] << setw(20) << left << Car_Model[i][j] << setw(20) << left << Car_ModelYear[i][j] << setw(20) << left << Car_Price[i][j] << setw(30) << left << Cars_Colours[i][j] << endl;

                            cout << "____________________________________________________________________________________________________________________________________________________________________" << endl;
                        }
                    }
                    cout << "********************************************************************************************************************************************************************" << endl;

                    cout << "\n\n";
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                    break;

                    //case 2

                case 2:
                    cout << "===================================================================================================================================================" << endl;
                    cout << "                                                Add a Car\n";
                    cout << "                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                         << "\n\n";
                    cout << "      ********************************************************************************************" << endl;
                    cout << "                               Please Choose the brand of which you want to add a car" << endl;
                    cout << "                                            1.Tesla_Inc" << endl;
                    cout << "                                            2.Toyota_Motor_Corporation" << endl;
                    cout << "                                            3.Volkswagen" << endl;
                    cout << "                                            4.Ford_Motor_Company" << endl;
                    cout << "                                            5.Honda\n"
                         << endl;
                    cout << "      ********************************************************************************************\n\n"
                         << endl;
                    cout << "                                              Enter Your Choice: ";
                    cin >> input;
                    system("CLS");
                    if (input == '1')
                    {
                        cout << "                                    List Of All Cars Belongs To Tesla_Inc \n"
                             << endl;
                        cout << "__________________________________________________________________________________________________________________\n"
                             << endl;
                        cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                        /*

            {code*}

            */
                        cout << "__________________________________________________________________________________________________________________";
                        cout << "\n\n";
                        cin.ignore();
                        cout << "Enter The Name & Model Number To Add A new Car: ";
                        getline(cin, Name_ModelNumber);
                        cout << "Enter The Colour of the Car: ";
                        getline(cin, Colour);
                        cout << "Enter The Price of car in Dollar: ";
                        cin >> price;
                        cout << "Press Any key To Continue ....." << endl;
                        getch();
                        system("CLS");
                    }
                    else if (input == '2')
                    {
                        cout << "                                    List Of All Cars Belongs To Toyota_Motor_Corporation \n"
                             << endl;
                        cout << "__________________________________________________________________________________________________________________\n"
                             << endl;
                        cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                        /*

            {code*}

            */
                        cout << "__________________________________________________________________________________________________________________";
                        cout << "\n\n";
                        cin.ignore();
                        cout << "Enter The Name & Model Number To Add A new Car: ";
                        getline(cin, Name_ModelNumber);
                        cout << "Enter The Colour of the Car: ";
                        getline(cin, Colour);
                        cout << "Enter The Price of car in Dollar: ";
                        cin >> price;
                        cout << "Press Any key To Continue ....." << endl;
                        getch();
                        system("CLS");
                    }
                    else if (input == '3')
                    {
                        cout << "                                    List Of All Cars Belongs To Volkswagen\n"
                             << endl;
                        cout << "__________________________________________________________________________________________________________________\n"
                             << endl;
                        cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                        /*

            {code*}

            */
                        cout << "__________________________________________________________________________________________________________________";
                        cout << "\n\n";
                        cin.ignore();
                        cout << "Enter The Name & Model Number To Add A new Car: ";
                        getline(cin, Name_ModelNumber);
                        cout << "Enter The Colour of the Car: ";
                        getline(cin, Colour);
                        cout << "Enter The Price of car in Dollar: ";
                        cin >> price;
                        cout << "Press Any key To Continue ....." << endl;
                        getch();
                        system("CLS");
                    }
                    else if (input == '4')
                    {
                        cout << "                                    List Of All Cars Belongs To Ford_Motor_Company \n"
                             << endl;
                        cout << "__________________________________________________________________________________________________________________\n"
                             << endl;
                        cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                        /*

            {code*}

            */
                        cout << "__________________________________________________________________________________________________________________";
                        cout << "\n\n";
                        cin.ignore();
                        cout << "Enter The Name & Model Number To Add A new Car: ";
                        getline(cin, Name_ModelNumber);
                        cout << "Enter The Colour of the Car: ";
                        getline(cin, Colour);
                        cout << "Enter The Price of car in Dollar: ";
                        cin >> price;
                        cout << "Press Any key To Continue ....." << endl;
                        getch();
                        system("CLS");
                    }
                    else if (input == '5')
                    {
                        cout << "                                    List Of All Cars Belongs To Honda \n"
                             << endl;
                        cout << "__________________________________________________________________________________________________________________\n"
                             << endl;
                        cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                        /*

            {code*}

            */
                        cout << "__________________________________________________________________________________________________________________";
                        cout << "\n\n";
                        cin.ignore();
                        cout << "Enter The Name & Model Number To Add A new Car: ";
                        getline(cin, Name_ModelNumber);
                        cout << "Enter The Colour of the Car: ";
                        getline(cin, Colour);
                        cout << "Enter The Price of car in Dollar: ";
                        cin >> price;
                        cout << "Press Any key To Continue ....." << endl;
                        getch();
                        system("CLS");
                    }
                    else if ((input >= '6' || input <= '9') || ((input >= 'a' || input <= 'z') || (input >= 'A' || input <= 'Z')))
                    {
                        cout << "                            You Have Enter invalid Option....." << endl;
                        cout << "                              Do you wanna try again(Y/N) :";
                        cin >> input;
                        system("CLS");
                        if (input == 'Y' || input == 'y')
                        {
                            goto repeat;
                        }
                        else if (input == 'n' || input == 'N')
                        {
                            cout << "Press Any key To Continue ....." << endl;
                            getch();
                            system("CLS");
                        }
                        else if (!(input == 'Y' || input == 'y') || (input == 'n' || input == 'N'))
                        {
                            cout << "                              You Have Enter Wrong ..." << endl;
                            cout << "                           Press Any key To Continue ....." << endl;
                            getch();
                            system("CLS");
                        }
                    }

                    break;

                    //case 3

                case 3:
                back1:
                    cout << "               *********************************************************************************" << endl;
                    cout << "                                              Searching Facility" << endl;
                    cout << "               *********************************************************************************\n"
                         << endl;
                    cout << "               Dear Customer Would you like me to show You Some Available Brand So you Can Choose\n";
                    cout << "                            Which You want to Search of sepecific Brand...(Y/N) \n"
                         << endl;
                    cout << "           Please Type Y For Yes And N For No To search Manually.Only Available Brand's Car will Be Found...: ";
                    cin >> input;
                    system("CLS");
                    if (input == 'Y' || input == 'y')
                    {
                        cout << "           ********************************************************************************************" << endl;
                        cout << "                      Following are The Manaufacturer Company(Brands) You Can Search The Car OF..." << endl;
                        cout << "                                                1.Tesla_Inc" << endl;
                        cout << "                                                2.Toyota_Motor_Corporation" << endl;
                        cout << "                                                3.Volkswagen" << endl;
                        cout << "                                                4.Ford_Motor_Company" << endl;
                        cout << "                                                5.Honda\n"
                             << endl;
                        cout << "           ********************************************************************************************\n\n"
                             << endl;
                        cin.ignore();
                        cout << "                     Enter The Brand/Macfacturer Of Car From Above: ";
                        getline(cin, Brand_Car);
                        cout << "                     Enter The Name & Model Number Of the Car: ";
                        getline(cin, Name_ModelNumber);

                        /*
            search code
             
             */
                        cout << "\n\n";
                        cout << "                     Press Any Key To continue" << endl;
                        getch();
                        system("CLS");
                    }
                    else if (input == 'N' || input == 'n')
                    {
                        cin.ignore();
                        cout << "                                       Enter The Brand/Macfacturer Of Car : ";
                        getline(cin, Brand_Car);
                        cout << "                                       Enter The Name & Model Number Of the Car: ";
                        getline(cin, Name_ModelNumber);

                        /*
                   search code
                   */

                        cout << "\n\n";
                        cout << "                                      Press Any Key To continue" << endl;
                        getch();
                        system("CLS");
                    }
                    else if (!(input == 'Y' || input == 'y') || (input == 'n' || input == 'N'))
                    {
                        cout << "                            You Have Enter Wrong.Do you want try again(Y/N)...: ";
                        cin >> input;
                        if (input == 'Y' || input == 'y')
                        {
                            goto back1;
                        }
                        else if (input == 'n' || input == 'N')
                        {
                            cout << "                                 Press any Key For Main Menu.....:";
                            getch();
                            system("CLS");
                        }
                    }
                    break;

                    //case 4

                case 4:
                    cout << "**************************************************************************************************************************************************" << endl;
                    cout << "                                                       Top 5 Cars With Details(Name,Brand,Price etc..)" << endl;
                    cout << setw(30) << left << "ManuFacturer/Brand" << setw(40) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;
                    cout << "\n";
                    cout << "***************************************************************************************************************************************************" << endl;
                    cout << "\n\n";
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                    break;
                    //case 5

                case 5:
                    cout << "                                            Add Parts Accessories\n";
                reapeat3:

                    cout << "           ********************************************************************************************" << endl;
                    cout << "                   Pats/Accessories of following Manaufacturer Company(Brands) cars are Available..." << endl;
                    cout << "                                                1.Tesla_Inc" << endl;
                    cout << "                                                2.Toyota_Motor_Corporation" << endl;
                    cout << "                                                3.Volkswagen" << endl;
                    cout << "                                                4.Ford_Motor_Company" << endl;
                    cout << "                                                5.Honda\n"
                         << endl;
                    cout << "           ********************************************************************************************\n\n"
                         << endl;
                    cout << "                                              Enter Your Choice: ";
                    cin >> input;
                    system("CLS");

                    //1.....

                    if (input == '1')
                    {
                        cout << "        ***********************************************************************************************" << endl;
                        cout << "                                      List Of All Parts Of Tesla_Inc Brand\n";
                        cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                        cout << "        " << setw(40) << left << "1.Engines" << endl;
                        cout << "        " << setw(40) << left << "2.Batteries " << endl;
                        cout << "        " << setw(40) << left << "3.Tyres " << endl;
                        cout << "        " << setw(40) << left << "4.Radiators " << endl;
                        cout << "        " << setw(40) << left << "5.Axles " << endl;
                        cout << "        ***********************************************************************************************\n\n"
                             << endl;

                        cout << "         Enter The Name Of Part You want to Add: ";
                        cin.ignore();
                        getline(cin, name_parts);
                        cout << "         Enter The Amount: ";
                        cin >> amount;

                        //code for validation

                        cout << "\n\n";
                        cout << "         Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                    }
                    else if (input == '2')
                    {
                        cout << "        ***********************************************************************************************" << endl;
                        cout << "                                      List Of All Parts Of Toyota_Motor_Corporation Brand\n";
                        cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                        cout << "        " << setw(40) << left << "1.Engines" << endl;
                        cout << "        " << setw(40) << left << "2.Batteries " << endl;
                        cout << "        " << setw(40) << left << "3.Tyres " << endl;
                        cout << "        " << setw(40) << left << "4.Radiators " << endl;
                        cout << "        " << setw(40) << left << "5.Axles " << endl;
                        cout << "        ***********************************************************************************************\n\n"
                             << endl;

                        cout << "         Enter The Name Of Part You want to Add: ";
                        cin.ignore();
                        getline(cin, name_parts);
                        cout << "         Enter The Amount: ";
                        cin >> amount;

                        //code for validation

                        cout << "\n\n";
                        cout << "         Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                    }
                    else if (input == '3')
                    {
                        cout << "        ***********************************************************************************************" << endl;
                        cout << "                                      List Of All Parts Of Volkswagen Brand\n";
                        cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                        cout << "        " << setw(40) << left << "1.Engines" << endl;
                        cout << "        " << setw(40) << left << "2.Batteries " << endl;
                        cout << "        " << setw(40) << left << "3.Tyres " << endl;
                        cout << "        " << setw(40) << left << "4.Radiators " << endl;
                        cout << "        " << setw(40) << left << "5.Axles " << endl;
                        cout << "        ***********************************************************************************************\n\n"
                             << endl;

                        cout << "         Enter The Name Of Part You want to Add: ";
                        cin.ignore();
                        getline(cin, name_parts);
                        cout << "         Enter The Amount: ";
                        cin >> amount;

                        //code for validation

                        cout << "\n\n";
                        cout << "         Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                    }
                    else if (input == '4')
                    {
                        cout << "        ***********************************************************************************************" << endl;
                        cout << "                                      List Of All Parts Of Ford_Motor_Company Brand\n";
                        cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                        cout << "        " << setw(40) << left << "1.Engines" << endl;
                        cout << "        " << setw(40) << left << "2.Batteries " << endl;
                        cout << "        " << setw(40) << left << "3.Tyres " << endl;
                        cout << "        " << setw(40) << left << "4.Radiators " << endl;
                        cout << "        " << setw(40) << left << "5.Axles " << endl;
                        cout << "        ***********************************************************************************************\n\n"
                             << endl;

                        cout << "         Enter The Name Of Part You want to Add: ";
                        cin.ignore();
                        getline(cin, name_parts);
                        cout << "         Enter The Amount: ";
                        cin >> amount;

                        //code for validation

                        cout << "\n\n";
                        cout << "         Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                    }
                    else if (input == '5')
                    {
                        cout << "        ***********************************************************************************************" << endl;
                        cout << "                                      List Of All Parts Of Honda Brand\n";
                        cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                        cout << "        " << setw(40) << left << "1.Engines" << endl;
                        cout << "        " << setw(40) << left << "2.Batteries " << endl;
                        cout << "        " << setw(40) << left << "3.Tyres " << endl;
                        cout << "        " << setw(40) << left << "4.Radiators " << endl;
                        cout << "        " << setw(40) << left << "5.Axles " << endl;
                        cout << "        ***********************************************************************************************\n\n"
                             << endl;

                        cout << "         Enter The Name Of Part You want to Add: ";
                        cin.ignore();
                        getline(cin, name_parts);
                        cout << "         Enter The Amount: ";
                        cin >> amount;

                        //code for validation

                        cout << "\n\n";
                        cout << "         Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                    }
                    //wrong input

                    else if ((input >= '6' || input <= '9') || ((input >= 'a' || input <= 'z') || (input >= 'A' || input <= 'Z')))
                    {
                        cout << "       You Have Enter invalid Option....." << endl;
                        cout << "       Do you wanna try again(Y/N) :";
                        cin >> input;
                        system("CLS");
                        if (input == 'Y' || input == 'y')
                        {
                            goto reapeat3;
                        }
                        else if (input == 'n' || input == 'N')
                        {
                            break;
                        }
                        else if (!(input == 'Y' || input == 'y') && (input == 'n' || input == 'N'))
                        {
                            cout << "    You Have Enter Wrong ..." << endl;
                        }
                        cout << "        Press any Key For Main Menu.....:";
                        getch();
                        system("CLS");
                    }

                    break;

                    //case 6

                case 6:
                    cout << "======================================================================================================" << endl;
                    cout << "                                       User's Dashboard\n\n";
                    cout << setw(40) << left << "UserName" << setw(40) << left << "Purchased Car" << endl;
                    cout << endl;
                    cout << "======================================================================================================" << endl;
                    cout << "\n\n";

                    cout << "                                Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                    break;

                    //case 7

                case 7:
                    cout << "                                           Logout Successfully!!!!!\n ";
                    cout << "                                          Press any key to login again: ";
                    getch();
                    system("CLS");
                    goto start;
                    break;

                    //case 8

                case 0:
                    cout << "                                              Program Closed Successfully\n";
                    return 0;
                    break;

                    //defaualt

                default:
                    cout << "                                   You Have Selected Wrong Option\n";
                    cout << "                                   Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                    break;
                }
            }
        }
        else
        {
            cout << "                              Wrong user name or password.. " << endl;
            cout << "                               Do you want try again(Y/N)...: ";
            cin >> input;
            if (input == 'Y' || input == 'y')
            {
                goto userdetail;
            }
            else if (input == 'n' || input == 'N')
            {
                cout << "Press any Key for login options.....: ";
                getch();
                system("CLS");
                goto start;
            }
        }
    }

    //customer

    else if (Choose_option == 2)
    {
        cout << "****************++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++****************" << endl;
        cout << "                                     WelCome To Branded Automotive Showroom" << endl;
        cout << "****************++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++****************\n\n";

        //Code For Menu

        while (Choose_option != 0)
        {
            cout << "                       ++++******************************************************++++" << endl;
            if (count == 0)
            {
                cout << "                                        Pleausre To have You !!!" << endl;
                count = count + 1;
            }
            cout << "                        Branded Automotive Showroom Provided You Following Facilities \n"
                 << endl;
            cout << "                             Press  1.To View The Cars With Details(Name,Brand,Price etc..)" << endl;
            cout << "                             Press  2.To Buy A Car" << endl;
            cout << "                             Press  3.To Search Your Favourite Car " << endl;
            cout << "                             Press  4.To View Top Cars" << endl;
            cout << "                             Press  5.To Buy Parts(Accessories)" << endl;
            cout << "                             Press  6.To View User Dashboard" << endl;
            cout << "                             Press  7.To Sell Old Car" << endl;
            cout << "                             Press  8.To Rent A Car" << endl;
            cout << "                             Press  9.For service Processing " << endl;
            cout << "                             Press 10.Logout " << endl;
            cout << "                             Press  0.To Exit From The Program " << endl;
            cout << "                       ++++******************************************************++++\n\n"
                 << endl;
            cout << "                             Please Enter Your Action ....: ";
            cin >> Choose_option;
            system("CLS");

            //switch for submenu

            switch (Choose_option)
            {

                //Case To show all cars

            case 1:
                cout << "**************************************************************************************************************************************************" << endl;
                cout << "                                                       All Cars With Details(Name,Brand,Price etc..)" << endl;
                cout << setw(30) << left << "ManuFacturer/Brand" << setw(40) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;
                cout << "\n";
                cout << "***************************************************************************************************************************************************" << endl;
                cout << "\n\n";
                cout << "Press Any key To Continue ....." << endl;
                getch();
                system("CLS");
                break;

                //case for buy car

            case 2:
            repeat:
                cout << "           ********************************************************************************************" << endl;
                cout << "                      Following are The Manaufacturer Company(Brands)'s car You Can buy From here..." << endl;
                cout << "                                                1.Tesla_Inc" << endl;
                cout << "                                                2.Toyota_Motor_Corporation" << endl;
                cout << "                                                3.Volkswagen" << endl;
                cout << "                                                4.Ford_Motor_Company" << endl;
                cout << "                                                5.Honda\n"
                     << endl;
                cout << "           ********************************************************************************************\n\n"
                     << endl;
                cout << "                                              Enter Your Choice: ";
                cin >> input;
                system("CLS");

                //code for submenu

                //1...

                if (input == '1')
                {
                    cout << "                                    List Of All Cars Belongs To Tesla_Inc \n"
                         << endl;
                    cout << "__________________________________________________________________________________________________________________\n"
                         << endl;
                    cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                    /*

            {code*}

            */
                    cout << "__________________________________________________________________________________________________________________";
                    cout << "\n\n";
                    cin.ignore();
                    cout << "Enter The Name & Model Number: ";
                    getline(cin, Name_ModelNumber);
                    cout << "Enter The Colour From Available Colours: ";
                    getline(cin, Colour);
                    cout << endl;
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                }

                //2..

                else if (input == '2')
                {
                    cout << "                                    List Of All Cars Belongs To Toyota_Motor_Corporation \n"
                         << endl;
                    cout << "__________________________________________________________________________________________________________________\n"
                         << endl;
                    cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                    /*

            {code*}

            */
                    cout << "__________________________________________________________________________________________________________________";
                    cout << "\n\n";
                    cin.ignore();
                    cout << "Enter The Name & Model Number: ";
                    getline(cin, Name_ModelNumber);
                    cout << "Enter The Colour From Available Colours: ";
                    getline(cin, Colour);
                    cout << endl;
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                }

                //3...

                else if (input == '3')
                {
                    cout << "                                    List Of All Cars Belongs To Volkswagen\n"
                         << endl;
                    cout << "__________________________________________________________________________________________________________________\n"
                         << endl;
                    cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                    /*

            {code*}

            */
                    cout << "__________________________________________________________________________________________________________________";
                    cout << "\n\n";
                    cin.ignore();
                    cout << "Enter The Name & Model Number: ";
                    getline(cin, Name_ModelNumber);
                    cout << "Enter The Colour From Available Colours: ";
                    getline(cin, Colour);
                    cout << endl;
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                }

                //4...

                else if (input == '4')
                {
                    cout << "                                    List Of All Cars Belongs To Ford_Motor_Company \n"
                         << endl;
                    cout << "__________________________________________________________________________________________________________________\n"
                         << endl;
                    cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                    /*

            {code*}

            */
                    cout << "__________________________________________________________________________________________________________________";
                    cout << "\n\n";
                    cin.ignore();
                    cout << "Enter The Name & Model Number: ";
                    getline(cin, Name_ModelNumber);
                    cout << "Enter The Colour From Available Colours: ";
                    getline(cin, Colour);
                    cout << endl;
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                }

                //5....

                else if (input == '5')
                {
                    cout << "                                    List Of All Cars Belongs To Honda \n"
                         << endl;
                    cout << "__________________________________________________________________________________________________________________\n"
                         << endl;
                    cout << setw(30) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;

                    /*

            {code*}

            */
                    cout << "__________________________________________________________________________________________________________________";
                    cout << "\n\n";
                    cin.ignore();
                    cout << "Enter The Name & Model Number: ";
                    getline(cin, Name_ModelNumber);
                    cout << "Enter The Colour From Available Colours: ";
                    getline(cin, Colour);
                    cout << endl;
                    cout << "Press Any key To Continue ....." << endl;
                    getch();
                    system("CLS");
                }
                else if ((input >= '6' || input <= '9') || ((input >= 'a' || input <= 'z') || (input >= 'A' || input <= 'Z')))
                {
                    cout << "You Have Enter invalid Option....." << endl;
                    cout << "Do you wanna try again(Y/N) :";
                    cin >> input;
                    system("CLS");
                    if (input == 'Y' || input == 'y')
                    {
                        goto repeat;
                    }
                    else if (input == 'n' || input == 'N')
                    {
                        break;
                    }
                    else if (!(input == 'Y' || input == 'y') || (input == 'n' || input == 'N'))
                    {
                        cout << "                                 You Have Enter Wrong ..." << endl;
                    }
                    cout << "                                  Press any Key For Main Menu.....:";
                    getch();
                    system("CLS");
                }

                break;

                //case for search a car...

            case 3:
            back:
                cout << "               *********************************************************************************" << endl;
                cout << "                                              Searching Facility" << endl;
                cout << "               *********************************************************************************\n"
                     << endl;
                cout << "               Dear Customer Would you like me to show You Some Available Brand So you Can Choose\n";
                cout << "                            Which You want to Search of sepecific Brand...(Y/N) \n"
                     << endl;
                cout << "           Please Type Y For Yes And N For No To search Manually.Only Available Brand's Car will Be Found...: ";
                cin >> input;
                system("CLS");
                if (input == 'Y' || input == 'y')
                {
                    cout << "           ********************************************************************************************" << endl;
                    cout << "                      Following are The Manaufacturer Company(Brands) You Can Search The Car OF..." << endl;
                    cout << "                                                1.Tesla_Inc" << endl;
                    cout << "                                                2.Toyota_Motor_Corporation" << endl;
                    cout << "                                                3.Volkswagen" << endl;
                    cout << "                                                4.Ford_Motor_Company" << endl;
                    cout << "                                                5.Honda\n"
                         << endl;
                    cout << "           ********************************************************************************************\n\n"
                         << endl;
                    cin.ignore();
                    cout << "                     Enter The Brand/Macfacturer Of Car From Above: ";
                    getline(cin, Brand_Car);
                    cout << "                     Enter The Name & Model Number Of the Car: ";
                    getline(cin, Name_ModelNumber);

                    /*
            search code
             
             */
                    cout << "\n\n";
                    cout << "                     Press Any Key To continue" << endl;
                    getch();
                    system("CLS");
                }
                else if (input == 'N' || input == 'n')
                {
                    cin.ignore();
                    cout << "                                       Enter The Brand/Macfacturer Of Car : ";
                    getline(cin, Brand_Car);
                    cout << "                                       Enter The Name & Model Number Of the Car: ";
                    getline(cin, Name_ModelNumber);

                    /*
                   search code
                   */

                    cout << "\n\n";
                    cout << "                                      Press Any Key To continue" << endl;
                    getch();
                    system("CLS");
                }
                else if (!(input == 'Y' || input == 'y') || (input == 'n' || input == 'N'))
                {
                    cout << "                            You Have Enter Wrong.Do you want try again(Y/N)...: ";
                    cin >> input;
                    if (input == 'Y' || input == 'y')
                    {
                        goto back;
                    }
                    else if (input == 'n' || input == 'N')
                    {
                        cout << "                                 Press any Key For Main Menu.....:";
                        getch();
                        system("CLS");
                        break;
                    }
                }

                break;

                //case top cars

            case 4:

                cout << "**************************************************************************************************************************************************" << endl;
                cout << "                                                       Top 5 Cars With Details(Name,Brand,Price etc..)" << endl;
                cout << setw(30) << left << "ManuFacturer/Brand" << setw(40) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;
                cout << "\n";
                cout << "***************************************************************************************************************************************************" << endl;
                cout << "\n\n";
                cout << "Press Any key To Continue ....." << endl;
                getch();
                system("CLS");
                break;

                //case Accessories

            case 5:
            reapeat2:

                cout << "           ********************************************************************************************" << endl;
                cout << "                   Pats/Accessories of following Manaufacturer Company(Brands) cars are Available..." << endl;
                cout << "                                                1.Tesla_Inc" << endl;
                cout << "                                                2.Toyota_Motor_Corporation" << endl;
                cout << "                                                3.Volkswagen" << endl;
                cout << "                                                4.Ford_Motor_Company" << endl;
                cout << "                                                5.Honda\n"
                     << endl;
                cout << "           ********************************************************************************************\n\n"
                     << endl;
                cout << "                                              Enter Your Choice: ";
                cin >> input;
                system("CLS");

                //1.....

                if (input == '1')
                {
                    cout << "        ***********************************************************************************************" << endl;
                    cout << "                                      List Of All Parts Of Tesla_Inc Brand\n";
                    cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                    cout << "        " << setw(40) << left << "1.Engines" << endl;
                    cout << "        " << setw(40) << left << "2.Batteries " << endl;
                    cout << "        " << setw(40) << left << "3.Tyres " << endl;
                    cout << "        " << setw(40) << left << "4.Radiators " << endl;
                    cout << "        " << setw(40) << left << "5.Axles " << endl;
                    cout << "        ***********************************************************************************************\n\n"
                         << endl;

                    cout << "         Enter The Name Of Part You want to buy: ";
                    cin.ignore();
                    getline(cin, name_parts);
                    cout << "         Enter The Amount: ";
                    cin >> amount;

                    //code for validation

                    cout << "\n\n";
                    cout << "         Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                }

                //2..

                else if (input == '2')
                {
                    cout << "         ***********************************************************************************************" << endl;
                    cout << "                                      List Of All Parts Of Toyota_Motor_Corporation Brand\n";
                    cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                    cout << "        " << setw(40) << left << "1.Engines" << endl;
                    cout << "        " << setw(40) << left << "2.Batteries " << endl;
                    cout << "        " << setw(40) << left << "3.Tyres " << endl;
                    cout << "        " << setw(40) << left << "4.Radiators " << endl;
                    cout << "        " << setw(40) << left << "5.Axles " << endl;
                    cout << "        ***********************************************************************************************\n\n"
                         << endl;

                    cout << "         Enter The Name Of Part You want to buy: ";
                    cin.ignore();
                    getline(cin, name_parts);
                    cout << "         Enter The Amount: ";
                    cin >> amount;

                    //code for validation

                    cout << "\n\n";
                    cout << "         Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                }

                //3....

                else if (input == '3')
                {
                    cout << "        ***********************************************************************************************" << endl;
                    cout << "                                      List Of All Parts Of Volkswagen Brand\n";
                    cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                    cout << "        " << setw(40) << left << "1.Engines" << endl;
                    cout << "        " << setw(40) << left << "2.Batteries " << endl;
                    cout << "        " << setw(40) << left << "3.Tyres " << endl;
                    cout << "        " << setw(40) << left << "4.Radiators " << endl;
                    cout << "        " << setw(40) << left << "5.Axles " << endl;
                    cout << "        ***********************************************************************************************\n\n"
                         << endl;

                    cout << "         Enter The Name Of Part You want to buy: ";
                    cin.ignore();
                    getline(cin, name_parts);
                    cout << "         Enter The Amount: ";
                    cin >> amount;

                    //code for validation

                    cout << "\n\n";
                    cout << "         Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                }

                //4.......

                else if (input == '4')
                {
                    cout << "        ***********************************************************************************************" << endl;
                    cout << "                                      List Of All Parts Of Ford_Motor_Company Brand\n";
                    cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                    cout << "        " << setw(40) << left << "1.Engines" << endl;
                    cout << "        " << setw(40) << left << "2.Batteries " << endl;
                    cout << "        " << setw(40) << left << "3.Tyres " << endl;
                    cout << "        " << setw(40) << left << "4.Radiators " << endl;
                    cout << "        " << setw(40) << left << "5.Axles " << endl;
                    cout << "        ***********************************************************************************************\n\n"
                         << endl;

                    cout << "         Enter The Name Of Part You want to buy: ";
                    cin.ignore();
                    getline(cin, name_parts);
                    cout << "         Enter The Amount: ";
                    cin >> amount;

                    //code for validation

                    cout << "\n\n";
                    cout << "         Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                }

                //5....

                else if (input == '5')
                {
                    cout << "        ***********************************************************************************************" << endl;
                    cout << "                         List Of All Parts Of Honda Brand\n";
                    cout << "        " << setw(40) << left << "Name OF Part" << setw(40) << left << "Amount Available" << setw(40) << left << "Price" << endl;
                    cout << "        " << setw(40) << left << "1.Engines" << endl;
                    cout << "        " << setw(40) << left << "2.Batteries " << endl;
                    cout << "        " << setw(40) << left << "3.Tyres " << endl;
                    cout << "        " << setw(40) << left << "4.Radiators " << endl;
                    cout << "        " << setw(40) << left << "5.Axles " << endl;
                    cout << "        ***********************************************************************************************\n\n"
                         << endl;

                    cout << "         Enter The Name Of Part You want to buy: ";
                    cin.ignore();
                    getline(cin, name_parts);
                    cout << "         Enter The Amount: ";
                    cin >> amount;

                    //code for validation

                    cout << "\n\n";
                    cout << "         Press any Key For Main Menu: ";
                    getch();
                    system("CLS");
                }

                //wrong input

                else if ((input >= '6' || input <= '9') || ((input >= 'a' || input <= 'z') || (input >= 'A' || input <= 'Z')))
                {
                    cout << "       You Have Enter invalid Option....." << endl;
                    cout << "       Do you wanna try again(Y/N) :";
                    cin >> input;
                    system("CLS");
                    if (input == 'Y' || input == 'y')
                    {
                        goto reapeat2;
                    }
                    else if (input == 'n' || input == 'N')
                    {
                        break;
                    }
                    else if (!(input == 'Y' || input == 'y') && (input == 'n' || input == 'N'))
                    {
                        cout << "    You Have Enter Wrong ..." << endl;
                    }
                    cout << "        Press any Key For Main Menu.....:";
                    getch();
                    system("CLS");
                }

                break;

                //case for

            case 6:
                cout << "======================================================================================================" << endl;
                cout << "                                       User's Dashboard\n\n";
                cout << setw(40) << left << "UserName" << setw(40) << left << "Purchased Car" << endl;
                cout << endl;
                cout << "======================================================================================================" << endl;
                cout << "\n\n";

                cout << "                                Press any Key For Main Menu: ";
                getch();
                system("CLS");
                break;

                //case to sell car

            case 7:
                cout << "=========================================================================================================" << endl;
                cout << "                                         Sell Your Old Car\n";
                cout << "                           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                     << "\n\n";
                cout << "                                     Please Enter The Details..." << endl;
                cin.ignore();
                cout << "                                     Enter Brand Name Of your Car: ";
                getline(cin, Brand_Car);
                cout << "                                     Enter The Name & Model Number: ";
                getline(cin, Name_ModelNumber);
                cout << "                                     Please Enter The condition of Car(Good,Fine,Worst):  ";
                getline(cin, name_parts);
                cout << "=========================================================================================================" << endl;
                cout << "\n\n";
                cout << "                    You Request Has Been Submitted You will get msg when Final Action Has Done\n\n ";
                cout << "                                       Press any Key For Main Menu: ";
                getch();
                system("CLS");
                break;

                //case rent a car

            case 8:
                cout << "===================================================================================================================================================" << endl;
                cout << "                                              Rent a Car\n";
                cout << "                           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                     << "\n\n";
                cout << "                                        Available Cars For Rent..." << endl;
                cout << "**************************************************************************************************************************************************" << endl;
                cout << "                                                       All Cars With Details(Name,Brand,Price etc..)" << endl;
                cout << setw(30) << left << "ManuFacturer/Brand" << setw(40) << left << "Name and Model Number" << setw(40) << left << "Price" << setw(30) << left << "Available colors" << endl;
                cout << "\n";
                cout << "***************************************************************************************************************************************************" << endl;
                cin.ignore();
                cout << "                                       Enter Brand Name Of your Car: ";
                getline(cin, Brand_Car);
                cout << "                                       Enter The Name & Model Number: ";
                getline(cin, Name_ModelNumber);
                cout << "                                       Enter Colour IF available: ";
                getline(cin, Colour);
                cout << "                                        Enter No. of Days to rent a car: ";
                cin >> amount;
                cout << endl;
                cout << "===================================================================================================================================================" << endl;
                cout << "\n\n";
                cout << "                    You Request Has Been Submitted You will get msg when Final Action Has Done\n\n ";
                cout << "                                      Press any Key For Main Menu: ";
                getch();
                system("CLS");
                break;

                //case for servicing

            case 9:
                cout << "===================================================================================================================================================" << endl;
                cout << "                                       Service Processing Facility\n";
                cout << "                           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                cout << "                           Please Enter The Distance in KM Car Travelled Till now: ";
                cin >> amount;
                if (amount >= 2500)
                {
                    cout << "                                   Your Car Need Servicing Facility..." << endl;
                    cout << "            You Request Has Been Submitted You will get msg when Final Action Has Done\n\n ";
                }
                else if (amount < 2500)
                {
                    cout << "                   Your Vehicle Travelled " << amount << " But The Limit For Servicing is 2500KM\n";
                    cout << "                                   Do you want to service your car(Y/N): ";
                    cin >> input;
                    if (input == 'Y' || input == 'y')
                    {
                        cout << "                   You Request Has Been Submitted You will get msg when Final Action Has Done\n\n ";
                    }
                    else if (input == 'n' || input == 'N')
                    {
                        cout << "                               Thanks For Coming...\n\n";
                        cout << "===================================================================================================================================================" << endl;
                        cout << "                          Press any Key For Main Menu: ";
                        getch();
                        system("CLS");
                        goto start;
                    }
                    else if (!(input == 'Y' || input == 'y') || (input == 'n' || input == 'N'))
                    {
                        cout << "                             You Have Enter Wrong ..." << endl;
                    }
                }
                cout << "===================================================================================================================================================\n"
                     << endl;
                cout << "                                            Press any Key For Main Menu: ";
                getch();
                system("CLS");
                break;

                // logout

            case 10:
                cout << "                             Logout Successfully....." << endl;
                cout << "                          Press any key To login again..";
                getch();
                system("CLS");
                goto start;
                break;

                //Case To Exit

            case 0:
                cout << "Programmed Exited Successfully!!!.." << endl;
                return 0;
                break;

                //Deafault Case

            default:
                cout << "                       You have Entered Wrong Action..." << endl;
                cout << "                        Press any key for main menu: ";
                getch();
                system("CLS");
                break;
            }
        }
    }
    if (Choose_option != 1 && Choose_option != 2)
    {
        cout << "                                       Invalid Key Please Try again\n";
        cout << "                                       Press any key to try again......";
        getch();
        system("CLS");
        goto start;
    }

    return 0;
}