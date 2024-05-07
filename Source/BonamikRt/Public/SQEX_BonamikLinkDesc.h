#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_LinkType.h"
#include "SQEX_BonamikLinkDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikLinkDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ParentBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ChildBodyName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ParentId;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ChildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_LinkType> m_LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsSelfCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableJointTwist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableConeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LinkStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LinkParentStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeInnerStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeOuterStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeParentStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsCollisionReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsCollisionRepulsor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsLRA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LRAstr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LRAdamping;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_LinkBatchNo;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ConeBatchNo;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_CollisionBatchNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PinStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KdiTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KdiRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConcaveRatio;
    
    BONAMIKRT_API FSQEX_BonamikLinkDesc();
};

