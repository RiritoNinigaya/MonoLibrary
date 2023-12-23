#pragma once
#include <Windows.h>
namespace MonoLibrary //MonoLibrary For Hacking Some Mono Games(Unity3D) :D
{
	#include <mono/metadata/appdomain.h>
	#include <mono/metadata/assembly.h>
	#include <mono/metadata/image.h>
	#include <mono/metadata/mono-gc.h>
	#include <mono/metadata/metadata.h>
	#include <mono/metadata/threads.h>
}

BOOL __stdcall AllocateConsole() //Allocating Console :D
{
	return AllocConsole();
}

void AllocateMemory() {
	MonoLibrary::mono_gc_collect(5000); //Allocating 5GB for Memory :D
}

void* AttachMono() //If Not Attaching Try My MonoThread Attach Function!!!
{
	return reinterpret_cast<void*>(MonoLibrary::mono_thread_attach(MonoLibrary::mono_domain_get())); //Attaching Mono For Hacking Some Mono Games(As Yandere Simulator, Age of Advent, BattleTech, etc)
}

MonoLibrary::MonoThread* GetAttachMono() {
	MonoLibrary::MonoThread* thr_attach = MonoLibrary::mono_thread_attach(MonoLibrary::mono_domain_get());
	return thr_attach;
}