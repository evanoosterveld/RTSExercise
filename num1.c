/* 
Usage, complile and run this c file with all command line arguements for a given array followed by the input number.
For example, for the array [1,2,4,5] with 3 as the input number, run it as ./num1 1 2 3 4 5 3
Authored by Evan Oosterveld 
May 27, 2021 
*/

#include <stdio.h>
int main(int argc, char *argv[])
{

    if (argc <= 1)
    {
        printf("No input given.\n");
    }
    else if (argc == 2)
    {
        printf("Must have more than one number given as the array and one as the number to be checked.\n");
    }
    else
    {

        int arrayLength = argc - 2;
        int intArray[arrayLength];
        int inputNum = atoi(argv[argc - 1]); // Grab the last command line argument.
        int above = 0;
        int below = 0;
        //These for loops could have been combined however this problem seemed to reference
        //an already constructed array, so that is done before any value comparisons occur.

        //Array construction
        for (int i = 1; i <= arrayLength; i++)
        {
            intArray[i - 1] = atoi(argv[i]);
        }

        //Value checking, no behavior defined for when a number is equal to inoutted number.
        for (int i = 0; i < arrayLength; i++)
        {
            if (intArray[i] > inputNum)
            {
                above++;
            }
            else if (intArray[i] < inputNum)
            {
                below++;
            }
        }
        printf("Above:%d Below:%d\n", above, below);
    }
}