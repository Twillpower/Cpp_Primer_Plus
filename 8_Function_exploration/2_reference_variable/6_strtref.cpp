#include <iostream> 
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float precent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);

int main(int argc, char const *argv[])
{
    free_throws one     = {"Ifelsa Branch", 13, 14};
    free_throws two     = {"Andor Knott",   10, 16};
    free_throws three   = { "Minnie Max",   7,  9};
    free_throws four    = {"Whily Looper",  5,  9};
    free_throws five    = {"Long Long",     6,  14};
    free_throws team    = {"Throwgoods",    0,  0};
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
    dup = accumulate(team, five);
    std::cout << "Displaying team: \n"; 
    display(team);
    std::cout << "Displaying dup after assignment: \n";
    display(dup);
    set_pc(four);
    accumulate(dup , five) = four ;
    std::cout << "Display ing dup after ill-advised assignment:\n";
    display(dup);

    return 0;
}

void display(const free_throws &ft)
{
    using namespace std;
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t'; 
    cout << "Attempts : " << ft.attempts << '\t'; 
    cout << "Percent: " << ft.precent << '\n';
}

void set_pc(free_throws &ft)
{
    if(ft.attempts != 0)
        ft.precent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.precent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
