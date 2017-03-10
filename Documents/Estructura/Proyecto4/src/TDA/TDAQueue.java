package TDA;


public class TDAQueue {
    private Object[] queue;
    private int size;
    private int current_capacity = 5;
    
    public TDAQueue() {
        queue = new Object[current_capacity];
        size = 0;
    }

    public int getSize(){
        return size;
    }
 
    
    public void resize(){
        Object[]temp = null;
        temp = new Object[current_capacity + current_capacity];
        for (int i = 0; i < current_capacity; i++) {
            temp[i] = queue[i];
        }
        queue = temp;
        current_capacity += current_capacity;
    }
    
    public boolean Queue(Object Data){
        if (size == current_capacity) {
            resize();
        }
        if (size == 0) {
            queue[0] = Data;
            size++;
            return true;
        }
        queue[size-1] = Data;
        size ++;
        return true;
    }
    
    public Object peek(){
        return queue[0];
    }
    
    public boolean isEmpty(){
        if (size== 0) {
            return true;
        }
        return false;
    }
    
    public Object Dequeue(){
        if (isEmpty()) {
            return null;
        }
        Object temp = queue[0];
        for (int i = 0; i < size-1; i++) {
            queue[i] = queue[i+1];
        }
        size --;
        return temp;
    }
    
    public int getCapacity(){
        return current_capacity;
    }
    
}

