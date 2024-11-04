#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Defines variables
    ifstream game_scores; 
    ofstream outgame_scores;
    string playername1;
    double score1_1;
    double score1_2;
    double score1_3;

    double total_1;

    string playername2;
    double score2_1;
    double score2_2;
    double score2_3;

    double total_2;

    string playername3;
    double score3_1;
    double score3_2;
    double score3_3;

    double total_3;



    game_scores.open("games.txt"); //opens the file named inData.txt
    outgame_scores.open("outgame_scores.txt");  // opens the file named outData.txt

    game_scores >> playername1 >> score1_1 >> score1_2 >> score1_3; 
    total_1 = (score1_1 * 0.2) + (score1_2 * 0.3) + (score1_3 * 0.5);

    if(total_1 < 1000){
        outgame_scores << playername1 << " Beginner - Keep Practicing!" << endl; 

    } else if(total_1 >= 1000 && total_1 < 1500){
        outgame_scores << playername1 << " Intermediate" << endl; 
    
    } else if (total_1 >= 1500 && total_1 < 1800){
        outgame_scores << playername1 << "Advanced - Good Job!" << endl;

    } else if (total_1 >= 1800 && total_1 < 2000){
        outgame_scores << playername1 << "Master - Good Job!" << endl; 

    } else if(total_1 > 2000){
        outgame_scores << playername1 << "Congrats! You are an Expert!" << endl; 

    } else{
        outgame_scores << "input the player name, first score, second score, third score" << endl; 
    }


    game_scores >> playername2 >> score2_1 >> score2_2 >> score2_3; 
    total_2 = (score2_1 * 0.2) + (score2_2 * 0.3) + (score2_3 * 0.5);

    if(total_2 < 1000){
        outgame_scores << playername2 << " Beginner - Keep Practicing!" << endl; 

    } else if(total_2 >= 1000 && total_2 < 1500){
        outgame_scores << playername2 << " Intermediate" << endl; 

    } else if (total_2 >= 1500 && total_2 < 1800){
        outgame_scores << playername2 << "Advanced - Good Job!" << endl;

    } else if (total_2 >= 1800 && total_2 < 2000){
        outgame_scores << playername2 << "Master - Good Job!" << endl; 

    } else if(total_2 > 2000){
        outgame_scores << playername2<< "Congrats! You are an Expert!" << endl; 

    } else{
        outgame_scores << "input the player name, first score, second score, third score" << endl; 
    }

    game_scores >> playername3 >> score3_1 >> score3_2 >> score3_3; 
    total_3 = (score3_1 * 0.2) + (score3_2 * 0.3) + (score3_3 * 0.5);

    if(total_3 < 1000){
        outgame_scores << playername3 << " Beginner - Keep Practicing!" << endl; 

    } else if(total_3 >= 1000 && total_3 < 1500){
        outgame_scores << playername3 << " Intermediate" << endl; 

    } else if (total_3 >= 1500 && total_3 < 1800){
        outgame_scores << playername3 << "Advanced - Good Job!" << endl;

    } else if (total_3 >= 1800 && total_3 < 2000){
        outgame_scores << playername3 << "Master - Good Job!" << endl; 

    } else if(total_3 > 2000){
        outgame_scores << playername3 << "Congrats! You are an Expert!" << endl; 

    } else{
        outgame_scores << "input the player name, first score, second score, third score" << endl; 
    }

    
    return 0; 
}
