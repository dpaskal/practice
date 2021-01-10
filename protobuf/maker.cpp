#include <fstream>
#include "book.pb.h"

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION; // built in macro

    Person myperson;
    myperson.set_age(200);
    myperson.set_name("Dan");
    myperson.set_email("dpaskalev@gmail.com");

    std::ofstream ofs("message.data", std::ios_base::out | 
                                      std::ios_base::binary);

    
    if(!(myperson.SerializePartialToOstream(&ofs))) {
        std::cerr << "Failed to serialize to ostream" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    
    ofs.close();

    google::protobuf::ShutdownProtobufLibrary();
}
