package com.discord.file_manager;

import com.facebook.react.bridge.Promise;
import java.io.File;
import java.util.HashMap;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$clearFolder$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$clearFolder$1\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,325:1\n13472#2,2:326\n*S KotlinDebug\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$clearFolder$1\n*L\n283#1:326,2\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule$clearFolder$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $path;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $storageDir;
    int label;
    final /* synthetic */ FileModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$clearFolder$1(FileModule fileModule, String str, Promise promise, String str2, Continuation continuation) {
        super(2, continuation);
        this.this$0 = fileModule;
        this.$storageDir = str;
        this.$promise = promise;
        this.$path = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileModule$clearFolder$1(this.this$0, this.$storageDir, this.$promise, this.$path, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        HashMap hashMap;
        HashMap hashMap2;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        hashMap = this.this$0.storageDirs;
        String str = (String) hashMap.get(this.$storageDir);
        if (str == null || StringsKt.K(str)) {
            Promise promise = this.$promise;
            String str2 = this.$storageDir;
            hashMap2 = this.this$0.storageDirs;
            promise.reject("err", "Unknown storage directory " + str2 + ". Supported storage directories: " + hashMap2.keySet());
            return Unit.a;
        }
        try {
            File file = new File(str, this.$path);
            File[] listFiles = file.listFiles();
            boolean z5 = false;
            if (listFiles != null) {
                for (File file2 : listFiles) {
                    file2.delete();
                }
            }
            Promise promise2 = this.$promise;
            File[] listFiles2 = file.listFiles();
            if (listFiles2 != null && listFiles2.length == 0) {
                z5 = true;
            }
            promise2.resolve(Boolean.valueOf(z5));
        } catch (Exception e9) {
            this.$promise.reject("err", "Cannot clear the folder", e9);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$clearFolder$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
