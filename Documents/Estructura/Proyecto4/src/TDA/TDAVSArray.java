package TDA;

/**
 *
 * @author cesar
 */
public class TDAVSArray {
    private Object[] list;
    private int size;
    private int current_capacity = 5;

    public TDAVSArray() {
        list = new Object[current_capacity];
        size = 0;
        
    }
 
    public void resize(){
        Object[]temp = null;
        temp = new Object[current_capacity + current_capacity];
        for (int i = 0; i < current_capacity; i++) {
            temp[i] = list[i];
        }
        list = temp;
        current_capacity+= current_capacity;
    }
    
    public boolean insert(Object Data, int p){
        if (p < 0 || p > size) {
            return false;
        }
        if (size == current_capacity) {
            resize();
        }
        for (int i = size; i > p; i--) {
            list[i] = list[i-1];
        }
        list[p]= Data;
        size++;
        return true;
    }
    
    public void clear(){
        for (int i = 0; i < size; i++) {
            list[i]= null;
        }
        size = 0;
    }
    
    public boolean isEmpty(){
        if (size == 0) {
            return true;
        }
        return false;
    }
    
    public Object remove(int p){
        if (p < 0 || p > size) {
            return null;
        }
        if (isEmpty()) {
            return null;
        }
        Object temp = list[p];
        for (int i = p; i < size; i++) {
            list[i] = list[i + 1];
        }
        size --;
        return temp;
    }
    
    public Object first(){
        return list[0];
    }
    
    public Object last(){
        return list[size-1];
    }
    
    public Object get(int p){
        if (p < 0 || p > size) {
            return null;
        }
        if (isEmpty()) {
            return null;
        }
        return list[p];
    }
    
    public boolean isFull(){
        if (size == current_capacity) {
            return true;
        }
        return false;
    }
    
    public int size(){
        return size;
    }
}
