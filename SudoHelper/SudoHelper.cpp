// 这是主 DLL 文件。

#include "stdafx.h"

#include "SudoHelper.h"

using namespace System::Runtime::InteropServices;

namespace SudoHelper {
	void Helper::Sys(String^ cmd, bool pause)
	{
		IntPtr ptrCmd = Marshal::StringToHGlobalAnsi(cmd);
		try
		{
			system(static_cast<char*>(ptrCmd.ToPointer()));
			if (pause)
			{
				system("pause");
			}
		}
		catch (...)
		{
			Marshal::FreeHGlobal(ptrCmd);
			throw;
		}
		Marshal::FreeHGlobal(ptrCmd);
	}
}