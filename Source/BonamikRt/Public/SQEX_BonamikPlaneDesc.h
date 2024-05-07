#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPlaneDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikPlaneDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ParticleAName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ParticleBName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_ParticleCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ParticleA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ParticleB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ParticleC;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CollisionBatchNo;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 m_ColId[8];
    
    BONAMIKRT_API FSQEX_BonamikPlaneDesc();
};

