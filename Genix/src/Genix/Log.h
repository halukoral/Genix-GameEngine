#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Genix
{
	class GENIX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define GN_CORE_ERROR(...)	::Genix::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GN_CORE_WARN(...)	::Genix::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GN_CORE_INFO(...)	::Genix::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GN_CORE_TRACE(...)	::Genix::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GN_CORE_FATAL(...)	::Genix::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define GN_ERROR(...)		::Genix::Log::GetClientLogger()->error(__VA_ARGS__)
#define GN_WARN(...)		::Genix::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GN_INFO(...)		::Genix::Log::GetClientLogger()->info(__VA_ARGS__)
#define GN_TRACE(...)		::Genix::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GN_FATAL(...)		::Genix::Log::GetClientLogger()->fatal(__VA_ARGS__)
