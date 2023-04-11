#include "pch.h"
#include "UserManager.h"
#include "AccountManager.h"

void UserManager::ProcessSave()
{
	Account* account = AccountManager::Instance()->GetAccount(100);

	lock_guard<mutex> l(m_mutex);
}
