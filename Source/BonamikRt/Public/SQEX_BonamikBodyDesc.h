#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_CollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_ConstraintType.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikBodyDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikBodyDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_JointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ParentBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ChildBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ParentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ChildId;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_GroupID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 m_ColId[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsKinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsMultipleCollisionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Inertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Bounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WindDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WindLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LocalTransCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxLocalTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_CollisionShape> m_ColShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_ConstraintType> m_AddiConstType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AddiConstStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AddiConstRad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat m_LocalRotation;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_CollisionBatchNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_LocalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConcaveRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LFcoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParkRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LFdrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LFlift;
    
    BONAMIKRT_API FSQEX_BonamikBodyDesc();
};

