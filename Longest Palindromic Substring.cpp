string stringcheck(string s,int l,int h,int n){

while(l>=0 && h<=n ){

    if(s[l]!=s[h]){

        break;

    }

    l--;

    h++;

}

return s.substr(l+1,h-l-1);

}

string longestPalinSubstring(string str)

{

    // Write your code here.

    int n=str.length();

    string res="";

    //Odd Case 

  //  ababa

   //Taking i-1,i+1 and expanding for odd case 

    for(int i=0;i<n;i++){

        string odd=stringcheck(str,i-1,i+1,n);

        if(odd.size()>res.size()){ 

            res=odd;

        }

    }

 

    //Even Case

    //bccd

    //Taking i-1,i and expanding for even case 

 

       for(int i=0;i<n;i++){

        string even=stringcheck(str,i-1,i,n);

        if(even.size()>res.size()){

            res=even;

        }

    }

    return res;

 

}