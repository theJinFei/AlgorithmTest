
#ifndef _CMD_HANDLER_H
#define _CMD_HANDLER_H

/* CmdHandler:
  �ӿ���

*/

class CmdHandler
{
public:
	~CmdHandler() {} // ������������Ϊ virtual

	virtual void OnCommand(char* cmdline) = 0; // ���麯��
};


#endif

