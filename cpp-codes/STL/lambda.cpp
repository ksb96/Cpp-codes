// a type of a function without a name that can be created as an expression
//               OR
// anonymous function object, that allow us to write short code snippet.
// lambdas have capture list[] - where local variables can be captured by reference or copy. Parameter list() & lambda body{logic}

// 1
//container declare
std::array<int> arr = [ 1, 2, 3, 4, 5, 6 ];
auto isEven{ //function declare
    //lambda functions
    [](int i) 
    {
        return ((i % 2) == 0);
    }};
return std::all_of(arr.begin(), arr.end(), isEven); // return wheather all of the elements in the array are even

// 2
auto addNumber{
    [](int a, int b)
    {
        return (a + b);
    }};
addNumber(5, 5);
return 0;

// 3
auto l - [] { // l - local variable
    std::cout << "hello";
};
l();
l();
l();