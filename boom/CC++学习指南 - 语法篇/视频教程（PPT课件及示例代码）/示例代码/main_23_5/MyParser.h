
#ifndef _MY_PARSER_H
#define _MY_PARSER_H

#include "CmdHandler.h"

/* MyParser:
    һ����ѭ��CmdHandler�ӿڵ���
*/

class MyParser : public CmdHandler
{
public:
	MyParser();

public:
	// �����ӿڼ�
	virtual void OnCommand(char* cmdline);

private:
	// ��������
	int Split(char text[], char* parts[]);
};

#endif


