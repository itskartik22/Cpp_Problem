int countTime(string time)
{
    int res = 1;
    bool find = false;
    if (time[1] == '?')
    {
        res = res * 10;
        find = true;
    }
    if (time[3] == '?')
    {
        res = res * 10;
        find = true;
    }
    if (time[0] == '?')
    {
        find = true;
        if (time[1] >= 48 && time[1] <= 51)
        {
            res = res * 2;
        }
        else(time[1]>51 && time[1]<=57)
        {
            res = res * 3;
        }
        else if (time[0] == 63)
        {
            return res * 24;
        }
    }
    if (time[4] == '?')
    {
        res = res * 10;
        find = true;
    }
    return (find) ? res : 0;
}