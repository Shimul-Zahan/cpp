/**
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int pop_val;
        queue<int>tmp_que;
        while(!q.empty()){
            pop_val = q.front();
            // cout<<"pop val"<<pop_val<<endl;
            q.pop();
            if(q.empty() == true){
                break;
            }
            tmp_que.push(pop_val);
        }
        q=tmp_que;
        return pop_val;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};


 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */