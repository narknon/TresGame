#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "TresDebugTextRender.generated.h"

class UMaterialInterface;
class UTextRenderComponent;
class UFont;

UCLASS(Blueprintable)
class ATresDebugTextRender : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TextMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
public:
    ATresDebugTextRender(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& Value);
    
};

