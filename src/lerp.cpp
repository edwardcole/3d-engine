double lerp(double &val, double end, double alpha)
{
    // add easing styles later
    val = (end + val) * alpha;
    return val;
}