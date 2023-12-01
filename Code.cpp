#include <bits/stdc++.h>
#define long long ll
using namespace std;


auto cmp = [](Driver* a, Driver b) {
	return a->timeEmpty>b->timeEmpty;	
};
class Driver
{
    ll int DriverID;
    int status;
    Region* region;
    ll int X;
    ll int Y;
    int timeEmpty;
    int capacity;
    vector<Region*> toRegions;
    friend Region* find_region_id(Region* prevRegion,int X,int Y);
    friend Driver* book_a_cab(User A);
    friend void update_regions(Driver* B,int X,int Y);
};
class User
{
    ll int UserId;
    Region* region;
    ll int X;
    ll int Y;
    ll int X2;
    ll int Y2;
    Region* mostRecentRegionId;
    friend Region* find_region_id(Region* prevRegion,int X,int Y);
    friend Driver* book_a_cab(User A);
    friend void update_regions(Driver* B,int X,int Y);

};

class Region
{
    ll int regionId;
    vector<Region*> neighbours[n];
    func(int x,int y)
    {
        
        //Mathematical function which returns a bolean 
        //which asserts us if the coordinate is in this region.
        
    }
    set<Driver*, decltype(cmp)> currentDrivers;
    friend Region* find_region_id(Region* prevRegion,int X,int Y);
    friend Driver* book_a_cab(User A);
    friend void update_regions(Driver* B,int X,int Y);
};

class Administrator
{
    ll int AdminId;
    vector<driver*>drivers_current(n1);
    loop:
    {
        //ask every driver for location after time t.
        //update respective objects(regions,drivers) using
        //update_regions function.
    }
    loop :
    {
        //wait for user requests.
        // then use find_region_id to get user regionid
        //then use book_a_cab.
    }

};


Region* find_region_id(Region* prevRegion,int X,int Y)
{
    if(prevRegion->func(X,Y))
    return prevRegion;
    else
    {
        queue<Region*> q;
        for(int i=0;i<n;i++)
        {
            q.push(prevRegion->neighbours[i]);
        }
        while(!q.empty())
        {
            Region* k=q.top();
            q.pop();
            if(k->func(X,Y))
            {return k;
            break;}
            else
            {
                for(int i=0;i<n;i++)
                q.push(k->neighbours[i]);
            }
        }
    }
}
Driver* book_a_cab(User A)
{
    queue<Region*>q;
    q.push(A->region);
    while(!q.empty())
    {
        reqion* search=q.top();
        q.pop();
       	auto driverSet = search.region->current_drivers;
       	// Among these drivers assign if anyone of them is going to same destination 
       	// or else going to the nearest area to their destination
       	
       	Region* destn = find_region_id(A->region, X2, Y2);
       	queue<Region*> q1;
       	q1.push(destn)
       	while(!q1.empty()){
       		auto currDest = q1.top();
       		q1.pop();
       		for(auto driver: driverSet){
		   		bool currDestnInDriverstoRegions = false;
		   		for(auto r: driver.toRegions){
		   			if(r==currDestn) {
		   				currDestnInDriverstoRegions = true;
		   				break;
		   			}
		   		}
                if(currDestnInDriverstoRegions ==true)
                {
                    driver.toRegions.push(destn);
		   		    return driver;
                }
       		}
            for(int i=0;i<n;i++)
            q1.push(currDest->neighbours[i]);
       	}
       	        
        for(int i=0;i<n;i++)
        q.push(search->neighbours[i]);
    }
}
void update_regions(Driver* B,int X,int Y)
{
    auto currRegion = B->region;
    B->region = find_region_id(B->region,X,Y);
    if(currRegion!=B->region)
    currRegion.currentDrivers.remove(B);
    B->region.currentDrivers.insert(B);
}

int main()
{
    
}