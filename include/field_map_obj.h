#ifndef POKEEMERALD_FIELD_MAP_OBJ_H
#define POKEEMERALD_FIELD_MAP_OBJ_H

// Exported struct declarations

// Exported RAM declarations



// Exported ROM declarations

void sub_808D438(void);
u8 GetFieldObjectIdByLocalIdAndMap(u8, u8, u8);
bool8 TryGetFieldObjectIdByLocalIdAndMap(u8, u8, u8, u8 *);
u8 GetFieldObjectIdByXY(s16, s16);
void FieldObjectSetDirection(struct MapObject *, u8);
u8 GetFieldObjectIdByXY(s16, s16);
u8 sub_808D4F4(void);
void RemoveFieldObject(struct MapObject *);
void RemoveFieldObjectByLocalIdAndMap(u8, u8, u8);

// Exported data declarations

extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

#endif //POKEEMERALD_FIELD_MAP_OBJ_H
