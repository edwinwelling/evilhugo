#pragma once
#include <string>
enum class ideetje { PAK_EERSTE, PAK_WILLEKEURIG, GEEN_IDEE };

ideetje maak_es_een_ideetje(const std::string &ideetje_als_een_woordje);

std::string maak_es_een_woordje(const ideetje idee );