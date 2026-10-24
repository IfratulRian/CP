class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // string s1,s2,s3,s4;
        // s1=arriveAlice[0]+arriveAlice[1];
        // s2=arriveAlice[3]+arriveAlice[4];
        // s3=leaveAlice[0]+leaveAlice[1];
        // s4=leaveAlice[3]+leaveAlice[4];
        // int a1,a2,a3,a4;
        // a1=stoi(s1);
        // a2=stoi(s2);
        // a3=stoi(s3);
        // a4=stoi(s4);

        string s1,s2,s3,s4;
        s1=arriveAlice.substr(0,2);
        s2=arriveAlice.substr(3,2);
        s3=leaveAlice.substr(0,2);
        s4=leaveAlice.substr(3,2);

        int a1,a2,a3,a4;
        a1=stoi(s1);
        a2=stoi(s2);
        a3=stoi(s3);
        a4=stoi(s4);

        // string y1,y2,y3,y4;
        // y1=arriveBob[0]+arriveBob[1];
        // y2=arriveBob[3]+arriveBob[4];
        // y3=leaveBob[0]+leaveBob[1];
        // y4=leaveBob[3]+leaveBob[4];
        // int b1,b2,b3,b4;
        // b1=stoi(s1);
        // b2=stoi(s2);
        // b3=stoi(s3);
        // b4=stoi(s4);

        string y1,y2,y3,y4;
        y1=arriveBob.substr(0,2);
        y2=arriveBob.substr(3,2);
        y3=leaveBob.substr(0,2);
        y4=leaveBob.substr(3,2);

        int b1,b2,b3,b4;
        b1=stoi(y1);
        b2=stoi(y2);
        b3=stoi(y3);
        b4=stoi(y4);

        int days[]={0,31,59,90,120,151,181,212,243,273,304,334};
        int start1=days[a1-1]+a2;
        int end1=days[a3-1]+a4;
        int start2=days[b1-1]+b2;
        int end2=days[b3-1]+b4;
        int start=max(start1,start2);
        int end=min(end1,end2);
        if(start>end)return 0;
        else return end-start+1;
    }
};
