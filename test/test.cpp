/*************************************************************************
	> File Name: test.cpp
	> Author:yangkun 
	> Mail:yangkungetit@163.com 
	> Created Time: Fri 08 Dec 2017 10:46:18 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<list>
#include<set>
#include<boost>
using namespace std;
using namespace boost;
nclude<iostream>
#include<boost/timer.hpp>

using namespace std;
using namespace boost;
 
//int main()
//{
//  timer tm;
//  cout << tm.elapsed() << endl;
//  cout << tm.elapsed_max() << endl;
//  cout << tm.elapsed_min() << endl;
//  //cout << tm.restart << endl;
//  tm.restart();
//  return 0;
//}

#include<boost/progress.hpp>
#include<vector>
#include<string>
#include<list>

//int main()
//{
//  progress_display pd(100);
//  int x = 0;
//  while (x < 100)
//  {
//      //++pd;
//      pd.restart(100);
//      pd += x;
//      x++;
//  }
//
//  //list<int> l;
//  //l.push_back(1);
//  //l.push_back(2);
//  //l.push_back(3);
//  //l.push_back(4);
//
//  //list<int>::iterator it = l.begin();
//  //list<int>::iterator it2 = l.end();
//  //it2 - it;
//
//  //vector<int> v;
//  //v.push_back(1);
//  //v.push_back(2);
//  //v.push_back(3);
//  //v.push_back(4);
//
//  //vector<int>::iterator it1 = v.begin();
//  //vector<int>::iterator it2 = v.end();
//  //cout << it1 - it2 << endl;
//
//  return 0;
//}

//#include<boost/date_time/gregorian/gregorian.hpp>
//using namespace boost::gregorian;
//#include<boost/format.hpp>
//int main()
//{
////    date d(2017,12,6);
////    date d1;
////    d1 = d;
////    cout << d.day_of_week() << endl;
////    cout<<d.day();
////    d.year_month_day();
////    date d3(pos_infin);
////    cout << d3.is_infinity() << endl;
////    cout << d1 << endl;
////    cout << d.is_special() << endl;
////    return 0;
//
//  //day_clock d;
//  //date d1;
//  //d1 = d.local_day();
//  //cout << d1 << endl;
//  ////date d3(1300, 1, 1);
//  //cout << (int)d1.month() << endl;
//  //cout << d1.year() << endl;
//  //cout << d1.day() << endl;
//  //date::ymd_type ymd = d1.year_month_day();
//  //cout << d1.day_of_week() << "  " << d1.day_of_year() << endl;
//  //string s = to_simple_string(d1);
//  //cout << s << endl;
//  //tm t = to_tm(d1);
//  //cout << t.tm_hour << t.tm_isdst << t.tm_mday << t.tm_min << t.tm_mon << t.tm_sec << endl;
//
//  //date d2 = date_from_tm(t);
//  //cout << d2 <<endl;
//
//  //date d(2000, 2, 29);
//  //date_period dp(d, date(2010,2,2));
//  //cout << dp << endl;
//  //cout << dp.last() << endl;
//  //cout << dp.end() << endl;
//  //cout << dp.begin() << endl;
//  //date d3(dp.end());
////    boost::split()
////    return 0;
////}






#define BOOST_SYSTEM_NO_DEPRECATED
#include<boost/pool/pool.hpp>

//int main()
//{
//  pool<> p1(sizeof(int));
//
//  char* p = static_cast<char*>(p1.malloc());
//  void* p2 = p1.malloc();
//  if (p1.is_from(p))
//  {
//      cout << "p is from p1" << endl;
//      *p = '1';
//      cout << *p << endl;
//  }
//  if (p1.is_from(p2))
//  {
//      cout << "p2 is from p1" << endl;
//  }
//  
//  //p1.free(p);
//  p1.ordered_malloc(1000);
//  
//  return 0;
//}
//
#include<boost/pool/object_pool.hpp>
struct demo
{
    int _a;
    int _b;
    int _c;
    demo(int a = 1, int b = 2, int c = 3)
        :_a(a), _b(b), _c(c)
    {}
};

int main()
{
    object_pool<demo> p;
    auto ptr = p.malloc();
    ptr->_a = 10;
    (*(p.construct()))._a=10;
    auto p1 = static_cast<demo*>(malloc(sizeof(demo)));
    p1->_a = 100;
    demo* p2 = (demo*)malloc(sizeof(demo));

    return 0;
}

