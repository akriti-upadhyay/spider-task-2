void MyQueue :: push(int x)
{
    if(front==0 && rear==0){
        ++front;
        arr[++rear]=x;
    }
    else{
        arr[++rear]=x;
    }
        
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front>rear || (front==0 && rear==0)){
        return -1;
    } 
    else{
        int del=arr[front++];
        return del;
    }
}



