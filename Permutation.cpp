#include <iostream>

int main()
{
    using namespace std;
    int number[5];
    int h;
    int j = 1;
    int k = 0;
    //number input
    for (int i = 0; i < 5; i++)
    {
        cout << "Input: ";
        cin >> number[i];   
    };
    //permutate
    while (((number[0] <= number[1] && number[1] <= number[2]) && (number[2] <= number[3] && number[3] <= number[4])) == false)
    {   
        if (number[j] < number[k]) //swap the numbers if the current one is larger than the prior one
        {
            h = number[j];
            number[j] = number[k];
            number[k] = h;
            j++; 
            k = j - 1;
        }else{ //move to the next number if the current one is smaller than the prior one
            j++;
            k = j -1;
        };
        
        if (j > 5) //check overflow
        {
            j = 1;
            k = j - 1;
        };
    };
    
    cout << "Permutation: " << endl;
    //number output
    for (int l = 0; l < 5; l++)
    {
        cout << number[l] << " ";
    };
    
    cout << endl;
    
    return 0;
}