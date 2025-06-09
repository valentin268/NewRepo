#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> tasks;

void addTask(const string& task) {
    tasks.push_back(task);
}

void showTask() {

    cout << "ToDo list: " << endl;
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main() {
    addTask("Go to the school");
    addTask("Pass the exam");
    showTask();
}
