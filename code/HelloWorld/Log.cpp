#include <iostream>
#define LOG(x) std::cout << x << std::endl

class Log
{
public:
	enum LogLevel
	{
		Info = 0,Warn,Error
	};

	void LogInfo(const char* message)
	{
		if (m_LogLevel >= Info)
			LOG("[INFO]: " << message);
	}

	void LogWarn(const char* message)
	{
		if (m_LogLevel >= Warn)
			LOG("[WARN]: " << message);
	}

	void LogError(const char* message)
	{
		if (m_LogLevel >= Error)
			LOG("[ERROR]: " << message);
	}

	void SetLevel(LogLevel level)
	{
		m_LogLevel = level;
	}

private:
	int m_LogLevel = Info;
};