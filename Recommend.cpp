#include <iostream>
#include<algorithm>

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
        {3,4},{3,2},{1,2},{2,3}
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

    //finding the most popular type & tag
    int a = max(type_count[0],type_count[1]);
    int b = max(type_count[2],type_count[3]);
    int max_type = max(a,b);

    int c = max(tag_count[0],tag_count[1]);
    int d = max(tag_count[2],tag_count[3]);
    int max_tag = max(c,d);

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