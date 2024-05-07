#pragma once
#include "CoreMinimal.h"
#include "ESQEX_ATTACH_OBJECT_NAME.h"
#include "ETresEffectAttachTrack_AttachType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ATTACH_OBJECT_NAME -FallbackName=ESQEX_ATTACH_OBJECT_NAME
#include "TresEffectAttachTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresEffectAttachTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEffectAttachTrack_AttachType> m_AttachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> m_AttachObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_RunEvenWhenSkippingKey: 1;
    
    TRESGAME_API FTresEffectAttachTrackKey();
};

