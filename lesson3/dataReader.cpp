#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <chrono>

using namespace std;
using namespace std::chrono;

vector<string> covidData(){
    vector<string> data;
    string data_file_name = "C:/Users/nikol/Desktop/COVID-19_Case_Surveillance_Public_Use_Data", MyText;
    ifstream MyFiletoRead(data_file_name);
    while (getline (MyFiletoRead, MyText))
    {
        data.push_back(MyText);
    }
    MyFiletoRead.close();
    return data;
    
}

void PrintNumberofLines(const vector<string>& lines_data){
    cout<<lines_data.size()<<" Lines"<<endl;
}

int main() {
    // vector<string> DataCovid;
    // auto start = steady_clock::now();
    // DataCovid = covidData();
    // auto end = steady_clock::now();
    // cout<<"covidData() "<<duration_cast<milliseconds>(end-start).count()<<"ms"<<endl;

    auto start = steady_clock::now();
    // PrintNumberofLines(DataCovid);
    auto end = steady_clock::now();
    cout<<"PrintNumberofLines(DataCovid) "<<duration_cast<milliseconds>(end-start).count()<<"ms"<<endl;

    return 0;
}