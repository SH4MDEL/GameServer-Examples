#pragma once
#include <mutex>

class Account
{
	// TODO
};

class AccountManager
{
public:
	static AccountManager* Instance()
	{
		static AccountManager instance;
		return &instance;
	}

	Account* GetAccount(int32 id)
	{
		lock_guard<mutex> g(m_mutex);
		// ¹º°¡¸¦ °®°í ¿È
		return nullptr;
	}

	void ProcessLogin();

private:
	mutex m_mutex;
	
};

