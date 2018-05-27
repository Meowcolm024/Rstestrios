#include <iostream>
#include <algorithm>

struct users
{       
    int type; 
    int tag;  
};

int main()
{
    using namespace std;

    const int user_size = 4;
    const int type_size = 4;
    const int tag_size = 4;
    char types[4] = {'A','B','C','D'};
    int tags[4] = {1,2,3,4};

    //defining samples
    users friends[user_size] =
    {
        {3,3},{3,3},{1,2},{2,3}
    };

    //remember to chang the list
    int type_count[user_size] = {0,0,0,0};
    int tag_count[user_size] = {0,0,0,0};

    for(int i = 0; i < user_size; i++)
    {
        for(int p = 0; p < type_size; p++)
        {
            if (friends[i].type == (p+1))
                type_count[p]++;
        }
        for(int q = 0; q < tag_size; q++)
        {
            if (friends[i].tag == (q+1))
                tag_count[q]++;
        }
    }

    int len1=sizeof(type_count)/sizeof(int);
    int max_type = *max_element(type_count,type_count + len1);

    int len2=sizeof(tag_count)/sizeof(int);
    int max_tag = *max_element(tag_count,tag_count + len2);

    //output recommendation
    for (int j = 0; j < user_size; j++)
    {
        if (max_type == type_count[j])
            cout << "Recommended type: " << types[j] << endl;
    }
    for (int k = 0; k < user_size; k++)
    {
        if (max_tag == tag_count[k])
            cout << "Recommended tag: " << tags[k] << endl;
    }
   
    return 0;
}