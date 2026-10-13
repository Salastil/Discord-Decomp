package com.discord.file_manager;

import android.util.Base64;
import com.facebook.react.bridge.Promise;
import java.io.File;
import java.io.FileOutputStream;
import java.util.HashMap;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$writeFile$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class FileModule$writeFile$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $data;
    final /* synthetic */ String $encoding;
    final /* synthetic */ String $path;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $storageDir;
    int label;
    final /* synthetic */ FileModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$writeFile$1(FileModule fileModule, String str, Promise promise, String str2, String str3, String str4, Continuation continuation) {
        super(2, continuation);
        this.this$0 = fileModule;
        this.$storageDir = str;
        this.$promise = promise;
        this.$path = str2;
        this.$encoding = str3;
        this.$data = str4;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileModule$writeFile$1(this.this$0, this.$storageDir, this.$promise, this.$path, this.$encoding, this.$data, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        HashMap hashMap;
        HashMap hashMap2;
        File parentFile;
        HashMap hashMap3;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        hashMap = this.this$0.storageDirs;
        if (!hashMap.containsKey(this.$storageDir)) {
            Promise promise = this.$promise;
            String str = this.$storageDir;
            hashMap3 = this.this$0.storageDirs;
            promise.reject("err", "Unknown storage directory " + str + ". Supported storage directories: " + hashMap3.keySet());
            return Unit.a;
        }
        try {
            hashMap2 = this.this$0.storageDirs;
            Object obj2 = hashMap2.get(this.$storageDir);
            Intrinsics.checkNotNull(obj2);
            String str2 = (String) obj2;
            File file = new File(str2, this.$path + ".tmp");
            File file2 = new File(str2, this.$path);
            File parentFile2 = file2.getParentFile();
            if (parentFile2 != null && !parentFile2.exists() && (parentFile = file2.getParentFile()) != null && !parentFile.mkdirs()) {
                Promise promise2 = this.$promise;
                File parentFile3 = file2.getParentFile();
                promise2.reject("err", "Failed to create parent directory " + (parentFile3 != null ? parentFile3.toString() : null));
            }
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            String str3 = this.$encoding;
            String str4 = this.$data;
            try {
                if (Intrinsics.areEqual(str3, "base64")) {
                    fileOutputStream.write(Base64.decode(str4, 0));
                } else {
                    byte[] bytes = str4.getBytes(Charsets.UTF_8);
                    Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                    fileOutputStream.write(bytes);
                }
                fileOutputStream.getFD().sync();
                Unit unit = Unit.a;
                fileOutputStream.close();
                file.renameTo(file2);
                this.$promise.resolve(file2.getAbsolutePath());
            } finally {
            }
        } catch (Throwable th2) {
            this.$promise.reject(th2);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$writeFile$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
