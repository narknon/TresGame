#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipPartsStruct.h"
#include "GameFramework/SaveGame.h"
#include "TresGummiShipAbility.h"
#include "TresGummiShipHeader.h"
#include "TresGummiShipSticker.h"
#include "GummiShipSaveLoad.generated.h"

UCLASS(Blueprintable)
class UGummiShipSaveLoad : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipHeader m_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipAbility m_Ability;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiShipPartsStruct> m_body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GummiShipSaveSlotName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 UserIndex;
    
    UGummiShipSaveLoad();
};

