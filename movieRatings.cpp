#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>movieTitles;
    vector<int> movieRatings;
    string title;
    int rating;

    for(int i=0; i<5; i++)
    {
        cout << "Enter Movie Tile Name:";
        getline(cin, title);
        cout << "Enter Movie Rating:";
        cin >> rating;
        cin.get();

        // cout << "You Rated " << title << " a " << rating << "/10" << endl;
        movieRatings.push_back(rating);
        movieTitles.push_back(title);
    }
    for(auto i=0; i<5; i++)
    {
        cout << "You Rated " << movieTitles[i] << " a " << movieRatings[i] << "/10" << endl;
    }
    return 0;
}