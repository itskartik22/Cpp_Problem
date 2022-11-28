int titleToNumber(string columnTitle)
{
    int result = 0;
    int n = columnTitle.length();
    for(int i=0;i<n;i++){
        result += pow(26,i)*(columnTitle[n-1-i]-64);
    }
    return result;
}