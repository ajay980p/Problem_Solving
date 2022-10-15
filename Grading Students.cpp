
/*
    We have solved this ques using multiple of 10 not multiple of 5 as Given in HackerRank.
*/

vector<int> gradingStudents(vector<int> grades) 
{
    vector<int> s;
    
    for (int i=0; i < grades.size(); i++) 
    {
        if (grades[i] >= 38) 
        {
            if (grades[i]%10 == 0)
            {
                s.push_back(grades[i]);
            }
            else if (grades[i]%10 == 3) 
            {
                s.push_back(grades[i] + 2); 
            }
            else if (grades[i]%10 == 4) {
                s.push_back(grades[i] + 1);
            }
            else if (grades[i]%10 == 5) {
                s.push_back(grades[i]);
            }
            else if (grades[i]%10 == 8) {
                s.push_back(grades[i] + 2);
            }
            else if (grades[i]%10 == 9) {
                s.push_back(grades[i] + 1);
            }
            else {
                s.push_back(grades[i]);
            }
        }
        else 
        {
            s.push_back(grades[i]);
        }
    }
    return s;
}
