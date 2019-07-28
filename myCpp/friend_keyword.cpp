/* 
https://www.geeksforgeeks.org/friend-class-function-cpp/
a Class can declare many other classes/functions as its friend.
*/
#include <iostream>
#include <string>
 
//class user;
class user;
class supervisor {
    private:
    int m;
    public:
    supervisor() {
        std::cout << "New supervisor is created." << '\n';
    }
    void set_user_online_hours(user& user_object, int num);
    void show_user_online_hours(user& );
};

class user {
    // friend functions/classes can be declared here
    friend void supervisor::show_user_online_hours(user& user_object);
private: 
    int money;
    int online_hours = 0;
public:
    std::string name;
    int u_id;
    // constructor
    user(std::string user_name = "unknown", int user_object = 0, int initial_money = 0) : name(user_name), u_id(user_object), money(initial_money) {
        std::cout << "New user is created." << '\n';
    }
    // actually friend classes of a class can be declared anywhere in the class's implementation 
    friend class admin;     // Friend Class
    friend void supervisor::set_user_online_hours(user& user_object, int num); // friend function
}; 

void supervisor::set_user_online_hours(user& user_object, int num) { 
        std::cout << "this function from class supervisor can access user's private members because it's declared as friend function." << '\n'; 
        std::cout << "Setting user's online hour"<< '\n';
        user_object.online_hours = num;
}
void supervisor::show_user_online_hours(user& user_object) { 
        std::cout << "this function from class supervisor can access user's private members because it's declared as friend function." << '\n'; 
        std::cout << "Display user::online_hours = " << user_object.online_hours << '\n'; 
}

class admin { 
private: 
    int b; 
public:
    std::string name;
    int a_id;
    void show_user_money(user& user_object) { 
        // Since B is friend of A, it can access 
        // private members of A 
        std::cout << "object of class admin can access user's private members because it's declared as friend class." << '\n'; 
        std::cout << "Display user::money = " << user_object.money << '\n'; 
    }
    admin(std::string admin_name = "admin_unknown", int admin_id = 0) : a_id(admin_id), name(admin_name) {
        std::cout << "New admin is created." << '\n';
    }
}; 

int main()
{
    user chungkaka("Chung", 103, 10);
    admin ittf("ittf", 212);
    supervisor superA;
    std::cout << "==========================================" << '\n';
 //   chungkaka.online_hours = 755;
    ittf.show_user_money(chungkaka);
    std::cout << "==========================================" << '\n';
    //---
    superA.set_user_online_hours(chungkaka, 755);
    std::cout << "==========================================" << '\n';
    superA.show_user_online_hours(chungkaka);
    return 0;
}
