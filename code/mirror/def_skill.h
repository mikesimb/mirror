#ifndef _DEF_SKILL_H
#define _DEF_SKILL_H

#include <QPixmap>
#include "def_DataType.h"

struct Info_SkillBasic {
	skillID ID;
	QString name;
	QPixmap icon;
	qint32 level;		//�����б��б�ʾ���ȼ�����ɫ�����д�����ǰ�ȼ�
	qint32 spell_basic;
	qint32 spell_add;
	qint32 cd;
	qint32 type;
	qint32 no;
	QString descr;
};

struct Info_SkillDamage
{
	qint32 id;
	qint32 type;
	qint32 times;
	qint32 extra;
	qint32 basic;
	qint32 add;
};
struct Info_SkillBuff
{
	qint32 id;
	qint32 time;
	qint32 rhp;
	qint32 damage;
	qint32 defense;
	qint32 speed;
};
struct Info_SkillSummon
{
	qint32 id;
	qint32 photo;
	qint32 type;
	qint32 hp;
	qint32 damage1;
	qint32 damage2;
	qint32 defense;
};

struct roleSkill
{
	skillID id;
	qint32 level;
	qint32 usdIndex;
};

struct skill_fight
{
	skillID id;
	QString name;
	QPixmap icon;
	qint32 level;		//�����б��б�ʾ���ȼ�����ɫ�����д�����ǰ�ȼ�
	qint32 spell;
	qint32 cd;
	qint32 cd_c;
	qint32 type;
	qint32 no;

	skill_fight() { 0; }
	skill_fight(const Info_SkillBasic &skillInfo, qint32 studyLv)
	{
		id = skillInfo.ID;
		name = skillInfo.name;
		icon = skillInfo.icon;
		level = studyLv;
		spell = skillInfo.spell_basic + skillInfo.spell_add * level;
		cd = skillInfo.cd;
		cd_c = 0;
		type = skillInfo.type;
		no = skillInfo.no;
	}
};

#endif	//#ifndef _DEF_SKILL_H