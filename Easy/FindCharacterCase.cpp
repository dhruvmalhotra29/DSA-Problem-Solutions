void findCharacterCase() {
    //Write your code here

    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z')
    {
        cout<<"1"<<endl;  // For Upper Case alphabet
    }
    else if(ch>='a' and ch<='z')
    {
        cout<<"0"<<endl;   // For lowercase alphabet
    }
    else
    {
        cout<<"-1"<<endl;  //For character other than alphabet
    }

    return;
}