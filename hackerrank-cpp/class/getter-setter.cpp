// class +getter & setter
#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    int age, standard;
    string first_name, last_name;
public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string fn)
    {
        first_name = fn;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string ln)
    {
        last_name = ln;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_standard(int st)
    {
        standard = st;
    }
    int get_standard()
    {
        return standard;
    }

    // string to_string()
    // {
    //     stringstream ss;
    //     char c = ',';
    //     ss << age << c << first_name << c << last_name << c << standard;
    //     return ss.str();
    // }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    // cout << st.to_string();
    cout << st.age <<","<<st.first_name<<","<<st.last_name<<","<<st.standard<<"."<<'\n';

    return 0;
}