#include <iostream>
#include "model.h"
#include "view.h"
#include "controller.h"

void print(std::string s) { std::cout << s << std::endl; }

int main() {
    Model myModel("1234");
    View myView(myModel);
    Controller myController(myModel, myView);

    // User only interacts with the controller
    myController.registerHandler(print);

    myController.run();

    myController.setData("0987");
    myController.setData("abcd");
    myController.setData("zyx");

}