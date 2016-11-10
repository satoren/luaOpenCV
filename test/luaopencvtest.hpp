
extern "C" int luaopen_cv(lua_State* L);

class LuaOpenCVTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    lua_.openlib("cv", luaopen_cv);
    lua_cv_ = lua_["cv"];
  }

  // virtual void TearDown() {}

  template <typename T>
  static inline std::string to_string(T v) {
    std::stringstream sstr;
    sstr << v;
    return sstr.str();
  }

  kaguya::State lua_;
  kaguya::LuaTable lua_cv_;
};