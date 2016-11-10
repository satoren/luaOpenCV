// File generated automatically, do not modify 
namespace gen_wrap_cv{
identity<void (*)(int)>::type fna = &cv::fna;
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_strcta{
identity<void (cv::strcta::*)(int)>::type fna = &cv::strcta::fna;
}// end of namespace strcta
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_purevirtualstruct{
identity<void (cv::purevirtualstruct::*)()>::type virtualfn = &cv::purevirtualstruct::virtualfn;
}// end of namespace purevirtualstruct
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_derived_virtual{
identity<void (cv::derived_virtual::*)()>::type virtualfn = &cv::derived_virtual::virtualfn;
}// end of namespace derived_virtual
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_strctb{
identity<void (cv::strctb::*)(int) const>::type fnb = &cv::strctb::fnb;
}// end of namespace gen_wrap_strctb
}// end of namespace gen_wrap_cv
KAGUYA_BINDINGS(cv) {
using namespace kaguya;
  function("fna", gen_wrap_cv::fna);
  class_<cv::strcta>("strcta")
    .constructor<>()
    .function("fna", gen_wrap_cv::gen_wrap_strcta::fna)
  ;
  class_<cv::purevirtualstruct>("purevirtualstruct")
    .function("virtualfn", gen_wrap_cv::gen_wrap_purevirtualstruct::virtualfn)
  ;
  class_<cv::derived_virtual,cv::purevirtualstruct>("derived_virtual")
    .constructor<>()
    .function("virtualfn", gen_wrap_cv::gen_wrap_derived_virtual::virtualfn)
  ;
  class_<cv::strctb>("strctb")
    .constructor<>()
    .function("fnb", gen_wrap_cv::gen_wrap_strctb::fnb)
  ;
  class_<cv::classa,cv::strcta>("classa")
    .constructors<void (),void (int)>()
    .class_function("__add", kaguya::overload((cv::classa (cv::classa::*)(const cv::classa &) const)&cv::classa::operator+,(cv::classa (cv::classa::*)(int) const)&cv::classa::operator+))
    .property("datamember", &cv::classa::datamember)
  ;
  class_<cv::classb,kaguya::MultipleBase<cv::strcta,cv::strctb> >("classb")
    .constructor<>()
  ;
  constant("ENUM_A", cv::ENUM_A);
  constant("ENUM_B", cv::ENUM_B);
  constant("ENUM_C", cv::ENUM_C);
#include "manual_bind.inc" 
}//end of KAGUYA_BINDINGS(cv) 
