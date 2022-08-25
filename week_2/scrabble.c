#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
}

int compute_score(string word)
{
    // variables declaration
    int i, sum_of_word = 0, number;
    char upper;

    //loop over the given string
    for (i = 0; i < strlen(word); i++)
    {
        //convert to uppercase
        upper = toupper(word[i]);
        // check and use for only alphabets
        if (upper >= 'A' && upper <= 'Z')
        {
            //find the position of the number in the alphabet
            number = (upper - 'A') + 1;
            //use position as index to find the number in points array and add to sum
            sum_of_word += POINTS[number - 1];
        }
    }
    return sum_of_word;
}
