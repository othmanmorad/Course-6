#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//fedo52+53
//int main()
//{
//	fstream MyFile;
//
//	MyFile.open("MyFile.txt", ios::out | ios::app );
//
//	if (MyFile.is_open())
//	{
//
//		MyFile << "Ali\n";
//		MyFile << "Maher\n";
//		MyFile << "Fadi \n";
//		MyFile << "Shadi \n";
//		MyFile << "Lama \n";
//		MyFile << "Ali\n";
//		MyFile << "Mohammed\n";
//		MyFile.close();
//	}
//}
//
//fedeo54
//void PrintFileContent(string FileName)
//{
//    fstream MyFile;
//
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open())
//    {
//        string Line;
//        while (getline(MyFile, Line))
//        {
//            cout << Line << endl;
//        }
//        MyFile.close();
//    }
//
//}
//
//int main()
//{
//    PrintFileContent("MyFile.txt");
//}

//vedeo55

//void LoadDataFromFileToVector(string FileName , vector <string> &vFileContent)
//{
//    fstream MyFile;
//
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open())
//    {
//        string Line;
//        while (getline(MyFile, Line))
//        {
//            vFileContent.push_back(Line);
//        }
//        MyFile.close();
//    }
//
//}
//
//int main()
//{
//    vector <string> vFileContent;
//    LoadDataFromFileToVector("MyFile.txt", vFileContent);
//
//    for (string& Line : vFileContent)
//    {
//        cout << Line << endl;
//    }
//}

//vedeo56
//void SaveVectorToFile(string FileName, vector <string>& vFileContent)
//{
//    fstream MyFile;
//
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open())
//    {
//       
//        for (string& Line : vFileContent)
//        {
//            if (Line != "")
//            {
//                MyFile << Line << endl;
//            }
//        }
//        MyFile.close();
//    }
//
//}
//
//int main()
//{
//    vector <string> vFileContent = { "Saeed","Omer","Rowida","Saleh","Mohemmed","Khaled" };
//    SaveVectorToFile("MyFile.txt", vFileContent);
//
//    
//    return 0;
//}

//fedo 57

//void LoadDataFromFileToVector(string FileName, vector <string> & vFileContent)
//{
//    fstream MyFile;
//
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open())
//    {
//        string Line;
//        while (getline(MyFile, Line))
//        {
//            vFileContent.push_back(Line);
//        }
//        MyFile.close();
//    }
//
//}
//void SaveVectorToFile(string FileName, vector <string>& vFileContent)
//  {
//        fstream MyFile;
//
//        MyFile.open(FileName, ios::out);
//
//        if (MyFile.is_open())
//        {
//
//            for (string& Line : vFileContent)
//            {
//                if (Line != "")
//                {
//                    MyFile << Line << endl;
//                }
//            }
//            MyFile.close();
//        }
//
//    }
//
//
//void DeleteRecordFromFile(string FileName, string Record)
//{
//    vector <string> vFileContent;
//    LoadDataFromFileToVector(FileName, vFileContent);
//
//    for (string& Line : vFileContent)
//    {
//        if (Line == Record)
//        {
//            Line = "";
//        }
//    }
//    SaveVectorToFile(FileName, vFileContent);
//}
//
//void PrintFileContent(string FileName)
//{
//    fstream MyFile;
//
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open())
//    {
//        string Line;
//        while (getline(MyFile, Line))
//        {
//            cout << Line << endl;
//        }
//        MyFile.close();
//    }
//}
//
//int main()
//{
//    cout << "File content Befor Delete. \n";
//    PrintFileContent("MyFile.txt");
//
//    DeleteRecordFromFile("MyFile.txt", "Ali");
//
//    cout << "File content After Delete. \n";
//    PrintFileContent("MyFile.txt");
//}




//fedo 58

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }

}
void SaveVectorToFile(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {

        for (string& Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }

}


void UpDataRecordInFile(string FileName, string Record , string Updata)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string& Line : vFileContent)
    {
        if (Line == Record)
        {
            Line=Updata;
        }
    }
    SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main()
{
    cout << "File content Befor Delete. \n";
    PrintFileContent("MyFile.txt");

    UpDataRecordInFile("MyFile.txt", "Ali" , "Omer");

    cout << "File content After Delete. \n";
    PrintFileContent("MyFile.txt");
}




