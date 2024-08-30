 #include<iostream>
 using namespace std;
 Class Marks
 {
    private;
    float *ptr;
    int num;
    char name[20];
    public:
    void NoSubjects()
    {
    cout<<”Enter a number of Subjects:”;
    cin>>num;
    }
    void ReadData();
    void DisplayData();
 };
void Marks:: ReadData()
 {
    cout<<”Enter student name:”;
    cin>>name;
    cout<<”Enter marks of“<<num<<“subjects:“;
    ptr=newfloat[num];
    for{inti=0;i<num;i++}
    cin>>*{ptr+i};
 }
 void Marks:: DisplayData()
 {
    float sum=0, per;
    for{int j=0;j<num;j++}
    sum=sum+*(ptr+j);
    per=sum/num;
    cout<<endl<<”Your data is:“<<endl<<”Name=”<<name;
    cout<<”The percentage is:“<<per;
    delete[] ptr;
 }
 void main()
 {
    Marksm;
    m.NoSubjects();
    m.ReadData();
    m.DisplayData();
 }