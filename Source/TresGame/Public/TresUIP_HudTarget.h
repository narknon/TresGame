#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_ButtonCount.h"
#include "TresCockpitParts.h"
#include "TresCockpitTargetInfo.h"
#include "TresUIP_HudTarget_UltimaLock.h"
#include "TresUIP_HudTarget_PushButtonMark.h"
#include "TresUIP_HudTarget.generated.h"

class UAudioComponent;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudTarget : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresCockpitTargetInfo> m_targetInfoAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_FocusModeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ButtonNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresUIP_HudTarget_ButtonCount m_ButtonCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GradeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GradeTextValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ExpPointPlain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TargetCursorPlain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresUIP_HudTarget_UltimaLock m_UltimaLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CurrentFlowScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresUIP_HudTarget_PushButtonMark m_PushButtonMarkInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_addInput;
    
public:
    UTresUIP_HudTarget();
};

