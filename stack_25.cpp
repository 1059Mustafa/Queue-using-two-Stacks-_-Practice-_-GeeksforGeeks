void StackQueue :: push(int x)
 {
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        int ans=-1;
        if(s1.size()==0)
        {
            return ans;
        }
        while(s1.size()!=1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        ans=s1.top();
        s1.pop();
        while(s2.size()>0)
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;      
}

