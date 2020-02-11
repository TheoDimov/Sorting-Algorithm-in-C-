#include <iostream>
#include <array>
#include "colors.h"
using namespace std;

//////////////////////////////////////////////////////////////////////////
//			Function Declarations				//
//////////////////////////////////////////////////////////////////////////

void SWAP (int s[], int i, int j);
/* precondition:  s array has been filled, i is the index of the respective extremes
 * 		  of the array depending on the context of the j index (ex: if 1, the i would be
 * 		  the first index, and if 2 the i would be the last position index)
 * postcondition: the ith and jth are switched. If the digit in the jth position is 
 * 		  a 1, than the i position, which was s[0] is increased, so the useable first
 * 		  index has increased and the position of the old index saves the the jth 
 * 		  value (1 value). That same switch is performed if the jth position holds 
 * 		  a 2, but the ith value would be the last value in the array and the jth 
 * 		  value is than decremented as well as the ith value (the end of the array).
 * parameters: int s[]: the array to be used.
 *	       int i: the position of the index in which to switch with the present one.
 *	       int j: the digit in the process of being analyzed for it's contents. 
 */
 
void Sort_102 (int Digits[], int size);
/* precondition: Digits array is filled with the inputted string, size is the length of the
 *  	         inputted string minus 1 to remove the index of the '#'.
 * postcondition: Digits array is sorted with 1s first, then 0s, followed by 2s.
 * parameters: int Digits[]: the array to be sorted.
 * 	       int size: size of Digits array. 
 */

//////////////////////////////////////////////////////////////////////////
//			    Main Function				//
//////////////////////////////////////////////////////////////////////////

int main()
{

	// String declaration
	string S;
	// Decision string statement for re-do
	string  ans_prime;	
	
	//Loop for re-inputing sequence at end
	do
	{
		//Fancy Introduction:
        	cout << BOLD(FBLU("\n\n\t///////////////////////////////////////////\n"));
		cout << BOLD(FBLU("\t//                                       //\n"));
		cout << BOLD(FBLU("\t//         ")) << BOLD(FYEL(" Welcome to Sort_102!         ")) << BOLD(FBLU ("//\n"));
		cout << BOLD(FBLU("\t//                                       //\n"));
		cout <<	BOLD(FBLU("\t//  ")) << BOLD(FYEL ("This simple program will allow the   ")) << BOLD(FBLU ("//\n"));
		cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("user (you!) to input a string of     ")) << BOLD(FBLU ("//\n"));
		cout <<	BOLD(FBLU("\t//  ")) << BOLD(FYEL ("digits consisting of 1s,0s,and/or    ")) << BOLD(FBLU ("//\n"));
		cout <<	BOLD(FBLU("\t//  ")) << BOLD(FYEL ("2s.                                  ")) << BOLD(FBLU ("//\n"));
		cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("This program will output your sequ-  ")) << BOLD(FBLU ("//\n"));
		cout <<	BOLD(FBLU("\t//  ")) << BOLD(FYEL ("ence, but with the 1s in first, then ")) << BOLD(FBLU ("//\n"));
		cout <<	BOLD(FBLU("\t//  ")) << BOLD(FYEL ("0s, and finally 2s!                  ")) << BOLD(FBLU ("//\n"));     
		cout << BOLD(FBLU("\t//                                       //\n"));
		cout << BOLD(FBLU("\t///////////////////////////////////////////\n\n"));
				
		cout << BOLD(FGRN("Please enter your sequence and hit '#' when done!: \n"));
		cin >> S; //S string input
		
 cout << BOLD(FBLU("\t//                                       //\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("This simple program will allow the   ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("user (you!) to input a string of     ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("digits consisting of 1s,0s,and/or    ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("2s.                                  ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("This program will output your sequ-  ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("ence, but with the 1s in first, than ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//  ")) << BOLD(FYEL ("0s, and finally 2s!                  ")) << BOLD(FBLU ("//\n"));
                cout << BOLD(FBLU("\t//                                       //\n"));
                cout << BOLD(FBLU("\t///////////////////////////////////////////\n\n"));

                cout << BOLD(FGRN("Please enter your sequence and hit '#' when done!: \n"));
                cin >> S; //S string input

                //Declarations of the size for the Digits array, and the array itself
                int size = S.length() - 1;
                int Digits [size];

                //Transfer of the String S to the Digits array
                for (int c = 0; c < size; c++)
                {
                        Digits[c] = S[c] - '0';
                }

                //Use of the sorting function
                Sort_102 (Digits,size);

                // Output of the array after the sort
                                                                                                                                                                                   65,1-8        26%
		//Declarations of the size for the Digits array, and the array itself
		int size = S.length() - 1; 	
		int Digits [size];
		
		//Transfer of the String S to the Digits array
		for (int c = 0; c < size; c++)
		{
			Digits[c] = S[c] - '0';
		}
		
		//Use of the sorting function
		Sort_102 (Digits,size);

		// Output of the array after the sort
		cout << BOLD(FGRN("Now here is your sequence after Sort_102!: \n"));
		for (int f = 0; f < size; f++)
		{
			cout << Digits[f];
		}
		
		// Response input for re-engaging of the loop
		cout << BOLD(FYEL("\nIf you would like to go again, input 'Yes', otherwise input anything else: \n"));
		cin >> ans_prime;
		
	}while (ans_prime == "yes" || ans_prime == "Yes" || ans_prime == "y" || ans_prime == "Y");
	
	return 0;

}

//////////////////////////////////////////////////////////////////////////
//			Function Definitions				//
//////////////////////////////////////////////////////////////////////////

void SWAP (int s[], int i, int j)
{
	// Simple swap algorithm
	int temp;
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}

void Sort_102 (int Digits[], int size)
{
	// Declaration of the variable that represent first and last useable index. 
	int i = 0;
	int z = size-1;

	for (int j = 0; j <= z; j++)	
	{
		// Conditions for the sequence components
		if (j == i && Digits[j] == 1)
		{
			i++;
		}
		else if (Digits[j] == 1)
		{
			SWAP(Digits,i,j);
			i++;	// i is incremented to increase the representation
				// of the first index when a switch is performed.	
		}
		else if (Digits[j] == 2)
		{
		
			while (Digits[z] == 2 && z > j)
			{
				z--;
			}
		
			SWAP(Digits,z,j);
				z--;			// z is decremented to decrease the representation 
				j--;			// of the last index and the j value decremented in 
							// order to review the index that was switched so not
							// to skip it.
		
		}
		else if (Digits[j] == 0)
		{
			continue; // 0 values are left alone.
		}
		else 
		{
			cout << BOLD(FRED("!!!Sorry the string input contains incorrect digits, now exiting!!!\n"));
			exit(1); // Fail mechanism for the wrong input.
		}
	}
}

