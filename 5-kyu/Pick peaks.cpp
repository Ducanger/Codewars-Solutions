#include <vector>

PeakData pick_peaks(std::vector<int> v)
{
    PeakData result;
    int value = -1000000;
    int pickPos = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > value) pickPos = i;
        else if (v[i] < value && pickPos > 0)
        {
            result.pos.push_back(pickPos);
            result.peaks.push_back(value);
            pickPos = 0;
        }
        value = v[i];
    }
    return result;
}
