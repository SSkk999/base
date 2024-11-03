using namespace  std;
#include <iostream>
#include <string>
#include <algorithm>  

//struct MyStruct
//{
//    string name;
//    string avtor;
//    string vudatnustvo;
//    string genre;
//};
//void sortname(MyStruct sd[10]) {
//    for (int i = 0; i < 10; i++)
//    {
//
//
//        for (int j = 0; j < 10; j++)
//        {
//            if (sd[i].name > sd[j].name)
//            {
//                swap(sd[i], sd[j]);
//            }
//        }
//    }
//
//
//}
//void sortname1(MyStruct sd[10]) {
//    for (int i = 0; i < 10; i++)
//    {
//
//
//        for (int j = 0;j < 10; j++)
//        {
//            if (sd[i].avtor > sd[j].avtor)
//            {
//                swap(sd[i], sd[j]);
//
//            }
//        }
//    }
//
//
//}
//void sortname2(MyStruct sd[10]) {
//    for (int i = 0; i < 10; i++)
//    {
//
//
//        for (int j = 0; j < 10; j++)
//        {
//            if (sd[i].vudatnustvo > sd[j].vudatnustvo)
//            {
//                swap(sd[i], sd[j]);
//
//            }
//        }
//
//    }
//
//}
//void Edit(MyStruct sd[10]) {
//    int selection = 0;
//    int selection1 = 0;
//    cout << "which book do you want to edit?";
//    cin >> selection;
//    cout << "what exactly are you trying to change? \n 1-name \n  2-avtor \n3-vudatnustvo\n 4-genre" << endl;;
//    cin >> selection1;
//    cin.ignore();
//        switch (selection1)
//        {
//
//        case 1: {
//            cout << "Enter new name:"; 
//            getline(cin,sd[selection].name);
//            break;
//        }
//        case 2: {
//            cout << "Enter new avtor:" ;
//            getline(cin, sd[selection].avtor);
//            break;
//        }
//        case 3: {
//            cout << "Enter new vudatnustvo:";
//            getline(cin, sd[selection].vudatnustvo);
//            break;
//        }
//        case 4: {
//            cout << "Enter new genre:";
//            getline(cin, sd[selection].genre);  
//            break;
//        }
//        
//        default:
//            break;
//        }
//
//
//
//
//
//}
//void output(MyStruct books[10]) {
//    for (int i = 0; i < 10; i++) {
//        cout << "Book " << i + 1 << ":\n";
//        cout << " Name: " << books[i].name << "\n";
//        cout << " Author: " << books[i].avtor << "\n";
//        cout << " Publisher: " << books[i].vudatnustvo << "\n";
//        cout << " Genre: " << books[i].genre << "\n\n";
//    }
//
//}
//void search(MyStruct books[10]) {
//    string searchname;
//    int count = 0;
//    getline(cin, searchname);
//    cin.ignore();
//        for (int i = 0; i < 10; i++) {
//            if (searchname != books[i].avtor)
//            {
//                
//                continue;
//
//            }
//            else
//            {
//                
//                    cout << "Book " << i + 1 << ":\n";
//                    cout << " Name: " << books[i].name << "\n";
//                    cout << " Author: " << books[i].avtor << "\n";
//                    cout << " Publisher: " << books[i].vudatnustvo << "\n";
//                    cout << " Genre: " << books[i].genre << "\n\n";
//                  
//                }
//            }
//
//        }
//
//
//void search1(MyStruct books[10]) {
//    string searchname;
//    int count = 0;
//    getline(cin, searchname);
//    cin.ignore();
//    for (int i = 0; i < 10; i++) {
//        if (searchname != books[i].name)
//        {
//
//            continue;
//
//        }
//        else
//        {
//
//            cout << "Book " << i + 1 << ":\n";
//            cout << " Name: " << books[i].name << "\n";
//            cout << " Author: " << books[i].avtor << "\n";
//            cout << " Publisher: " << books[i].vudatnustvo << "\n";
//            cout << " Genre: " << books[i].genre << "\n\n";
//
//        }
//    }
//
//    
//}
//
//
//
//
//
//int main()
//{
//    MyStruct book[10]{
//    "New year","Miki","Chirick","Fantazy" ,
//    "Den","Bob "," Valiet","Skary",
//    "Chomiak","Artem ","Dama ","Roman",
//    "Bitock"," Trevor"," Koroli","History",
//    "Sk"," Vito","Tyz","Pobytovyi"
//    "Pachany","Maykl "," Dhcoker","Pachansikiy",
//    "Gryndeluck","Jyn "," Masyn","Bybnoviy",
//    "Base","Aplle "," Losee","Chervoviy",
//    "Vavilon","Dolar "," Winn"," Pikovyi",
//    "Chyyti","Nyrlan"," Mazick","Ketchyp"
//    };
//    MyStruct task1;
//    int selection = 0;
//    while (true) {
//        cout << "1-Edit a book \n2-Printing of all books \n3-Search for books by author \n4-Book search by title\n 5- Array sorting by book title\n6-Array sorting by author\n7-Array sorting by publisher:";
//        cin >> selection;
//
//        switch (selection)
//        {
//        case 1: {
//            Edit(book);
//        }
//        case 2: {
//            output(book);
//        }
//        case 3: {
//            search(book);
//        }
//        case 4: {
//            search1(book);
//        }
//        case 5: {
//            sortname(book);
//        }
//        case 6: {
//            sortname1(book);
//        }
//        case 7: {
//            sortname2(book);
//        }
//
//        }
//    }
//}

