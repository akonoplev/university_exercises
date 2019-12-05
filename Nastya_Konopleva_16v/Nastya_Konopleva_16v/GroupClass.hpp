//
//  GroupClass.hpp
//  Nastya_Konopleva_16v
//
//  Created by Andrei Konoplev on 05.12.2019.
//  Copyright © 2019 Коноплев Андрей. All rights reserved.
//

#ifndef GroupClass_hpp
#define GroupClass_hpp
#include_next <string>
#include <stdio.h>

#include <cstring>

using namespace std;

class GroupClass {
public:
    GroupClass();
    GroupClass(string, string, string, int);
    ~GroupClass();
    
    
    void setSurname(string);
    void setUniversityName(string);
    void setFaculty(string);
    void setCourse(int);
    
    string getSurname();
    string getUniversityName();
    string getFaculty();
    int getCourse();
private:
    string surname;
    string university_name;
    string faculty;
    int course;
};




#endif /* GroupClass_hpp */
