#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_JointLinkSimulationMode.h"
#include "ESQEX_Bonamik_FastMotionHandling.h"
#include "SQEX_BonamikFpsCorrectionDesc.h"
#include "SQEX_BonamikSceneManagerDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSceneManagerDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsUseGPU;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_SubStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Dt;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalGroup;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FString m_GroupName[48];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsEnableLSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LSScoeff_tran;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LSScoeff_rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_RootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsEnableLocalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_WindForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_DirRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_ForceRange;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalLinkBatches;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalLinksInBatch[15];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalConeBatches;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalConesInBatch[15];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalCollisionBatches;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalCollisionsInBatch[15];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalSelfCollisionBatches;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_TotalSelfCollisionsInBatch[15];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_JointLinkSimulationMode> m_JointLinkSimulationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_FastMotionHandling> m_FastMotionHandlingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableGroundCollision;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_RefUpVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
    
    BONAMIKRT_API FSQEX_BonamikSceneManagerDesc();
};

