#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipPartsStruct.h"
#include "GameFramework/SaveGame.h"
#include "TresGummiShipHeader.h"
#include "TresGummiShipSticker.h"
#include "TinyShipSaveLoad.generated.h"

UCLASS(Blueprintable)
class UTinyShipSaveLoad : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiShipPartsStruct> m_body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TinyShipSaveSlotName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 UserIndex;
    
    UTinyShipSaveLoad();
};

