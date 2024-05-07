#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_OuterScaffoldGroupParam.h"
#include "GameFramework/Actor.h"
#include "TresEnemyEx711_HopLevelParam.h"
#include "TresEnemyEx711_TornadoInvolveParam.h"
#include "TresEnemyEx711_AthleticFlowLevelParam.h"
#include "TresEnemyEx711_GimmickBouncyPetsParam.h"
#include "TresEnemyEx711_GimmickBouncyPetsGroupParam.h"
#include "TresGimmick_e_ex711_PhysicsActorManager.generated.h"

class ATresGimmick_e_ex711_PhysicsActor;

UCLASS(Blueprintable, HideDropdown)
class ATresGimmick_e_ex711_PhysicsActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_AthleticFlowRootNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_AthleticFlowOneRootNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectDistXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectDistZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectLastRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AthleticFlowObjectLastRotSpeed2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ObjectDistMin_Test;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ObjectDistMax_Test;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ObjectMoveSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ObjectMoveSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HopActorOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HopActorHeightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HopActorOffsetDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HopActorOffsetDistRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_PhysicsActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_HopLevelParam> m_HopLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_AthleticFlowActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_AthleticFlowDummyActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_ShootFlowActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_AthleticFlowLevelParam> m_AthleticFlowLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_AthleticFlowLevelParam> m_AthleticFlowLevel2ParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_TornadoInvolveParam> m_TornadoInvolveParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_GimmickBouncyPetsParam> m_GimmickBouncyPetsParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_GimmickBouncyPetsGroupParam> m_GimmickBouncyPetsGroupParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_OuterScaffoldGroupParam> m_OuterScaffoldGroupParamArray;
    
public:
    ATresGimmick_e_ex711_PhysicsActorManager(const FObjectInitializer& ObjectInitializer);
};

