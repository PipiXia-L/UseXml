/*******************************************/
		/*存取修改XML表格数据*/
/*******************************************/
#prama once
#include "tinyxml2.h"
#include <vector>
#include <map>
#include <string>

using namespace std;

class CUseXmlData
{
public:
	CUseXmlData(void);
	~CUseXmlData(void);
	
	BOOL SetFilePathName(const string strFilePathName);
	BOOL SetMainFormName(const string strMainFormName);
	BOOL SetAttributeName(const string strAttributeName);
	BOOL SetChildElement(const vector<string> vStrChildElement);
	
	BOOL ReadXmlFileData(map<string, vector<string>> &mapStrXmlReadData);
	BOOL SaveXmlFileData(map<string, vector<string>> mapStrXmlSaveData);
	BOOL ModifyXmlFileData(map<string, map<string, string>> mapStrXmlModifyData);
	
private:
	string m_strFilePathName;
	string m_strMainFormName;
	string m_strAttributeName;
	vector<string> m_vStrChildElement;
}
