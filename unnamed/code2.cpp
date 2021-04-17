#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CalculateDistance(const string& DepartureLocation, const string& DestinationLocation){
    return (DepartureLocation.size()+DestinationLocation.size())*10;
}

class Travel{
    private;
        string DepartureLocation = "";
        string DestinationLocation = "";
        int Distance = 0;
    public:
        void SetDepartureLocation(string DepLoc){
            DepartureLocation = DepLoc;
            Distance = CalculateDistance(DepartureLocation, DestinationLocation);
        }
        void SetDestinationLocation(string DestLoc){
            DestinationLocation = DestLoc;
            Distance = CalculateDistance(DepartureLocation, DestinationLocation);
        }
}

int main {
    Travel t;
    t.SetDepartureLocation("Tbilisi");
    t.SetDestinationLocation("Sokhumi");
    return 0;
}