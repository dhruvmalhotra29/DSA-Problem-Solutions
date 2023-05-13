 int countWords(string list[], int n)
        {
           //code here.
           map<string,int> f;
           map<string,bool> vis;
           int cnt=0;

           for(int i=0; i<n; i++)
           {
               f[list[i]]++;
           }

           for(int i=0; i<n; i++)
           {

               if(f[list[i]]==2 and vis[list[i]]==false)
               {
                    cnt++;
                    vis[list[i]]=true;
               }
           }

           return cnt;
        }