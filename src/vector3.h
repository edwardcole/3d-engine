#pragma once
class Vector3
{
    double x;
    double y;
    double z;

    Vector3 Normalize();
    Vector3 Cross(Vector3 toCross);
    double Dot(Vector3 dot);
};