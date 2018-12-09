#include <iostream>
using namespace std;

struct box 
{
    char maker[40]; 
    float height; 
    float width; 
    float length; 
    float volume;
};

void show_data(box thebox);
void get_volume(box &thebox);

int main()
{
    box thebox = {"Rin", 100.0, 50.0, 150.0, 0.0};
    show_data(thebox);
    cout << "-------" << endl;
    get_volume(thebox);
    show_data(thebox);
    return 0;
}

void show_data(box thebox)
{
    cout << "maker: " << thebox.maker << endl;
    cout << "height: " << thebox.height << endl;
    cout << "width: " << thebox.width << endl;
    cout << "length: " << thebox.length << endl;
    cout << "volume: " << thebox.volume << endl;
}

void get_volume(box &thebox)
{
    thebox.volume = thebox.height * thebox.width * thebox.length;
}