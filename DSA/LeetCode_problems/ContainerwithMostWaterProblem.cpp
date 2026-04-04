#include<iostream>
#include<vector>

using namespace std;

int Container_with_Most_Water_Problem(vector<int>& vect );
int Optmized_Container_with_Most_Water(vector<int>& vect );

int main()
{
    vector <int> vect= {1,8,6,2,5,4,8,3,7};
    int max_volume =0;

    max_volume = Container_with_Most_Water_Problem(vect);
    cout << "Container with Most Water : " << max_volume << endl;
    max_volume = Optmized_Container_with_Most_Water(vect);
    cout << "Container with Most Water(Optmized) : " << max_volume << endl;
    
    return 0;
}
/*********************************/
/*This is function to calculate the Maxwater capacity of the caintainers*/
/*represented by the vector*/
/*Time complaxity : O(n2)*/
/*********************************/

int Container_with_Most_Water_Problem(vector<int>& vect )
{
    int i,j;
    int vect_len=vect.size();
    int max_size,length,width;
    max_size=length=width=0;

    for(i=0;i<vect_len;i++)
    {
        for(j=i+1;j<vect_len;j++)
        {
            width=j-i;
            length=min(vect[i],vect[j]);
            max_size=max(width*length,max_size);
        }
    }
    return max_size;
}

/*********************************/
/*This is function to calculate the Maxwater capacity of the caintainers*/
/*represented by the vector*/
/*Time complaxity : O(n)*/
/*********************************/

int Optmized_Container_with_Most_Water(vector<int>& vect )
{
    int i,j;
    int vect_len=vect.size();
    int hieght, width;
    int maxWater=0;
    int *start, *end;
    int lp=0, rp=vect.size()-1;

    
    while(lp<rp)
    {
        width = rp-lp;
        hieght = min(vect[lp],vect[rp]);
        maxWater = max(maxWater, width*hieght);
        
        vect[lp] > vect[rp]?rp--:lp++;
    }

    return maxWater;
}