/////////////////2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
//////////////////////////////////////////////2.1///////////////
//struct MyStruct1
//{
//    string color;
//    string modeli;
//    int number;
//    //union {
//    //    int number;
//    //    string number;
//    //} u;
//
//};
//void filling(MyStruct1& sd) {  
//    cout << "Enter color: ";
//    cin.ignore();
//    getline(cin, sd.color);
//
//    cout << "Enter model: ";
//    getline(cin, sd.modeli);
//    cout << "Enter number: ";
//    cin >> sd.number;
//   
//}
//    
//    
//    void output1(MyStruct1 &cars) {
//            cout << "Car Details:\n";
//            cout << "cars: " << cars.color << "\n";
//            cout << " modeli: " << cars.modeli << "\n";
//            cout << " number: " << cars.number << "\n";
//
//
//        
//    }
//
//
//
//
//int main()
//{
//    MyStruct1 car;
//
//    int selection = 0;
//    while (true) {
//        cout << "1-Edit a car \n2-Printing of all car";
//        cin >> selection;
//
//        switch (selection)
//        {
//        case 1: {
//            filling(car);
//            break;
//        }
//        case 2: {
//            output1(car);
//            break;
//        }
//
//
//
//
//
//        }
//    }
//}
////////////////////////////////////////////////////////////////////////2.2
//struct MyStruct1
//{
//    string color;
//    string modeli;
//    int number;
//    //union {
//    //    int number;
//    //    string number;
//    //} u;
//
//};
//void Edit(MyStruct1 sd[10]) {
//    int selection = 0;
//    int selection1 = 0;
//    cout << "which car do you want to edit?";
//    cin >> selection;
//    cout << "what exactly are you trying to change? \n 1-color \n  2-modeli \n3-number\n" << endl;
//    cin >> selection1;
//    cin.ignore();
//    switch (selection1)
//    {
//
//    case 1: {
//        cout << "Enter new color:";
//        cin.ignore();
//        getline(cin, sd[selection].color);
//       
//        break;
//    }
//    case 2: {
//        cout << "Enter new modeli:";
//        getline(cin, sd[selection].modeli);
//        break;
//    }
//    case 3: {
//        cout << "Enter new number:";
//        cin >> sd[selection].number;
//        break;
//    }
//
//
//
//
//    }
//}
//
//
//void output1(MyStruct1 cars[10]) {
//    for (int i = 0; i < 10; i++) {
//        cout << "Car Details:" << i + 1 << "\n";
//        cout << "color " << cars[i].color << ":\n";
//        cout << " modeli: " << cars[i].modeli << "\n";
//        cout << " number: " << cars[i].number << "\n";
//
//
//    }
//}
//
//void search1(MyStruct1 books[10]) {
//    int searchname;
//    int count = 0;
//    cin >> searchname;
//    cin.ignore();
//    for (int i = 0; i < 10; i++) {
//        if (searchname != books[i].number)
//        {
//
//            continue;
//
//        }
//        else
//        {
//
//            cout << "Car Details: " << i + 1 << ":\n";
//            cout << " color: " << books[i].color << "\n";
//            cout << " modeli: " << books[i].modeli << "\n";
//            cout << " number: " << books[i].number << "\n";
//            
//
//        }
//    }
//
//    
//}
//
//
//
//
//int main()
//{
//
//    MyStruct1 car[10]{
//    "red","Q1",1,
//    "blue","Q2 ",3,
//    "orange","Q3",5,
//    "yelow"," Q4", 54,
//    "black"," Q5",342,
//    "pink","Q6 ", 425,
//    "purple","Q7",1111,
//    "brown","Q8", 2323,
//    "wayt","Q9", 7875,
//    "green","10",3434
//    };
//
//    int selection = 0;
//    while (true) {
//        cout << "1-Edit a car \n2-Printing of all car \n3-Search for books by author \n4-Book search by title\n 5- Array sorting by book title\n6-Array sorting by author\n7-Array sorting by publisher:";
//        cin >> selection;
//
//        switch (selection)
//        {
//        case 1: {
//            Edit(car);
//            break;
//
//        }
//        case 2: {
//            output1(car);
//            break;
//        }
//        case 3: {
//
//            search1(car);
//
//        }
//
//
//
//
//
//
//
//
//            }
//        }
//    }
//    
/////////////////////////////33333333333333333333333333333333333333.11111111111111111111111111

