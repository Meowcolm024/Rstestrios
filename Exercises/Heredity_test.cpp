#include <iostream>
using namespace std;

int main()
{
    // initialize dominant gene and recessive gene
    char A = 'A', a = 'a';
    // initialize P(Parent) gene type & count
    char P[4] = {A,A,A,a};
    int P_count[2] = {120,190};
    // total/dominant/recessive gene count
    float total = 2 * (P_count[0] + P_count[1]);
    int dom = 0, rec = 0;
    // initialize F1 gene type
    float F1_freq[3]; // 0 -> AA, 1 -> Aa, 2 -> aa
    string F1[3] = {"AA","Aa","aa"};

    //calculate P's gene frequency
    for (int i = 0; i < 4; i++)
    {
        if (P[i] == A)
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
    float freq_dom = dom / total; //frequency of dominant gene
    float freq_rec = rec / total; //frequency of recessive gene

    // calculate F1's gene frequency
    F1_freq[0] = freq_dom * freq_dom;
    F1_freq[1] = freq_dom * freq_rec * 2;
    F1_freq[2] = freq_rec * freq_rec;

    // output
    for (int i = 0; i < 3; i++)
    {
        cout << F1[i] << ": " << F1_freq[i] << endl;
    }

    return 0;
}