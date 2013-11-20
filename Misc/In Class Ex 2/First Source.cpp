#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

const int arraySize = 5;
int arrays[arraySize] = {1, 3, 2, 5, 4};
int insert;

void linearSort(vector<int> &vec){
    for(int next = 1 ; next < arraySize ; next++){
        insert = vec[next];
        int moveItem = next;
    while((moveItem > 0) && (vec[moveItem - 1] > insert)){
        vec[moveItem] = vec[moveItem - 1];
        moveItem--;
        }
    vec[moveItem] = insert;
    }
    for(int i = 0 ; i < arraySize ; i++){
        cout << vec[i] << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> vec(arrays, arrays + arraySize);
    cout << "This is the vector before sorting:\n";
for(int i = 0 ; i < arraySize ; i++){
    cout << vec[i] << " ";
}
    cout << "\n";


    cout << "This is the vector after sorting:\n";
    linearSort(vec);

system("pause");
return 0;
}
