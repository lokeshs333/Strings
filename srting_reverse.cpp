
//reverse
string stringReverse(string S)
{
    // Write your code here.....
    int start = 0;
    int end = S.size() - 1;
    while (start < end)
    {
        swap(S[start++], S[end--]);
    }
    return S;
}
