#include <iostream>

struct users
{       
    int type; 
    int tag;  
};

int max(int arr[],int len)
{
    int max = arr[0], i = 1;

    while (i < len)
    {
        if (max <= arr[i])
            max = arr[i];
        i++;
    }

    return max;
}

int main()
{
    using namespace std;

    const int user_size = 4;
    const int type_size = 4;
    const int tag_size = 4;

    //defining types & tags
    char types[type_size] = {'A','B','C','D'};
    int tags[tag_size] = {1,2,3,4};

    //defining samples
    users friends[user_size] =
    {
        {3,3},{3,2},{1,4},{2,4}
    };

    int type_count[user_size];
    int tag_count[user_size];

    for(int s = 0; s < user_size; s++)
    {
        type_count[s] = 0;
        tag_count[s] = 0;
    }

    for (int i = 0; i < user_size; i++)
    {
        for (int p = 0; p < type_size; p++)
        {
            if (friends[i].type == (p+1))
                type_count[p]++;
        }
        for (int q = 0; q < tag_size; q++)
        {
            if (friends[i].tag == (q+1))
                tag_count[q]++;
        }
    }

    int len_type = sizeof(type_count)/sizeof(int);
    int max_type = max(type_count,len_type);
    int len_tag = sizeof(tag_count)/sizeof(int);
    int max_tag = max(tag_count,len_tag);

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