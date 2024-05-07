#pragma once
#include "CoreMinimal.h"
#include "EX355_EffectGroupID.h"
#include "TresEnemyXIIILDPawnBase.h"
#include "ETresBodyCollReactionType.h"
#include "EX355_RemoteEventID.h"
#include "VoiceSet_e_ex355.h"
#include "ETresObjTypeProcChannel.h"
#include "TresAnimNotifyState_AttachEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyPawn_e_ex355.generated.h"

class ATresWeaponBase;
class UCurveFloat;
class UTresClaymoreManager_e_ex355;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex355 : public ATresEnemyXIIILDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnClaymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleWeaponOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultBodyReactionTypeOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fResetBodyReactionTypeOnLandDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceStrongBodyDamageOnStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxBodyStrongValueOnRevenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bModifyMaxBodyStrongValueOnRevenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeOnGageZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBodyReactionTypeOnGageZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeOnGage200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBodyReactionTypeOnGage200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRevengeOnGageZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRevengeOnGaze200;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX355_RemoteEventID m_RemoteEventIDArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxBerserkValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGaugeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SubBerserkGageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageSubBerserkGageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOnDamageSubBerserkGageRate_MaxReactionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnDamageSubBerserkGageRate_MaxReactionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AddBerserkGageCurve_Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HealBerserkGageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AddBerserkGageCurve_Berserk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnDamageAddBerserkGageRate_Berserk;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVoiceSet_e_ex355 m_VoiceGroupSetArray[11];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX355_EffectGroupID m_GroupID[5];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponClaymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresClaymoreManager_e_ex355* m_ClaymoreManager;
    
public:
    ATresEnemyPawn_e_ex355(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void OpenHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeCharge() const;
    
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
    void DebugBodyTypeFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void DebugBerserkGageFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DrawAlertMessage(const FString& inMsg);
    
};

