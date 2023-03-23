#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Journal
{

	class JOURNAL_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> _coreLogger;
		static std::shared_ptr<spdlog::logger> _clientLogger;

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return _coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return _clientLogger; }

	};

}

//core log messages
#define JR_CORE_ERROR(...)	 Journal::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JR_CORE_WARN(...)	 Journal::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JR_CORE_INFO(...)	 Journal::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JR_CORE_TRACE(...)	 Journal::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define JR_CORE_FATAL(...)	 Journal::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define JR_ERROR(...)	     Journal::Log::GetClientLogger()->error(__VA_ARGS__)
#define JR_WARN(...)	     Journal::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JR_INFO(...)	     Journal::Log::GetClientLogger()->info(__VA_ARGS__)
#define JR_TRACE(...)	     Journal::Log::GetClientLogger()->trace(__VA_ARGS__)
#define JR_FATAL(...)	     Journal::Log::GetClientLogger()->fatal(__VA_ARGS__)
