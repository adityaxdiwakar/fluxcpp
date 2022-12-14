#include <string>
#include "nlohmann/json.hpp"
#pragma once

namespace flux {
  namespace auth {
    const std::string gt_refresh_token = "refresh_token";

    struct oauth_rsp {
      std::string access_token;
      std::string scope;
      std::string token_type;
      int expires_in;

      NLOHMANN_DEFINE_TYPE_INTRUSIVE(oauth_rsp, access_token, scope, token_type, expires_in);
    };
  };
};
