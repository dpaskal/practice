#ifndef VIEW_H
#define VIEW_H

#include "model.h"

// Responsible for presenting data
class View {
    Model model;
    public:
        View() = delete;
        View(const Model &modelIn) : model(modelIn) {}
        void setModel(const Model &modelIn){ model = modelIn; }
        void render()
        {
            // Present data
            std::cout << "Viewer data: " 
            << model.getData() << std::endl;
        }
}; // View

#endif // VIEW_H