
namespace cv {

void fna(int a);

struct strcta;

struct strcta {
  void fna(int a);
  template<typename T> T template_ret(){}
  template<typename T> int template_arg1(const T& arg){}
  template<typename T> int template_arg2(T arg){}
  template<typename T> int template_arg3(const T* arg){}
  template<typename T> int template_arg4(T* arg){}
};
struct purevirtualstruct {
  virtual void virtualfn() = 0;
};
struct derived_virtual : purevirtualstruct {
  virtual void virtualfn() {}
};
struct strctb {
  void fnb(int a) const;
};
class classa : strcta {
  static void fn_static(int a);

 public:
  classa() {}
  classa(int a) : datamember(a) {}

  classa operator+(const classa&) const;
  classa operator+(int) const;

  int datamember;
  int array_member[6];
};
class classb : strcta, strctb {};

template <typename T>
class templateclass {
  enum TEMPLATE_ENUM_TEST {
    TEMPLATE_ENUM_A = 1,
    TEMPLATE_ENUM_B = 2,
    TEMPLATE_ENUM_C,
  };
};

template <>
class templateclass<int> {
  int a;
  enum SPECIALIZED_ENUM_TEST {
    SPECIALIZED_ENUM_A = 1,
    SPECIALIZED_ENUM_B = 2,
    SPECIALIZED_ENUM_C,
  };
};

template <typename T>
void templatefunction(const T& a) {}
template <>
void templatefunction(const int& a) {}

enum ENUM_TEST {
  ENUM_A = 1,
  ENUM_B = 2,
  ENUM_C,
};
}