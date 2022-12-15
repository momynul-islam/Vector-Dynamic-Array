public class Vector<T>{
    private T[] arr;
    private int length,size;
    public Vector(){
        arr = (T[]) new Object[1];
        this.length = -1;
        this.size = 1;
    }
    public Vector(int size){
        arr = (T[]) new Object[size];
        this.size = size;
        this.length = -1;
    }
    public void push_back(T value){
        if((length + 1) == size){
            T[] temp = (T[]) new Object[size * 2];
            for(int i=0; i<=length; i++)
                temp[i] = arr[i];
            arr = null;
            size *= 2;
            arr = temp;
        }
        arr[++length] = value;
    }
    public void push(T value,int position){
        if((position - 1) >= length)
            push_back(value);
        else {
            arr[position - 1] = value;
        }
    }
    public void pop_back(){
        length--;
    }
    public void pop(int position){
        if(length < 0){
            System.out.println("Can't  remove.Array is empty.");
            return;
        }
        else if(length < 2)
            pop_back();
        else {
            for(int i=position - 1; i<length; i++){
                arr[i] = arr[i+1];
            }
            length--;
        }
    }
    public void print(){
        for(int i=0; i<=length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
    public int getLength(){
        return length + 1;
    }
    public int getSize(){
        return size;
    }
}
