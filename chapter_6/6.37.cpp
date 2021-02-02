// write declarations

// type alias
using arrS = std::string[10];
typedef std::string arrS[10];

// trailing return
auto func(std::string i) -> std::string(&)[10];

// decltype()
decltype(std::string str[10]) &strRef(std::string s) // a ref to type string
