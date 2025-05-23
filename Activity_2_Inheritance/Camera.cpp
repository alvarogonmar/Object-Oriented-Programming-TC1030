#include "Camera.h"

using namespace std;

Camera::Camera(double size) : lensSize(size) {}

void Camera::takePicture()
{
    cout << "Picture taked with the lensSize of " << lensSize << "mm" << endl;
}