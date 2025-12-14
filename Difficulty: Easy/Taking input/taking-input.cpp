class Solution {
  public:
    void inputData() {
        // code here
        int a;
        string b;
        cin>>a;
        cin.ignore();
        getline(cin,b);
        cout<<a<<" "<<b<<endl;
    }
};