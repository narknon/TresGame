#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresGumiShipCheatManager.generated.h"

class UTresGumiShipCheatManager;
class UObject;

UCLASS(Blueprintable)
class UTresGumiShipCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresGumiShipCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGumiShipEnemyStateNameVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGumiShipEnemyRespawnWaitStatusVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGumiShipEnemyBoundsSphereVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGumiShipEnemyAttackableCheckRaycastVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugGumiShipLevelEntityActivateVolumeByTag(bool Visibility, FName TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugGumiShipLevelEntityActivateVolume(bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGumiShipEnemyMeshVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGumiShipEnemyAttackableRangeVisibilityByName(FName EnemyID, FName AttackName, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGumiShipEnemyAttackableRangeVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGumiShipEnemyAttackableCheckRaycastDebugDrawTime(float DebugDrawSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGumiShipEnemyAttachEffectsVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugGumiShipTriggerActorsVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendGumiShipEnemyDebugCommand(FName EnemyID, FName DebugCommandName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShipGimmick_Debug_HP_display();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShipGimmick_Debug_ForcedTermination_TreasureSphere();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShipGimmick_Debug_Cannon_Off();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetGumiMissionProgressNum(int32 dIndex, int32 dParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_ClearGumiMission(int32 dIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTresGumiShipCheatManager* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTresInstanceActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTreasureSphiaOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTravelPointOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_SymbolFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_NumberFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_NatureFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM075();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM074();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM073();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM072();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM071();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM070();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM069();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM068();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM067();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM066();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM065();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM064();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM063();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM062();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM061();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM060();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM059();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM058();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM057();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM056();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM055();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM054();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM053();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM052();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM051();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM050();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM049();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM048();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM047();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM046();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM045();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM044();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM043();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM042();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM041();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM040();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM039();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM038();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM037();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM036();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM035();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM034();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM033();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM032();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM031();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM030();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM029();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM028();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM027();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM026();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM025();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM024();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM023();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM022();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM021();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM020();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM019();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM018();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM017();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM016();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM015();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM014();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM013();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM012();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM011();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM010();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM009();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM008();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM007();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM006();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM005();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM004();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM003();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM002();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_GUMISTICKER_ITEM001();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSticker_EmblemFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugStaticMeshActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeaponFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM060();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM059();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM058();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM055();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM053();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM052();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM049();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM048();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM047();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM046();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM045();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM044();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM043();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpecialPlanFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRecommendedPlanFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPvShootingMode(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatternSymbolFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatternOrientalFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatternCutelFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatternBasicFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatternArtFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No96();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No95();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No94();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No93();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No92();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No91();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No90();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No9();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No89();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No88();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No87();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No86();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No85();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No84();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No83();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No82();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No81();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No80();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No8();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No79();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No78();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No77();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No76();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No75();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No74();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No73();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No72();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No71();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No70();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No7();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No69();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No68();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No67();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No66();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No65();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No64();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No63();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No62();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No61();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No60();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No6();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No59();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No58();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No57();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No56();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No55();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No54();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No53();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No52();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No51();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No50();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No5();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No49();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No48();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No47();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No46();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No45();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No44();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No43();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No42();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No41();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No40();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No4();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No39();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No38();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No37();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No36();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No35();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No34();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No33();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No32();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No31();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No30();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No3();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No29();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No28();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No27();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No26();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No25();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No24();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No23();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No22();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No21();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No20();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No19();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No18();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No17();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No16();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No15();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No14();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No13();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPattern_No0();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterialNature();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterialHandcraft();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterialEarth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterialBasicFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No9();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No8();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No7();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No6();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No57();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No56();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No55();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No54();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No53();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No52();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No51();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No50();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No5();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No49();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No48();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No47();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No46();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No45();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No44();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No43();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No42();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No41();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No40();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No4();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No39();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No38();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No37();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No36();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No35();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No34();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No33();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No32();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No31();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No30();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No3();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No29();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No28();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No27();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No26();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No25();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No24();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No23();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No22();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No21();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No20();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No19();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No18();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No17();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No16();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No15();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No14();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No13();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMaterial_No0();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugJumpPointOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiShipCaptureEnable(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiShipAngleZ(int32 inAngleZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiShipAngleX(int32 inAngleX);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM122();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM121();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM120();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM119();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM118();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM117();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM116();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM115();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM114();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM113();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM112();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM111();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM110();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM109();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM108();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM107();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM106();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM105();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM104();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM103();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM102();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM101();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM100();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM099();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM098();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM097();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM096();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM095();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM094();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM093();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM092();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM091();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM090();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM089();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM088();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM087();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM086();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM085();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM084();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM083();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM067();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM066();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM065();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM064();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM063();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM062();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM061();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM060();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM059();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM058();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM057();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiPlan_ITEM056();
    
    UFUNCTION(Exec)
    void DebugGummiLvel(uint32 InLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGummiItemFull();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipWorldGuideAllEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipTutorialSkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipToggleMergeMesh(bool flg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipSetRecordRank(int32 dIndex, int32 dParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipSetRailCollisionDisable();
    
    UFUNCTION(Exec)
    void DebugGumiShipSetGimmickFlag(const uint32 udFlag, const bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipSetDrawDamageInfo(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipSetBGCollisionEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipLevelEntityActivateVolumeEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipHudSuppression(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyTakeDamageZero(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyPartsHitPointVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyPartsDestroyOnDamage(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyHPGaugeIgnore(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyHPGaugeEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyHitPointVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipEnemyBattleStartTriggerIgnore(bool bIgnoreFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipClusterActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionSetTotalScore(uint32 udScore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipBattleMissionForceSearchRestart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipBattleMissionForceRetry();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipBattleMissionForceQuit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipBattleMissionDrawInfo(bool bIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGumiShipAllRecordRankA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGoWorldMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGetTreasureMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFullEquipAndMaxLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceGumiShipEnemyRespawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceChangeSchwarzGeistBGM(int32 nChangeBgmMagicNumber);
    
    UFUNCTION(Exec)
    void DebugExpPrize(uint32 inPrize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEditGummiShipSkeletalMeshTickEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugArenaVisited(bool isVisit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWingGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWheelGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWheelGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddWheelGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddStrikeGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index17();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index16();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShootingGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShieldGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShieldGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShieldGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddShieldGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddPipeGummi_01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index15();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index14();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index13();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddOptionGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddLaserGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddLaserGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddLaserGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddLaserGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEngineGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddEdgeGummi_01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_15();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_14();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_13();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCurveGummi_01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCockpitGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index13();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index01();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddCharacterGummi_index00();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_12();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_11();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_10();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_09();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_08();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_07();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_06();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_05();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_04();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_03();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_02();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddAeroGummi_01();
    
};

