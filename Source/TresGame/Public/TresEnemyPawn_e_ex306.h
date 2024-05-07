#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Enums.h"
#include "TresEnemyXIIIDPawnBase.h"
#include "TresFRThinkOfYouInterface.h"
#include "ETresObjTypeProcChannel.h"
#include "VoiceSet_e_ex306.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyPawn_e_ex306.generated.h"

class UCurveFloat;
class ATresCharPawnBase;
class UTresClaymoreManager_e_ex306;
class UCurveVector;
class ATresWeaponBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex306 : public ATresEnemyXIIIDPawnBase, public ITresFRThinkOfYouInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlueBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnClaymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceStrongBodyDamageOnBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceStrongWorkResetOnBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceStrongBodyDamageOnStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxBerserkValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGaugeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_AddBerserkGageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AddBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SubBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageSubBerserkGageRate_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HealBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HealBerserkGageCurve_PhaseEx1_ThinkOfYou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1_ThinkOfYou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SubBerserkGageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageSubBerserkGageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HealBerserkGageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_Heal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AddBerserkGageCurve_Berserk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_Berserk;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVoiceSet_e_ex306 m_VoiceGroupSetArray[6];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponClaymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresClaymoreManager_e_ex306* m_ClaymoreManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresCharPawnBase> m_XionPawn;
    
public:
    ATresEnemyPawn_e_ex306(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void OpenHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeBlueBurst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeBerserk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBerserkGageZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBerserkGageMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBerserkGage200() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBerserkGage100() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugThinkOfYouDamageDisp(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void DebugBodyTypeFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void DebugBerserkGageFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DrawAlertMessage(const FString& inMsg);
    
    
    // Fix for true pure virtual functions not being implemented
};

