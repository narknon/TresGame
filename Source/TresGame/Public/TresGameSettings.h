#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "TresGameSettings.generated.h"

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=GameSettings)
class UTresGameSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GamePadDecideType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GamePadIconType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KeyboardDispayType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SoundMasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SoundBgmVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SoundSeVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SoundVoiceVolume;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DisplayGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KeyConfigCustom;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MouseSensitivityCustom;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DispLanguage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceLanguage;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyConfigMain[21];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyConfigSub[21];
    
public:
    UTresGameSettings();
};

