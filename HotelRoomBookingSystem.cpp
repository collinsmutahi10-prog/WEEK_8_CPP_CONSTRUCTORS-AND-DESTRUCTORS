/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE
  GROUP B
  YERA 2*/

#include <iostream>
using namespace std;
class RoomBooking
{
private:
    string GuestName;
    int RoomNumber, DaysBooked;

public:
    RoomBooking(string name, int room, int days)
    {
        GuestName = name;
        RoomNumber = room;
        DaysBooked = days;
        cout << "Room Booking Confirmed" << endl;
    }
    void displayBooking()
    {
        cout << "Name of the GUest:" << GuestName << endl;
        cout << "Room Number:" << RoomNumber << endl;
        cout << "Number of Days Booked:" << DaysBooked << endl;
    }
    ~RoomBooking()
    {
        cout << "Booking Ended, Room Released!" << endl;
    }
};
int main()
{
    RoomBooking room("james", 24, 3);
    room.displayBooking();
    return 0;
}