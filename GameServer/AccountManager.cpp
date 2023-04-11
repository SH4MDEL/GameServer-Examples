#include "pch.h"
#include "AccountManager.h"
#include "UserManager.h"

void AccountManager::ProcessLogin()
{
	// accountLock
	lock_guard<mutex> l(m_mutex);

	// userlock
	User* user = UserManager::Instance()->GetUser(100);
}
