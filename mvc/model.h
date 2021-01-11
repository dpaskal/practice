#ifndef MODEL_H
#define MODEL_H

typedef void (*Handler)(std::string newdata);

// Responsible for handling data
class Model {
    std::string data = "";
    Handler handler;
    public:
        Model() = delete;
        Model(const std::string &dataIn) : data(dataIn) {}
        std::string getData()               { return data; }
        void        setData(std::string newData) 
        { 
            data = newData; 
            if(handler) 
                handler(newData);
        }
        void registerHandler(Handler handlerIn) { handler = handlerIn; }

}; // Model

#endif // MODEL_H