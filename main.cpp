/*
Title: KBC
Description: This is a fun game to make money using your IQ.Play and have fun!
Author: Nusrat Jahan Aliza
ID: 221-115-076
Date: 16,Nov,2023
Link:
*/

#include<iostream>
#include<string>

using namespace std;

struct TempLate
{
    string question,options;
    int answear;
};

string const intro = "\t\t\t\tWelcome To The KBC";
int totalPoint;
string name;
int const numberOfQuestions = 10;
int level[] = {2000,5000,50000,100000,5000000,10000000};
TempLate questions[numberOfQuestions];


//Have all question for the participates
void generateQuestions()
{
    questions[0].question = "Google is a Browser or a Search Engine?";
    questions[0].options = "1.Browser \t\t2.Search Engine \n3.Assest \t\t4.None of them\n";
    questions[0].answear = 2;

    questions[1].question = "Who is the founder of Facebook?";
    questions[1].options = "1.Andrew Maclin \t\t2.Mark Zuckerberg \n3.Mark Adon \t\t4.None of the above mentioned\n";
    questions[1].answear = 2;

    questions[2].question = "Select the example of application software of computer:";
    questions[2].options = "1.Ms Word \t\t2.Ms Excel \n3.Both A and B \t\t4.MS-DOS\n";
    questions[2].answear = 3;

    questions[3].question = "Which was the world's first successful electronic computer?";
    questions[3].options = "1.PARAM \t\t2.CRAY-1 \n3.Pascaline \t\t4.ENIAC electronic\n";
    questions[3].answear = 4;

    questions[4].question = "Which of the following is also called translator?";
    questions[4].options = "1.Data representation \t\t2.MS - DOS \n3.OperatingSystem \t\t4.Language Processor\n";
    questions[4].answear = 4;

    questions[5].question = "How the quality of printer is measured?";
    questions[5].options = "1.Alphabet per strike \t\t2.Words per Inch \n3.Strike per Inch \t\t4.Dots per Inch \n";
    questions[5].answear = 4;

    questions[6].question = "Which of the following is the first calculating device?";
    questions[6].options = "1.Abacus \t\t2.Calculator \n3.Turing \t\t4.Machine\n";
    questions[6].answear = 1;

    questions[7].question = "'OS' computer abbreviation usually means ?";
    questions[7].options = "1.Order of Significance \t\t2.Open Software \n3.Operating System \t\t4.Optical Sensor\n";
    questions[7].answear = 3;

    questions[8].question = "Who invented mechanical calculator called Pascaline?";
    questions[8].options = "1.Charles Babbage \t\t2.Blaise Pascal \n3.Alan Turing \t\t4.Lee De Forest\n";
    questions[8].answear = 2;

    questions[9].question = "Who among the following considered as the 'father of artificial intelligence'?s";
    questions[9].options = "1.John McCarthy \t\t2.Lee De Fores \n3.Charles Babbage \t\t4.JP Eckert\n";
    questions[9].answear = 1;
}

void startGame()
{
    int i = 0;
    int reply;
    char serial = 'A';
    while(numberOfQuestions>i)
    {
        int reply;
        cout << serial++ <<". " << questions[i].question << endl;
        cout << questions[i].options << endl;
        cout<< "Enter the number between(1-4): ";
        cin >> reply;
        if(!(reply>0 &&reply<=4))
        {
            cout << endl<< endl;
            cout << "\t\tYou are banned for further hanging!" <<endl;
            cout << "\t\t  Input Must Number Between(1-4)" <<endl;
            break;
        }
        if(reply!=questions[i].answear)
        {
            break;
        }
        //level to earned money
        if(i==0) totalPoint = level[0];
        else if(i==1) totalPoint = level[1];
        else if(i==3)totalPoint = level[2];
        else if(i==5)totalPoint = level[3];
        else if(i==9)totalPoint = level[4];
        else if(i==8)totalPoint = level[5];
        cout<<endl;
        i++;
    }
}

void footerText()
{
    cout << endl;
    cout << "========================================="<<endl;
    if(totalPoint==10000000)
    {
        cout << "Congratulation! You are achieve the highest prize " << name;
    }
    else
    {
        cout << "Ops!" << endl;
        cout << "Good luck next time! " << name;
    }
    cout << endl;
    cout <<"Your Total Wining Prize Money: " << totalPoint << "TK."<<endl;
    cout << "========================================="<<endl;

}

void copyright()
{
    cout << "\t\t\t";
    cout<< "Reserved By Nusrat Jahan Aliza, 2023" << endl;
}


int main()
{
    cout<< intro << endl;
    generateQuestions();
    //Participate name Get
    cout << "TYPE YOUR NAME: ";
    cin >> name;
    //staring the game
    startGame();
    //message after the play
    footerText();
    copyright();
    return 0;
}
