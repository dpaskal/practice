import pickle
import time

class Person:
    '''Docstring'''
    age = 20
    height = 200
    def __int__(self):
        pass
    def __repr__(self):
        return "Age:" + repr(self.age) + " " + "Height:" + repr(self.height)


if __name__ == '__main__':
    Harry = Person()
    John = Person()
    Joe = Person()
    Dan = Person()

    Harry.age = 25
    Dan.height = 190

    data = []
    data.append(Harry)
    data.append(John)
    data.append(Joe)
    data.append(Dan)

    binfile = open('pickled.bin', 'wb')

    for i in data:
        pickle.dump(i, binfile)
        binfile.flush()

    binfile.close()

    time.sleep(1)
    newdata = []

    binfile = open('pickled.bin', 'rb')
    while True:
        try:
            o = pickle.load(binfile)
        except EOFError:
            break
        else:
            print("READ: Age %s Height %s" % (o.age, o.height))
            newdata.append(o)

    binfile.close()