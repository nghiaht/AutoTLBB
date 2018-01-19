#ifndef PREPROCESSOR_HPP
#define PREPROCESSOR_HPP

#define APP_SYNTHESIZE(varType,colName,funcName) \
  private: \
  varType colName; \
  public: \
  varType get##funcName() const { \
  return colName; \
  } \
  void set##funcName(const varType var) { \
  colName = var;\
  }

#define APP_SYNTHESIZE_PTR(varType,colName,funcName) \
  private: \
  varType *colName; \
  public: \
  varType* get##funcName() const { \
  return colName; \
  } \
  void set##funcName(varType* var) { \
  colName = var;\
  }

#define APP_SYNTHESIZE_CLASS(varType,colName,funcName) \
  private: \
  varType colName; \
  public: \
  varType get##funcName() const { \
  return colName; \
  } \
  void set##funcName(varType var) { \
  colName = var;\
  }

#define APP_SYNTHESIZE_BOOL(colName,funcName) \
  private: \
  bool colName = false; \
  public: \
  bool get##funcName() const { \
  return colName; \
  } \
  void set##funcName(const bool var) { \
  colName = var;\
  }

#endif // PREPROCESSOR_HPP
