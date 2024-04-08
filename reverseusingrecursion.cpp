#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int> &str, int tar) {
    if (str.empty()) {
        str.push(tar); // Base case: if stack is empty, push the target element
        return; 
    }
    
    int temp = str.top();
    str.pop();
    bottom(str, tar); // Recursive call to push the target element to the bottom
    
    str.push(temp); // Push the elements back onto the stack after the recursive call
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();
    reverse(s);
    bottom(s,target);

}int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Print original stack
    cout << "Original stack: ";
    stack<int> temp = s; // Create a temporary stack to preserve the original elements
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the stack
    reverse(s);

    // Print reversed stack
    cout << "Reversed stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
