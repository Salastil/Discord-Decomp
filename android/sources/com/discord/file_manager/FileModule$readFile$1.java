package com.discord.file_manager;

import android.util.Base64;
import com.facebook.react.bridge.Promise;
import java.io.File;
import java.io.FileInputStream;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.x;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$readFile$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$readFile$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,325:1\n1#2:326\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule$readFile$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $encoding;
    final /* synthetic */ String $path;
    final /* synthetic */ Promise $promise;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$readFile$1(String str, String str2, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.$path = str;
        this.$encoding = str2;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileModule$readFile$1(this.$path, this.$encoding, this.$promise, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            FileInputStream fileInputStream = new FileInputStream(new File(this.$path));
            try {
                byte[] E = com.facebook.imagepipeline.nativecode.b.E(fileInputStream);
                fileInputStream.close();
                if (Intrinsics.areEqual(this.$encoding, "base64")) {
                    this.$promise.resolve(Base64.encodeToString(E, 2));
                } else {
                    this.$promise.resolve(x.g(E));
                }
            } finally {
            }
        } catch (Throwable th2) {
            this.$promise.reject(th2);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$readFile$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
