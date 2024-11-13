    void rotateanticlockwise(string &s)
    {
        if(s.length()<=1)return ;
        char a = s[0];
        int i = 0;
        while(i<s.length()-1)
        {
            s[i]=s[i+1];
            i++;
            
        }
        s[s.length()-1]=a;
        
    }
    void rotateclockwise(string &s)
    {
        if(s.length()<=1)return ;
        char a = s[s.length()-1];
        int i = s.length()-1;
        while(i>0)
        {
            s[i]=s[i-1];
            i--;
            
        }
        s[0]=a;
    }
    bool isRotated(string s1, string s2) {
        //base case 
        if(s1.length()!=s2.length())return false;
        
        string ch = s1;
        rotateanticlockwise(ch);
        rotateanticlockwise(ch);
        if(ch==s2)
        return true;
        
        
        ch = s1;
        rotateclockwise(ch);
        rotateclockwise(ch);
        if(ch==s2)
        return true;
        
        return false;
        
        
    }
