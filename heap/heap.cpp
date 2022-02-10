#include <iostream>
#include <vector>
using namespace std;

class Heap
{
    vector<int> v;
    bool min_heap;
    bool campare(int a, int b)
    {
        if (min_heap)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }
    void heapify(int indx){
        int last=v.size()-1;
        int left=2*indx;
        int right=left+1;
        int min_indx=indx;

        if(left <= last and campare(v[left],v[indx])){
            min_indx=left;
        }
         if(right<=last and campare(v[right],v[min_indx])){
            min_indx=right;
        }
        if(min_indx!=indx){
            swap(v[indx],v[min_indx]);
            heapify(min_indx);
        }
    }
public:
    Heap(int default_val = 10, bool type = true)
    {
        v.reserve(default_val);
        v.push_back(-1);
        min_heap = type;
    }
    void push(int val)
    {
        v.push_back(val);
        int indx = v.size() - 1;
        int parent = indx / 2;

        while (indx > 1 && campare(v[indx], v[parent]))
        {
            swap(v[indx], v[parent]);
            indx = parent;
            parent = parent / 2;
        }
    }
    void pop(){
        int last=v.size()-1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
    }
    int top(){
        return v[1];
    }
    bool isempty(){
        return v.size()==1;
    }
};

int main()
{
    Heap h;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int n;
        cin>>n;
        h.push(n);
    }
    while (!h.isempty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    
}