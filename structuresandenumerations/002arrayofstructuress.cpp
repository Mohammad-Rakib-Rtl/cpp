#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>
#include <vector>

using namespace std;

struct Movies {
    string title;
    int releaseYear;
};



int main() {

    vector<Movies> movies;
    // Movie movie {"Fight Club", 1998};
    movies.push_back({"Fight Club", 1998});
    movies.push_back({"Fight Club 2", 2008});
    movies.push_back({"Fight Club 3", 2926});

    // cout << movies[2].title << endl;

    // for (Movie movie: movies)
    // for (auto movie: movies) 
    for (const auto& movie: movies) 
        cout << movie.title << endl;


    return 0;
}