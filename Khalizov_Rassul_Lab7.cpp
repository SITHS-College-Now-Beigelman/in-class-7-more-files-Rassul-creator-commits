#include <iostream>   // enables inputs and outputs operations
#include <fstream> 
#include <string> 

using namespace std; 

int main () {
    ifstream game_scores; // make game_scores the variable that allows you to input stuff into the txt file
    ofstream outgame_scores; // outputs the results into this txt file

    game_scores. open("game_scores.txt"); 
    outgame_scores. open("outgame_score.txt"); // opens the txt file

    double score1, score2, score3;
    string name; 
    while(game_scores >> name >> score1 >> score2 >> score3){
        // allows for the input of score1, score2, score3 from the game_scores.txt

        // calculates the average by multiplying the numbers by the amount of percent that they are worth and then adding them together
        double average = score1 * 0.2 + score2 * 0.3 + score3 * 0.5;

        // if the average score is greather than 2000, it prints out that message in the txt file 
        if(average > 2000){
            outgame_scores << name << " Congrats! You are an Expert!" << endl; 
            }
            // if the average score is equal to and less than and also greather than 1800, the following message is printed
            else if(average <= 2000 && average > 1800){
            outgame_scores << name << " Master - Good Job!" << endl; 
            }
            // if the average score is euqal to and less than but also greater than 1500, the following message is printed 
            else if(average <= 1800 && average > 1500){
            outgame_scores << name << " Advanced - Good Job!" << endl;
            }
            // if the average score is equal to and less than 1600 but also greater than 1000, the following message is printed
            else if(average <= 1500 && average > 1000){
            outgame_scores << name << " Intermediate" << endl;
            }
            //  if the average is less than 1000, the following message is printed
            else if(average < 100){
            outgame_scores << name << " Beginner - Keep Practicing!" << endl;
            }     
    }
    /* John Congrats! You are an Expert!
    Jack Beginner - Keep Practicing!
    Jacob Congrats! You are an Expert!
    */
    return 0;
}
