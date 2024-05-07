#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BigTornadoProjPosBoneInfo.h"
#include "BigTornadoHomingProjInfo.h"
#include "BigTornadoProjInfo.h"
#include "TornadoBlowSet.h"
#include "DiveAttackPosition_e_he903.h"
#include "TresAttack7_e_he903_BigTornado.generated.h"

class ATresProjectileBase;
class ATresCameraHe903;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack7_e_he903_BigTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FBigTornadoProjPosBoneInfo m_ProjPosBoneInfoArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBigTornadoProjInfo> m_ProjInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBigTornadoHomingProjInfo> m_HomingProjInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHomingProjDenominator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHomingProjCountOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_fHomingIgnoreTimeAfterHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopEndTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDiveAttackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiveAttackPosition_e_he903 m_DiveAttackPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTornadoBlowSet m_BlowSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_ProjArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraHe903* m_Camera;
    
public:
    UTresAttack7_e_he903_BigTornado();
};

