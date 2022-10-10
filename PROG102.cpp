/*A math teacher wants to manage grades of a class. He asks you to help him to write a small application to do that. He needs to enter student IDs, student’s grades and store these information into 2 separate arrays (integer array for IDs and float array for grades). Then he needs to print all student IDs together with their grades. Finally, he needs to know which student has highest grade and lowest grade. Your program should be menu based with the options above. When an option is done, the program should go back to the main menu so he can choose another option. There should be an option to quit program.*/

#include <iostream>
#include <string.h>
using namespace std;

int EnteringAndStoraging(), Listing(), Highest(), Lowest(), Menu();
int x, i;
int choice;
float Grades[777];
int IDs[777];

//Function entering and storaging
int EnteringAndStoraging()
{
    cout << "Enter the number of student IDs and their grades: " << endl;
    cin >> x;
    cout << "The number of student IDs and their grades you just entered are: " << x << endl;
    cout << "Please enter your information according to STUDENT IDs and GRADE respectively now." "\n" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> IDs[i];
        cin >> Grades[i];
        while (Grades[i] > 10 || Grades[i] < 1) {
            cout << "Nhap lai: ";
            cin >> Grades[i];
        }
    }
    return 0;
}

//Function listing
int Listing()
{
    for (int i = 0; i < x; i++)
    {
        cout << "ID: " << IDs[i] << "\t\tGrade: " << Grades[i] << endl;
    }
    return 0;
}

//Fuction highest score
int Highest()
{
    float max = 0;
    int IDMax = 0;
    for (int i = 0; i < x; i++)
    {
        if (max < Grades[i])
        {
            IDMax = IDs[i];
            max = Grades[i];
        }
    }
    for (int i = 0; i < x; i++) {
        if (Grades[i] == max) {
            cout << "The student " << IDs[i] << " has highest grade " << Grades[i] << endl;
        }
    }
    return 0;
}

//Fuction lowest score
int Lowest()
{
    float min = Grades[0];
    int IDMin = IDs[0];
    for (int i = 0; i < x; i++)
    {
        if (min > Grades[i])
        {
            IDMin = IDs[i];
            min = Grades[i];
        }
    }
    for (int i = 0; i < x; i++) {
        if (Grades[i] == min) {
            cout << "The student " << IDs[i] << " has lowest grade " << Grades[i] << endl;
        }
    }
    return 0;
}

//Bang menu
int Menu()
{
    cout << "\n" << "************************************************* " << endl;
    cout << "1. To enter and store student IDs and student grades. " << endl;
    cout << "2. To list all student IDs and student grades." << endl;
    cout << "3. To print the student has highest grade. " << endl;
    cout << "4. To print the student has lowest grade. " << endl;
    cout << "5. To stop the application. " "\n" << endl;
    cout << "Entering 1, 2, 3, 4 or 5 depending on the case you want: " "\n" << endl;
    cin >> choice;
    return 0;
}

int main()
{
    do
    {
        //Bang menu options
        Menu();

        switch (choice)
        {
        case 1: //Truong hop 1: nhap va in ID va ma lop cua hoc sinh
            EnteringAndStoraging();
            break;

        case 2: // Truong hop 2: In ra man hinh tat ca ID va diem cua hoc sinh
            Listing();
            break;

        case 3: // Truong hop 3: In ra man hinh hoc sinh co diem so cao nhat
            Highest();
            break;

        case 4: // Truong hop 4: In ra man hinh hoc sinh co diem so thap nhat
            Lowest();
            break;

        case 5: // Truong hop 5: Dung chuong trinn
            cout << "Stop the application. " "\n" << endl;
            break;

        default: //khong thuoc nhung truong hop tren
            cout << "Invalid input" << endl;
            while (choice > 5 || choice < 0)
            {
                cout << "Try again" << endl;
                cin >> choice;
            }
            break;
        }
    } while (choice < 5);
    cout << "************************************************* " << endl;
}