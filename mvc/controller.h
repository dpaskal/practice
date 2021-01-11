#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include "view.h"

// Responsible for combining Model and View
class Controller {
    Model model;
    View view;
    public:
        Controller() = delete;
        Controller(const Model &modelIn, const View &viewIn) :
                                model(modelIn), view(viewIn) {}
        void setModel(const Model &modelIn) { model = modelIn; }
        void setView (const View &viewIn) { view = viewIn; }
        void setData (const std::string s) { model.setData(s); }
        void registerHandler(Handler handlerIn) { model.registerHandler(handlerIn); }
        void run() { view.render(); }
}; // Controller

#endif // CONTROLLER_H