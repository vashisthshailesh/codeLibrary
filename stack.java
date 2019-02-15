import java.util.*;

class arraystack{
    int arr[];
    int top ,len ,size;
    
    public arraystack(int n){
        size = n;
        len = 0;
        top = -1;
        arr = new int[size];
    }
    
    public boolean isempty(){
        return top == -1;
    }
    
    public boolean isfull(){
        return size -1 == top ;
    }
    
    public int getsize(){
        return len;
    }
    
    public int peek(){
        if(isempty()){
            return;
        }
        else{
            return arr[top];
        }
    }
    
    public void push(int i){
        if(!isfull()){
            arr[++top] = i;
            len++
        }
    }
    
    public int pop(){
        if(!isempty){
            return arr[top--];
            len--;
        }
    }
    
}
