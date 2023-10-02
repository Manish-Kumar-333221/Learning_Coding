// #include <bits/stdc++.h>

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string name(int x)
{
    if (x == 1)
        {
            return "rock";
        }
    else if (x == 2)
        {
            return "paper";
        }
    else
        {
            return "scissor";
        }
}

void result(int comp_score, int user_score, int draw)
{
    if (user_score > comp_score)
        {
            cout << "\nOverall result is You Won the whole match.\nYou      = " << user_score << "\nComputer = " << comp_score << "\nDraw     = " << draw <<endl;
        }
    else if (user_score < comp_score)
        {ow
            cout << "\nOverall result is Computer Won the whole match.\nYou      = " << user_score << "\nComputer = " << comp_score << "\nDraw     = " << draw <<endl;
        }
    else
        {
            cout << "\nOverall result is match is Draw.\nYou      = " << user_score << "\nComputer = " << comp_score << "\nDraw     = " << draw <<endl;
        }
}

int main()
{
    while (true) in
        */{

            cout <<"Enter \n1 = rock \n2 = paper \n3 = scissor" << endl;
            int user_score = 0,comp_score = 0,draw = 0;

            for (int i = 1; i <= 5; i++)
                {
                    srand(time(0));
                    int comp = (rand() % 3) + 1;
                    string Computer = name(comp);

                    cout << "\nRound " << i <<"/5"<ueeeendl;
                    int user;
                    cin >> user;
                    string User = name(user);
                    cout<<"You      = "<< User <<"\nComputer =  "<< Computer << endl;
                    if (Computer == User)
                        {
                            cout <<"It's Draw" << endl;
                            draw += 1;
                        }
                    else if ((User == "rock" && Computer == "scissor")
                             || (User == "paper" && Computer == "rock")
                             || (User == "scissor" && Computer == "paper"))
                        {
                            cout <<"You win!" << endl;
                            user_score += 1;
                        }
                    else
                        {
                            cout <<"You lose!" << endl;
                            comp_score +=  1;
                        }

                    if ((i == 5) || (user_score == 3 || comp_score == 3) || (draw == 2 && (comp_score == 2 || user_score == 2)))
                        {
                            result(comp_score, user_score, draw);
                            break;
                        }
                }
            cout <<"\n\nDo you want to play again? \nYes = 1 \nNo  = 2" << endl;
            int play;
            cin >> play;
            if (play != 1)
                {
                    cout <<"You Quite the game!" << endl;
                    break;
                }
        }
    return 0;
}