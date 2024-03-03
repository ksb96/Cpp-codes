//algo
//reverse an array of integer(vectors)
// [1,2,3] - input
// [3,2,1] - output

vector<int> reverseArray(vector <int>a){
    std:: vector<int> reversed;
    for(int i = a.size()-1; i>=0; i--){
        reversed.push_back(a[i]);
    }
    return reversed;
}