
#include <stdio.h>
#include <string.h>
#include "CmdInput.h"


CmdInput::CmdInput()
{
	m_handler = NULL;
}

void CmdInput::SetHandler(CmdHandler* h)
{
	m_handler = h;
}

int CmdInput::Run()
{
	char cmdline[256];

	while(1)
	{
		// ����
		printf("> "); 
		gets(cmdline);

		// �˳�
		if(strcmp(cmdline, "exit") == 0)
		{
			break;
		}		

		// ������ִ��
		if(m_handler)
		{
			m_handler->OnCommand(cmdline);
		}
	}
	return 0;
}



