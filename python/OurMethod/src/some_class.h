    #ifndef _SOME_CLASS_H_
    #define _SOME_CLASS_H_

#include <vector>
#include <list>

using namespace std;

class valueIdx{
public:
valueIdx(){
}
valueIdx(int _s1, int _s2, double _val){
    this->s1=_s1;
    this->s2=_s2;
    this->val = _val;
    this->isOutliear =-1;
}
valueIdx(int _s1, int _s2, double _val, int _isOutliear){
    this->s1=_s1;
    this->s2=_s2;
    this->val = _val;
    this->isOutliear = _isOutliear;
}


  int s1;
  int s2;
  double val;  
  int isOutliear;
};


    class MySorter
    {
    private:
        int     n;
        int     d;
        std::vector<bool> isOutlier;
        std::vector<double> features;
        std::vector<double> B;
        std::vector<int> labels;
        std::vector<valueIdx> topList;
        double epsilon;
        double EML = 0.000000001;
    public:
         
        MySorter();

        double computeDistanceBetweenTwoPoint(int i=0,int j=0);

        void InitializeData(int n=0, int d=0);
        void setFeature(int sample=0, int feature=0, double value=0);
        void setBij(int i=0, int j=0, double value=0);
        void setEpsilon(double value=0);
        void setLabel(int sample=0, int label=0);
        int getViolationsForT();
        double computeRi(int sample=0);
        void resetOutliers();
        void setOutlier(int idx = 0);
        void removeOutlier(int idx = 0);
        
        
        int computeTopRiPoints(int k=10);
 
        int getIndexForTopList(int index=0, int coordinate=0);
        double getValueForTopList(int index=0);
        int getOutlierForTopList(int index=0);
 
 
		void computeDistanceVialation(double epsilon=0);
 
        virtual ~MySorter();
 
        void MethodB(int a = 5);
        int GetValA();
    };

    #endif  // _SOME_CLASS_H_ 
