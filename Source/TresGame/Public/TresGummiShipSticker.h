#pragma once
#include "CoreMinimal.h"
#include "ETresStickerType.h"
#include "TresGummiShipSticker.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipSticker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresStickerType m_nStickerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nStickerID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_posX;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_posY;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_posZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_flip;
    
    TRESGAME_API FTresGummiShipSticker();
};

