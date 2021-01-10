#include <fstream>
#include <iostream>
#include "book.pb.h"

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    Person myperson;

    {
        std::fstream ifs("message.data", std::ios_base::in | 
                                         std::ios::binary);

        if(!(myperson.ParseFromIstream(&ifs))) {
            std::cerr << "Error parsing from ifstream" << std::endl;
            exit(EXIT_FAILURE);
        }

        std::cout << "Name: " << myperson.name() 
        << "\nAge: " << myperson.age() 
        << "\nemail: " << myperson.email()
        << std::endl;
    }
    google::protobuf::ShutdownProtobufLibrary();
}