//enum EntityType { ptax, chydoba, peopl }; 
//struct MyStruct1 {
//    double speed;
//    EntityType type;
//    string color;
//
//    union {
//        double flightSpeed;
//        bool isHoofed;
//        int iqLevel;
//    } characteristic;
//
//};
//
//
//    void lead(MyStruct1& sd) {
//        int choice = 0;
//        int sk = 0;
//
//        cout << "1-ptax\n2-chydoba\n3-peopl";
//        cin >> choice;
//        sk = choice;
//        switch (choice)
//        {
//        case 1: {
//            cout << "Enter flightSpeed:";
//            cin >> sd.characteristic.flightSpeed;
//            cin.ignore();
//            cout << "Enter color:";
//            getline(cin, sd.color);
//            cin.ignore();
//            sd.type = ptax;
//            break;
//        }
//        case 2: {
//            cout << "Enter isHoofed:";
//            cin >> sd.characteristic.isHoofed;
//            cin.ignore();
//            cout << "Enter color:";
//            getline(cin, sd.color);
//            cin.ignore();
//            sd.type = chydoba;
//            break;
//        }
//        case 3: {
//            cout << "Enter iqLevel:";
//            cin >> sd.characteristic.iqLevel;
//            cin.ignore();
//            cout << "Enter color:";
//            getline(cin, sd.color);
//            cin.ignore();
//            sd.type = peopl;
//            break;
//        }
//        default:
//            break;
//        }
//
//    }
//
//
//    void vivesti(MyStruct1& cars) {
//        if (cars.type == ptax)
//        {
//           
//            cout << "type:ptax "  << "\n";
//            cout << " flightSpeed: " << cars.characteristic.flightSpeed << "\n";
//            cout << " color: " << cars.color << "\n";
//        }
//        if (cars.type == chydoba)
//        {
//         
//            cout << "type:chydoba " <<  "\n";
//            cout << " isHoofed: " << cars.characteristic.isHoofed << "\n";
//            cout << " color: " << cars.color << "\n";
//        }
//        if (cars.type == peopl)
//        {
//        
//            cout << "type:peopl " << "\n";
//            cout << " iqLevel: " << cars.characteristic.iqLevel << "\n";
//            cout << " color: " << cars.color << "\n";
//        }
//
//
//
//
//    }
//
//
//    int main()
//    {
//        MyStruct1 ss;
//
//
//        int selection = 0;
//        while (true) {
//            cout << "1-lead \n2-vivesti:";
//            cin >> selection;
//
//            switch (selection)
//            {
//            case 1: {
//                lead(ss);
//                break;
//
//            }
//            case 2: {
//                vivesti(ss);
//                break;
//            }
//
//
//
//
//
//
//
//
//
//            }
//        }
//    }


    /// //////////////////////////////////////////////333333333333333333333333333.22222222222222222222222222222222222222222222222222222222222
  

    enum EntityType { ptax, chydoba, peopl };
    struct MyStruct1 {
        double speed;
        EntityType type;
        string color;

        union {
            double flightSpeed;
            bool isHoofed;
            int iqLevel;
        } characteristic;

    };


    void lead(MyStruct1 sd[10]) {
        int choice = 0;
        int sk = 0;

        cout << "what line:";
        cin >> choice ;
        
        for (int i = 0; i < 10; i++)
        {
            if (sd[choice].type = ptax) {
                cout << "Enter flightSpeed:";
                cin >> sd[choice].characteristic.flightSpeed;
                cin.ignore();
                cout << "Enter color:";
                getline(cin, sd[choice].color);
                cin.ignore();
                sd[choice].type = ptax;
                break;
            }
            else if (sd[choice].type = chydoba) {
                cout << "Enter isHoofed:";
                cin >> sd[choice].characteristic.isHoofed;
                cin.ignore();
                cout << "Enter color:";
                getline(cin, sd[choice].color);
                cin.ignore();
                sd[choice].type = chydoba;
                break;
            }
            else if (sd[choice].type = peopl) {
                cout << "Enter iqLevel:";
                cin >> sd[choice].characteristic.iqLevel;
                cin.ignore();
                cout << "Enter color:";
                getline(cin, sd[choice].color);
                cin.ignore();
                sd[choice].type = peopl;
                break; {
            }


            }
        }








    }


    void vivesti(MyStruct1 cars[10]) {
        for (int i = 0; i < 10; i++)
        {
            if (cars[i].type == ptax)
            {
                cars[i].characteristic.flightSpeed = cars[i].speed;
                cout << "type:ptax " << "\n";
                cout << " flightSpeed: " << cars[i].characteristic.flightSpeed << "\n";
                cout << " color: " << cars[i].color << "\n";
            }
            if (cars[i].type == chydoba)
            {
                cars[i].characteristic.flightSpeed = cars[i].speed;
                cout << "type:chydoba " << "\n";
                cout << " isHoofed: " << cars[i].characteristic.isHoofed << "\n";
                cout << " color: " << cars[i].color << "\n";
            }
            if (cars[i].type == peopl)
            {
                cars[i].characteristic.iqLevel = cars[i].speed;
                cout << "type:peopl " << "\n";
                cout << " iqLevel: " << cars[i].characteristic.iqLevel << "\n";
                cout << " color: " << cars[i].color << "\n";
            }
        }
    }





    void search3(MyStruct1 books[10]) {
    
    double  searchtype, searchname;
    cout << "enter type 1-ptax\n2-chydoba\n3-people:";
    cin >> searchtype;
    cin.ignore();
    
    for (int i = 0; i < 1; i++) {
        if (searchtype == 1)
        {
            cout << "enter flightSpeed:";
            cin >> searchname;
            cin.ignore();
            for (int i = 0; i < 10; i++)
            {
                if (searchname != books[i].characteristic.flightSpeed)
                {

                    continue;

                }
                else
                {

                    cout << "type:ptax " << "\n";
                    cout << " flightSpeed: " << books[i].characteristic.flightSpeed<< "\n";
                    cout << " color: " << books[i].color << "\n";
                 


                }
            }
            }

            if (searchtype == 2)
            {
                cout << "enter isHoofed:";
                cin >> searchname;
                cin.ignore();
                for (int i = 0; i < 10; i++)
                {
                    if (searchname != books[i].characteristic.isHoofed)
                    {

                        continue;

                    }
                    else
                    {
                        cout << "type:chydoba " << "\n";
                        cout << " isHoofed: " << books[i].characteristic.isHoofed << "\n";
                        cout << " color: " << books[i].color << "\n";


                    }
                }
            }

                if (searchtype == 3)
                {
                    cout << "enter iq:";
                    cin >> searchname;
                    cin.ignore();
                    for (int i = 0; i < 10; i++)
                    {
                        if (searchname != books[i].characteristic.iqLevel)
                        {

                            continue;

                        }
                        else
                        {

                            cout << "type:peopl " << "\n";
                            cout << " iqLevel: " << books[i].characteristic.iqLevel << "\n";
                            cout << " color: " << books[i].color << "\n";


                        }
                    }
                }
    
    }

    
}

    



    


    int main()
    {

        MyStruct1 car[10] = {
            {10.5, ptax, "red"},       
            {12.3, chydoba, "orange"},
            {8.9, ptax, "yellow"},     
            {11.2, peopl, "black"},    
            {14.4, ptax, "pink"},      
            {9.5, ptax, "purple"},    
            {13.1, peopl, "brown"},    
            {7.0, chydoba, "white"},   
            {10.0, peopl, "green"}     
        };



        int selection = 0;
        while (true) {
            cout << "1-Edit data \n2-Print the entire list \n 3-Search by characteristic:";
            cin >> selection;

            switch (selection)
            {
            case 1: {
                lead(car);
                break;

            }
            case 2: {
                vivesti(car);
                break;
            }
            case 3: {
                search3(car);
                break;
            }









            }
        }
    }









