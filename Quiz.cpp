
#include<iostream>
#include<string>
using namespace std;
int User_input_guess;/*user can input which option they want to select*/
int User_total_score;/*total score calculated by adding "score_for_current_question" for each question*/

class Questions
{
private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correct_option;
    int marks_for_current_question;
public:
    void question_storage(string,string,string,string,string,int,int);/*for inserting questions and options */
    void ask( );
};
void Questions::question_storage(string q,string o1,string o2,string o3,string o4,int ans,int m)
    {
    question=q;
    option1=o1;
    option2=o2;
    option3=o3;
    option4=o4;
    correct_option=ans;
    marks_for_current_question=m;
    }
    void Questions::ask()
    {
    cout<<endl;
    cout<<question<<endl;
    cout<<"1."<<option1<<endl;
    cout<<"2."<<option2<<endl;
    cout<<"3."<<option3<<endl;
    cout<<"4."<<option4<<endl;
    cout<<"ans: ";
    cin>>User_input_guess;
    cout<<endl;
    if(User_input_guess == correct_option)
        {
        cout<<"Your answer is correct"<<endl;
        User_total_score=User_total_score+ marks_for_current_question;
        }
    else
    {
        cout<<"Incorrect answer";
    }
    }

int main()
{
    cout<<".             Welcome to my Quiz             ."<<endl<<endl;
    string user_name;
    cout<<"Enter your name ";
    cin>>user_name;
    cout<<endl;
    int age;
    cout<<"How old are you ";
    cin>>age;
    cout<<endl;
    string response;
    cout<<"Hey "<<user_name<<" are you ready to take the quiz?(Y/N)";
    cin>>response;
    cout<<endl;
    if(response == "Y"){
        cout<<"best of luck"<<endl;
    }
    else{
        cout<<"k then bye";
        return 0;
    }


    Questions q1;
    Questions q2;
    Questions q3;
    Questions q4;
    Questions q5;
    Questions q6;
    Questions q7;
    Questions q8;
    Questions q9;
    Questions q10;
    Questions q11;
    Questions q12;
q1.question_storage("2+1=?","1","2","3","4",3,10);
q2.question_storage("2+1=?","1","2","3","4",3,10);
q3.question_storage("2+1=?","1","2","3","4",3,10);
q4.question_storage("2+1=?","1","2","3","4",3,10);
q5.question_storage("2+1=?","1","2","3","4",3,10);
q6.question_storage("2+1=?","1","2","3","4",3,10);
q7.question_storage("2+1=?","1","2","3","4",3,10);
q8.question_storage("2+1=?","1","2","3","4",3,10);
q9.question_storage("2+1=?","1","2","3","4",3,10);
q10.question_storage("2+1=?","1","2","3","4",3,10);
q11.question_storage("2+1=?","1","2","3","4",3,10);
q12.question_storage("2+1=?","1","2","3","4",3,10);
q1.ask();
q2.ask();
q3.ask();
q4.ask();
q5.ask();
q6.ask();
q7.ask();
q8.ask();
q9.ask();
q10.ask();
q11.ask();
q12.ask();


cout<<" your total score is "<<User_total_score<<" out of 120"<<endl<<endl;

if(User_total_score>=80)
{
    cout<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl;
    cout<<".       Congratulations on passing the test        ."<<endl;
    cout<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl;
}
else
    {
     cout<<"sorry you failed the test"<<endl<<"Better luck next time";
    }
}
