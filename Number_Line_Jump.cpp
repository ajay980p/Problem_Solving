
string kangaroo(int x1, int v1, int x2, int v2)
{

    string s;
    if ((x1>x2 && v1>v2) || (x2>x1 && v2>v1) || (x1!=x2 && v1 == v2) )
    {
        s = "NO";
        return s;
    }
    else
    {
        while (x1<x2)
        {
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
        if (x1 == x2)
        {
            s = "YES";
            return s;
        }
        else 
        {
            s = "NO";
            return s;
        }
    }
}
