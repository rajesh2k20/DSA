
#include<bits/stdc++.h>
#define int         int64_t
#define ll          long long 
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class pq{
 private:
    int *arr;
    int size;
    int root;
    int capacity;
public:

  pq( ){
   arr=new int [1000];
   capacity=(999);
   size=0;
   root=1;
  }

  void  push(int val){
   
    if(isFull()==true){
        cout<<" Overflow"<<endl;
        return;
    }

    arr[++size]=val;
    int index=size;
    while( index !=root){

        if( arr[index] > arr[parent(index)]){
            swap( arr[index],arr[parent(index)]);
            index= parent(index);
        }else{
            break;
        }
    }
  }

  int pop(){
    
      if(isEmpty()==true){
        cout<<"UnderFlow condition"<<endl;
        return -1;
      }  


      int ele= arr[root];
      swap( arr[root], arr[size--]);
      heapify( root);

  return ele;

  }
  
  void heapify(int  index){

    int largest=index;
     if(left(index) <=size &&  arr[left(index)]> arr[largest]){
        largest=left(index);
     }
     if(right(index)<=size &&  arr[right(index)]> arr[largest]){
        largest=right(index);
     }

     if(largest !=index){
        swap(arr[largest] ,arr[index]);
        heapify( largest);
     }

  }
  int parent(int  index){

    return index/2;
  }
  int left(int  i){

    return  2*i;
  }

  int right(int i){

    return 2*i+1;
  }

   bool isEmpty(){
    
    return size==0;
   }
   
   bool isFull(){
     
     return size==capacity;
   }

};
void solve(){
    pq p;

    p.push(100);
    p.push(200);
    p.push(-10);
    p.push(400);
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    // cout<<  
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}
