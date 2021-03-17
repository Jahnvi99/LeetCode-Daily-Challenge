class Solution {
public:
    double r,x,y;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    vector<double> randPoint() {
         while (true) {
             double x_1 = (2*(double(rand())/RAND_MAX)-1)*r;
             double y_1 = (2*(double(rand())/RAND_MAX)-1)*r;
             if (x_1 * x_1 + y_1 * y_1 < r*r)
                 return vector<double>{x_1+x, y_1+y};
         }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
