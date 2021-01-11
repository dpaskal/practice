#include <iostream>
#include "model.h"
#include "view.h"
#include "controller.h"

void print(std::string s) { std::cout << s << std::endl; }

int main() {
    Model myModel("1234");
    View myView(myModel);
    Controller myController(myModel, myView);

    myModel.registerHandler(print);

    myController.run();

    myModel.setData("0987");
    myModel.setData("abcd");
    myModel.setData("zyx");

}