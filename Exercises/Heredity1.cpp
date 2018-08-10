#include <iostream>
using namespace std;

int main()
{
    //init
    char P[4] = {'A','a','a','a'};  //gene type
    int P_count[2] = {180, 110};  //number
    int dom = 0, rec = 0; //domiant gene & recessive gene
    float total = 2 * (P_count[0] + P_count[1]); //total number of genes

    //main
    for (int i = 0; i < 4; i++)
    {
        if (P[i] == 'A')
        {
            if (i < 2)
                dom = dom + P_count[0];
            else   
                dom = dom + P_count[1];
        }else{
            if (i < 2)
                rec = rec + P_count[0];
            else   
                rec = rec + P_count[1];
        }
    }

    //calculation
    float freq_dom = dom / total; //frequency of dominant gene
    float freq_rec = rec / total; //frequency of recessive gene

    //output
    cout << "dominant gene frequency: " << freq_dom << endl;
    cout << "recessive gene frequency: " << freq_rec << endl;

    return 0;
}