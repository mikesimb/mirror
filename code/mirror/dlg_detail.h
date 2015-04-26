#ifndef DLG_DETAIL_H
#define DLG_DETAIL_H

#include <QWidget>
#include "ui_dlg_detail.h"
#include "def_item_equip.h"
#include "ItemDefine.h"
#include "RoleDefine.h"

class Dlg_Detail : public QWidget
{
	Q_OBJECT

public:
	Dlg_Detail(QWidget *parent = 0);
	~Dlg_Detail();
	//��ʾװ������ϸ��Ϣ
	void DisplayEquipInfo(QPoint pos, const Info_equip *equip, const RoleInfo *roleInfo);
	void DisplayItemInfo(QPoint pos, const Info_Item *item, quint32 role_lvl);

private:
	Ui::dlg_detail ui;
};

#endif // DLG_DETAIL_H