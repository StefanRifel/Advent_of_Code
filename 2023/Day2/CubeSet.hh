#ifndef CUBESET_HH
#define CUBESET_HH
class CubeSet {
private:
    int red;
    int green;
    int blue;

public:
    CubeSet();
    CubeSet(int red, int green, int blue);

    void setRed(int red);
    void setGreen(int green);
    void setBlue(int blue);

    int getRed();
    int getGreen();
    int getBlue();

    bool isValid();

    int calcPower();

    ~CubeSet();
};
#endif