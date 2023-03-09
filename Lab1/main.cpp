#include <iostream>
#include "functions.h"
#include "functions_c.h"

int main(int argc, char *argv[]) {
    string name = "main.txt";
    string secondName = "to_correct.txt";
    int mode = -1;
    if(argc<3)
        cout<<"Error"<<endl;
    else
    {
        if(strcmp(argv[1],"-mode")==0)
        {
            if(strcmp(argv[2], "FilePointer")==0) mode = 0;
            else if(strcmp(argv[2], "FileStream")==0) mode = 1;
            else
                cout<<"Error!"<<endl;
        }
        else
            cout<<"Error!"<<endl;
    }
    if(mode == 1) {
        WriteInFile(name);
        ShowFile(name);
        FindAndCopy(name);
        ShowFile(secondName);
        ClearFileFromExcessiveBraces(secondName);
        ShowFile(secondName);
        FindNumberInBraces(secondName);
        cout<<"---------Results---------"<<endl;
        ShowFile(name);
        ShowFile(secondName);
    }
    else if(mode == 0) {
        WriteInFile_C(name.c_str());
        ShowFile_C(name.c_str());
        FindAndCopy_C(name.c_str());
        ShowFile_C(secondName.c_str());
        ClearFileFromExcessiveBraces_C(secondName.c_str());
        ShowFile_C(secondName.c_str());
        FindNumberInBraces_C(secondName.c_str());
        cout<<"---------Results---------"<<endl;
        ShowFile_C(name.c_str());
        ShowFile_C(secondName.c_str());
    }
    cout<<"---------Finish---------"<<endl;
    system("pause");
    return 0;
}
