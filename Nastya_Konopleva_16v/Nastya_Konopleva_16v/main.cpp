//
//  main.cpp
//  Nastya_Konopleva_16v
//
//  Created by Andrei Konoplev on 05.12.2019.
//  Copyright © 2019 Коноплев Андрей. All rights reserved.
//

#include <iostream>
#include "GroupClass.hpp"
#include <cstring>

int main(int argc, const char * argv[]) {

    //1.Cоздание обьекта с помощью конструктора по умолчанию
    GroupClass group;
    group.setSurname("Konopleva");
    group.setUniversityName("MFTI");
    group.setFaculty("Science");
    group.setCourse(2);
    
    std::cout << "name: " << group.getSurname()<< " " <<
    "University: " <<  group.getUniversityName() << " " <<
    "fucalty: " << group.getFaculty() << " " <<
    "course: " << group.getCourse() << " \n";
    
    //2. Создание обьекта с помощью конструктора с параметрами
    GroupClass another_group("Konopleva", "MGU", "Programmer", 3);

    std::cout << "name: " << another_group.getSurname()<< " " <<
    "University: " <<  another_group.getUniversityName() << " " <<
    "fucalty: " << another_group.getFaculty() << " " <<
    "course: " << another_group.getCourse() << " \n";
    

    // 3. создание массива объектов (размерность массива 3 или 4
    //    элемента),

    GroupClass men_1;
    GroupClass men_2;
    GroupClass men_3;
    GroupClass men_4;
    
    GroupClass array[4];
    array[0] = men_1;
    array[1] = men_2;
    array[2] = men_3;
    array[3] = men_4;
    
    //    4. инициализация свойств каждого объекта массива(исходные
    //    данные вводятся с клавиатуры)
    
    for(int i=0; i < 4; i++) {
        string surname;
        string university;
        string faculty;
        int course;
        
        cout << "Введите фамилию: \n";
        cin >> surname;
        
        cout << "Введите название университета: \n";
        cin >> university;
    
        cout << "Введите название факультета: \n";
        cin >> faculty;
        
        cout << "Введите курс: \n";
        cin >> course;
        
        array[i].setSurname(surname);
        array[i].setUniversityName(university);
        array[i].setFaculty(faculty);
        array[i].setCourse(course);
    }
    
    //5.просмотр свойств каждого объекта
    for(int i=0; i < 4; i++) {
        cout << "Фамилия студента №" << i << ": " << array[i].getSurname() << ", ";
        cout << "Университет студента №" << i << ": " << array[i].getUniversityName() << ", ";
        cout << "Название факультета студента №" << i << ": " << array[i].getFaculty() << ", ";
        cout << "Номер курса студента №" << i << ": " << array[i].getCourse() << "\n";
    }
    
    //6. Определить количество студентов второго курса.
    int numberOfStudents = 0;
    
    for(int i=0; i < 4; i++) {
        if (array[i].getCourse() == 2) {
            numberOfStudents ++;
        }
    };
    
    cout << "Число студентов второго курса: " << numberOfStudents << "\n";
    cout << "Финал \n";
    
    return 0;
}
