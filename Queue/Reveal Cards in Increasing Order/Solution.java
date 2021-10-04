import java.io.*;
import java.util.*;

interface Queue
{
    void enqueue(int item);
    int dequeue();
    boolean isEmpty();
    boolean isFull();
    void size();
    void display();
}

class ArrayQueue implements Queue
{
    int front;
    int rear;
    int capacity;
    int qu[];
    public void init(int capacity)
    {
        front = rear = 0;
        this.capacity=capacity;
        qu=new int[capacity];
    }
    
    
    // 1
    public boolean isEmpty()
    {
        if(front==rear) return true;
        return false;
    }
    
    // 2
    public boolean isFull()
    {
        if(capacity==rear)
            return true;
        return false;
    }
    
    // 3
    public void enqueue(int item)
    {   
        if(isFull()==true) 
        {
            System.out.println("QueueFull");
            return;
        }
        qu[rear] = item;
        rear++;
        return;
    }
 
    // 4
    public int dequeue()
    {
        
        if(isEmpty()==true) 
        {
            System.out.println("EmptyQueue");
            return -1;
        }
        int x=qu[0];
        for(int i=0; i<rear-1;i++) 
            qu[i] = qu[i + 1];
            
        if (rear < capacity)
                qu[rear] = 0;
 
        rear--;
        return x;
    }
    
    // 5
    public void display()
    {
        if(isEmpty()==true) 
        {
            System.out.println("EmptyQueue");
            return;
        }
        for (int i=front; i<rear;i++) 
        {
            System.out.printf("%d ", qu[i]);
        }
        System.out.println();
        return;
    }
    
    //6
    public void size()
    {
        if(isEmpty()==true) 
        {
            System.out.println("EmptyQueue");
            return;
        }
        System.out.println(rear);
    }
 
  
}




class Node 
{
    int data;
    Node next;
    public Node(int data)
    {
        this.data = data;
        this.next = null;
    }
}

class ListQueue implements Queue
{
    Node front;
    Node rear;
 
    public ListQueue()
    {
        this.front = this.rear = null;
    }

    //1
    public boolean isEmpty()
    {
        if(this.rear==null) return true;
        return false;
    }
    
    //2
    public boolean isFull()
    {
        return false; // since linkedlist queue is never full
    }
    
    //3
    public void enqueue(int item)
    {
        Node temp = new Node(item);
        if (this.rear == null) 
        {
            this.front = this.rear = temp;
            return;
        }
        this.rear.next = temp;
        this.rear = temp;
    }

    //4
    public int dequeue()
    {
        if (this.front == null)
        {
            System.out.println("EmptyQueue");
            return -1; 
        }
        int x=this.front.data;
        Node temp = this.front;
        this.front = this.front.next;
        if (this.front == null)
            this.rear = null;
        return x;
    }
    
    //5
    public void display()
    {
        if(isEmpty()==true)
        {
            System.out.println("EmptyQueue");
            return;
        }
        Node temp=this.front;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    
    
    //6
    public void size()
    {
        if(isEmpty()==true)
        {
            System.out.println("EmptyQueue");
            return;
        }
        int s=0;
        Node temp=this.front;
        while(temp!=null)
        {
            s++;
            temp=temp.next;
        }
        System.out.println(s);
    }
  
}

public class Solution {

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String first=sc.nextLine();
        String f[]=first.split(" ");
        char p=f[0].charAt(0);
        if(p=='A')
        {
            int size=Integer.parseInt(f[1]);
            if(size<0)
            {
                System.out.println("InvalidSIZE");
                return;
            }
            ArrayQueue q= new ArrayQueue();
            q.init(size);
            while(true)
            {
                String inp=sc.nextLine();
                String in[]=inp.split(" ");
                char ch=in[0].charAt(0);
                if(ch=='E')
                {
                    int item=Integer.parseInt(in[1]);
                    q.enqueue(item);
                }
                else if(ch=='D')
                {
                    int item=q.dequeue();
                    if(item!=-1)
                    System.out.println(item);
                }
                else if(ch=='P')
                {
                    q.display();
                }
                else if(ch=='S')
                {
                    q.size();
                }
                else if(ch=='Q')
                {
                    System.out.println("End");
                    return;
                }
            }
        }
        else if(p=='L')
        {
            
            ListQueue q= new ListQueue();
            while(true)
            {
                String inp=sc.nextLine();
                String in[]=inp.split(" ");
                char ch=in[0].charAt(0);
                if(ch=='E')
                {
                    int item=Integer.parseInt(in[1]);
                    q.enqueue(item);
                }
                else if(ch=='D')
                {
                    int item=q.dequeue();
                    if(item!=-1)
                    System.out.println(item);
                }
                else if(ch=='P')
                {
                    q.display();
                }
                else if(ch=='S')
                {
                    q.size();
                }
                else if(ch=='Q')
                {
                    System.out.println("End");
                    return;
                }
            }
        }
        else
        {
            
            return;
        }
    }
}
