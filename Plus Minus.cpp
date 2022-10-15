void plusMinus(vector<int> arr) 
{
    float positive = 0.00;
    float negative = 0.00;
    float zero = 0.00;
    
    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] > 0) 
        {
            ++positive;
        }
        else if (arr[i] < 0) 
        {
            ++negative;
        }
        else 
        {
            ++zero;
        }
    }
    
    cout << positive/arr.size() << endl;
    cout << negative/arr.size() << endl;
    cout << zero/arr.size() << endl;        
    
}
