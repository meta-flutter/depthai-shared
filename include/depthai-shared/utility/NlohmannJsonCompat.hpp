#pragma once

#include <nlohmann/json.hpp>

// Check version of nlohmann json
#if(defined(NLOHMANN_JSON_VERSION_MAJOR) && defined(NLOHMANN_JSON_VERSION_MINOR))
    #if((NLOHMANN_JSON_VERSION_MAJOR < 3) || ((NLOHMANN_JSON_VERSION_MAJOR == 3) && (NLOHMANN_JSON_VERSION_MINOR < 6)))
static_assert(0, "DepthAI requires nlohmann library version 3.6.0 or higher");
    #else
        // Set up compat macros for nlohmann json (independent of version)
        #define DEPTHAI_NLOHMANN_JSON_EXPAND( x ) x
        #define DEPTHAI_NLOHMANN_JSON_GET_MACRO(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, NAME,...) NAME
        #define DEPTHAI_NLOHMANN_JSON_PASTE(...) DEPTHAI_NLOHMANN_JSON_EXPAND(DEPTHAI_NLOHMANN_JSON_GET_MACRO(__VA_ARGS__, \
                DEPTHAI_NLOHMANN_JSON_PASTE64, \
                DEPTHAI_NLOHMANN_JSON_PASTE63, \
                DEPTHAI_NLOHMANN_JSON_PASTE62, \
                DEPTHAI_NLOHMANN_JSON_PASTE61, \
                DEPTHAI_NLOHMANN_JSON_PASTE60, \
                DEPTHAI_NLOHMANN_JSON_PASTE59, \
                DEPTHAI_NLOHMANN_JSON_PASTE58, \
                DEPTHAI_NLOHMANN_JSON_PASTE57, \
                DEPTHAI_NLOHMANN_JSON_PASTE56, \
                DEPTHAI_NLOHMANN_JSON_PASTE55, \
                DEPTHAI_NLOHMANN_JSON_PASTE54, \
                DEPTHAI_NLOHMANN_JSON_PASTE53, \
                DEPTHAI_NLOHMANN_JSON_PASTE52, \
                DEPTHAI_NLOHMANN_JSON_PASTE51, \
                DEPTHAI_NLOHMANN_JSON_PASTE50, \
                DEPTHAI_NLOHMANN_JSON_PASTE49, \
                DEPTHAI_NLOHMANN_JSON_PASTE48, \
                DEPTHAI_NLOHMANN_JSON_PASTE47, \
                DEPTHAI_NLOHMANN_JSON_PASTE46, \
                DEPTHAI_NLOHMANN_JSON_PASTE45, \
                DEPTHAI_NLOHMANN_JSON_PASTE44, \
                DEPTHAI_NLOHMANN_JSON_PASTE43, \
                DEPTHAI_NLOHMANN_JSON_PASTE42, \
                DEPTHAI_NLOHMANN_JSON_PASTE41, \
                DEPTHAI_NLOHMANN_JSON_PASTE40, \
                DEPTHAI_NLOHMANN_JSON_PASTE39, \
                DEPTHAI_NLOHMANN_JSON_PASTE38, \
                DEPTHAI_NLOHMANN_JSON_PASTE37, \
                DEPTHAI_NLOHMANN_JSON_PASTE36, \
                DEPTHAI_NLOHMANN_JSON_PASTE35, \
                DEPTHAI_NLOHMANN_JSON_PASTE34, \
                DEPTHAI_NLOHMANN_JSON_PASTE33, \
                DEPTHAI_NLOHMANN_JSON_PASTE32, \
                DEPTHAI_NLOHMANN_JSON_PASTE31, \
                DEPTHAI_NLOHMANN_JSON_PASTE30, \
                DEPTHAI_NLOHMANN_JSON_PASTE29, \
                DEPTHAI_NLOHMANN_JSON_PASTE28, \
                DEPTHAI_NLOHMANN_JSON_PASTE27, \
                DEPTHAI_NLOHMANN_JSON_PASTE26, \
                DEPTHAI_NLOHMANN_JSON_PASTE25, \
                DEPTHAI_NLOHMANN_JSON_PASTE24, \
                DEPTHAI_NLOHMANN_JSON_PASTE23, \
                DEPTHAI_NLOHMANN_JSON_PASTE22, \
                DEPTHAI_NLOHMANN_JSON_PASTE21, \
                DEPTHAI_NLOHMANN_JSON_PASTE20, \
                DEPTHAI_NLOHMANN_JSON_PASTE19, \
                DEPTHAI_NLOHMANN_JSON_PASTE18, \
                DEPTHAI_NLOHMANN_JSON_PASTE17, \
                DEPTHAI_NLOHMANN_JSON_PASTE16, \
                DEPTHAI_NLOHMANN_JSON_PASTE15, \
                DEPTHAI_NLOHMANN_JSON_PASTE14, \
                DEPTHAI_NLOHMANN_JSON_PASTE13, \
                DEPTHAI_NLOHMANN_JSON_PASTE12, \
                DEPTHAI_NLOHMANN_JSON_PASTE11, \
                DEPTHAI_NLOHMANN_JSON_PASTE10, \
                DEPTHAI_NLOHMANN_JSON_PASTE9, \
                DEPTHAI_NLOHMANN_JSON_PASTE8, \
                DEPTHAI_NLOHMANN_JSON_PASTE7, \
                DEPTHAI_NLOHMANN_JSON_PASTE6, \
                DEPTHAI_NLOHMANN_JSON_PASTE5, \
                DEPTHAI_NLOHMANN_JSON_PASTE4, \
                DEPTHAI_NLOHMANN_JSON_PASTE3, \
                DEPTHAI_NLOHMANN_JSON_PASTE2, \
                DEPTHAI_NLOHMANN_JSON_PASTE1)(__VA_ARGS__))
        #define DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) func(v1)
        #define DEPTHAI_NLOHMANN_JSON_PASTE3(func, v1, v2) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v2)
        #define DEPTHAI_NLOHMANN_JSON_PASTE4(func, v1, v2, v3) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE3(func, v2, v3)
        #define DEPTHAI_NLOHMANN_JSON_PASTE5(func, v1, v2, v3, v4) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE4(func, v2, v3, v4)
        #define DEPTHAI_NLOHMANN_JSON_PASTE6(func, v1, v2, v3, v4, v5) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE5(func, v2, v3, v4, v5)
        #define DEPTHAI_NLOHMANN_JSON_PASTE7(func, v1, v2, v3, v4, v5, v6) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE6(func, v2, v3, v4, v5, v6)
        #define DEPTHAI_NLOHMANN_JSON_PASTE8(func, v1, v2, v3, v4, v5, v6, v7) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE7(func, v2, v3, v4, v5, v6, v7)
        #define DEPTHAI_NLOHMANN_JSON_PASTE9(func, v1, v2, v3, v4, v5, v6, v7, v8) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE8(func, v2, v3, v4, v5, v6, v7, v8)
        #define DEPTHAI_NLOHMANN_JSON_PASTE10(func, v1, v2, v3, v4, v5, v6, v7, v8, v9) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE9(func, v2, v3, v4, v5, v6, v7, v8, v9)
        #define DEPTHAI_NLOHMANN_JSON_PASTE11(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE10(func, v2, v3, v4, v5, v6, v7, v8, v9, v10)
        #define DEPTHAI_NLOHMANN_JSON_PASTE12(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE11(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
        #define DEPTHAI_NLOHMANN_JSON_PASTE13(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE12(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
        #define DEPTHAI_NLOHMANN_JSON_PASTE14(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE13(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
        #define DEPTHAI_NLOHMANN_JSON_PASTE15(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE14(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        #define DEPTHAI_NLOHMANN_JSON_PASTE16(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE15(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
        #define DEPTHAI_NLOHMANN_JSON_PASTE17(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE16(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
        #define DEPTHAI_NLOHMANN_JSON_PASTE18(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE17(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
        #define DEPTHAI_NLOHMANN_JSON_PASTE19(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE18(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18)
        #define DEPTHAI_NLOHMANN_JSON_PASTE20(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE19(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19)
        #define DEPTHAI_NLOHMANN_JSON_PASTE21(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE20(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20)
        #define DEPTHAI_NLOHMANN_JSON_PASTE22(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE21(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21)
        #define DEPTHAI_NLOHMANN_JSON_PASTE23(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE22(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22)
        #define DEPTHAI_NLOHMANN_JSON_PASTE24(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE23(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23)
        #define DEPTHAI_NLOHMANN_JSON_PASTE25(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE24(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24)
        #define DEPTHAI_NLOHMANN_JSON_PASTE26(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE25(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25)
        #define DEPTHAI_NLOHMANN_JSON_PASTE27(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE26(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26)
        #define DEPTHAI_NLOHMANN_JSON_PASTE28(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE27(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27)
        #define DEPTHAI_NLOHMANN_JSON_PASTE29(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE28(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28)
        #define DEPTHAI_NLOHMANN_JSON_PASTE30(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE29(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29)
        #define DEPTHAI_NLOHMANN_JSON_PASTE31(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE30(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30)
        #define DEPTHAI_NLOHMANN_JSON_PASTE32(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE31(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31)
        #define DEPTHAI_NLOHMANN_JSON_PASTE33(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE32(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32)
        #define DEPTHAI_NLOHMANN_JSON_PASTE34(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE33(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33)
        #define DEPTHAI_NLOHMANN_JSON_PASTE35(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE34(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34)
        #define DEPTHAI_NLOHMANN_JSON_PASTE36(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE35(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35)
        #define DEPTHAI_NLOHMANN_JSON_PASTE37(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE36(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36)
        #define DEPTHAI_NLOHMANN_JSON_PASTE38(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE37(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37)
        #define DEPTHAI_NLOHMANN_JSON_PASTE39(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE38(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38)
        #define DEPTHAI_NLOHMANN_JSON_PASTE40(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE39(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39)
        #define DEPTHAI_NLOHMANN_JSON_PASTE41(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE40(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40)
        #define DEPTHAI_NLOHMANN_JSON_PASTE42(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE41(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41)
        #define DEPTHAI_NLOHMANN_JSON_PASTE43(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE42(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42)
        #define DEPTHAI_NLOHMANN_JSON_PASTE44(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE43(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43)
        #define DEPTHAI_NLOHMANN_JSON_PASTE45(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE44(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44)
        #define DEPTHAI_NLOHMANN_JSON_PASTE46(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE45(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45)
        #define DEPTHAI_NLOHMANN_JSON_PASTE47(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE46(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46)
        #define DEPTHAI_NLOHMANN_JSON_PASTE48(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE47(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47)
        #define DEPTHAI_NLOHMANN_JSON_PASTE49(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE48(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48)
        #define DEPTHAI_NLOHMANN_JSON_PASTE50(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE49(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49)
        #define DEPTHAI_NLOHMANN_JSON_PASTE51(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE50(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50)
        #define DEPTHAI_NLOHMANN_JSON_PASTE52(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE51(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51)
        #define DEPTHAI_NLOHMANN_JSON_PASTE53(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE52(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52)
        #define DEPTHAI_NLOHMANN_JSON_PASTE54(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE53(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53)
        #define DEPTHAI_NLOHMANN_JSON_PASTE55(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE54(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54)
        #define DEPTHAI_NLOHMANN_JSON_PASTE56(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE55(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55)
        #define DEPTHAI_NLOHMANN_JSON_PASTE57(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE56(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56)
        #define DEPTHAI_NLOHMANN_JSON_PASTE58(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE57(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57)
        #define DEPTHAI_NLOHMANN_JSON_PASTE59(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE58(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58)
        #define DEPTHAI_NLOHMANN_JSON_PASTE60(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE59(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59)
        #define DEPTHAI_NLOHMANN_JSON_PASTE61(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE60(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60)
        #define DEPTHAI_NLOHMANN_JSON_PASTE62(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE61(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61)
        #define DEPTHAI_NLOHMANN_JSON_PASTE63(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE62(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62)
        #define DEPTHAI_NLOHMANN_JSON_PASTE64(func, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63) DEPTHAI_NLOHMANN_JSON_PASTE2(func, v1) DEPTHAI_NLOHMANN_JSON_PASTE63(func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63)

        #define DEPTHAI_NLOHMANN_JSON_TO(v1) nlohmann_json_j[#v1] = nlohmann_json_t.v1;
        #define DEPTHAI_NLOHMANN_JSON_FROM(v1) nlohmann_json_j.at(#v1).get_to(nlohmann_json_t.v1);

        /// Backward ported from nlohmann 3.9.0
        #define DEPTHAI_NLOHMANN_DEFINE_TYPE_INTRUSIVE(Type, ...)  \
            friend void to_json(nlohmann::json& nlohmann_json_j, const Type& nlohmann_json_t) { DEPTHAI_NLOHMANN_JSON_EXPAND(DEPTHAI_NLOHMANN_JSON_PASTE(DEPTHAI_NLOHMANN_JSON_TO, __VA_ARGS__)) } \
            friend void from_json(const nlohmann::json& nlohmann_json_j, Type& nlohmann_json_t) { DEPTHAI_NLOHMANN_JSON_EXPAND(DEPTHAI_NLOHMANN_JSON_PASTE(DEPTHAI_NLOHMANN_JSON_FROM, __VA_ARGS__)) }

        /// Backward ported from nlohmann 3.9.0
        #define DEPTHAI_NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Type, ...)  \
            inline void to_json(nlohmann::json& nlohmann_json_j, const Type& nlohmann_json_t) { DEPTHAI_NLOHMANN_JSON_EXPAND(DEPTHAI_NLOHMANN_JSON_PASTE(DEPTHAI_NLOHMANN_JSON_TO, __VA_ARGS__)) } \
            inline void from_json(const nlohmann::json& nlohmann_json_j, Type& nlohmann_json_t) { DEPTHAI_NLOHMANN_JSON_EXPAND(DEPTHAI_NLOHMANN_JSON_PASTE(DEPTHAI_NLOHMANN_JSON_FROM, __VA_ARGS__)) }

    #endif
#endif
