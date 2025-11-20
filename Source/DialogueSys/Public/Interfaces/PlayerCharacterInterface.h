// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCharacterInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, NotBlueprintable, BlueprintType)
class UPlayerCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DIALOGUESYS_API IPlayerCharacterInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual void StartDialogue(AActor* DialogueActor, UDataTable* DialogueDT) = 0;

	UFUNCTION(BlueprintCallable)
	virtual APlayerController* GetPlayerController() = 0;
};
