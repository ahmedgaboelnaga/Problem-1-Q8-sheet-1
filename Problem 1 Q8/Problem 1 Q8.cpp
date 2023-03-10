#include<iostream>

using namespace std;

int main() 
{
    //8. (Area and perimeter of a rectangle) Write a program that displays the area and perimeter of a rectangle with a width of 5.3 and height of 8.6 
    //using the following formula : area = width * height perimeter = 2 * (width + height)

    float width, height, area, perimeter;

    char A;

    cout << "If you want a default value write 'y' \nIf you want to chose number write 'n'\n";
    cin >> A;

    if (A == 'y') 
    {
        width = 5.3;
        height = 8.6;

        area = width * height;

        perimeter = (width + height) * 2;

        cout << "area=" << area << endl;

        cout << "perimeter=" << perimeter << endl;
    }
    else if (A == 'n')
    {
        cout << "Enter the value of width and height\n";
        cin >> width >> height;

        area = width * height;

        perimeter = (width + height) * 2;

        cout << "area=" << area << endl;

        cout << "perimeter=" << perimeter << endl;
    }
    
    return 0;
}