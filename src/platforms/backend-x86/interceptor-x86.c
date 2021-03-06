/**
 *    Copyright 2017 jmpews
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "interceptor-x86.h"
#include "zzinfo.h"
#include <stdlib.h>
#include <string.h>

#define ZZ_X86_TINY_REDIRECT_SIZE 4
#define ZZ_X86_FULL_REDIRECT_SIZE 16

InterceptorBackend *InteceptorBackendNew(ExecuteMemoryManager *emm) { return NULL; }

CodeSlice *zz_code_patch_x86_writer(ZzX86Writer *x86_writer, ExecuteMemoryManager *emm, zz_addr_t target_addr,
                                      zz_size_t range_size) {
    return NULL;
}
CodeSlice *zz_code_patch_x86_relocate_writer(ZzX86Relocator *relocator, ZzX86Writer *x86_writer,
                                               ExecuteMemoryManager *emm, zz_addr_t target_addr, zz_size_t range_size) {
    return NULL;
}

void TrampolineFree(HookEntry *entry) {
    if (entry->on_invoke_trampoline) {
        //TODO
    }

    if (entry->on_enter_trampoline) {
        //TODO
    }

    if (entry->on_enter_transfer_trampoline) {
        //TODO
    }

    if (entry->on_leave_trampoline) {
        //TODO
    }

    if (entry->on_invoke_trampoline) {
        //TODO
    }
}

void TrampolinePrepare(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineBuildForEnterTransfer(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineBuildForEnter(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineBuildForInvoke(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineBuildForInstructionLeave(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineBuildForLeave(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }

void TrampolineActivate(InterceptorBackend *self, HookEntry *entry) { return RS_FAILED; }
