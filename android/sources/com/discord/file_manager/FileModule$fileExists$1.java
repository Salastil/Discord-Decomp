package com.discord.file_manager;

import com.facebook.react.bridge.Promise;
import java.io.File;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$fileExists$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class FileModule$fileExists$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $path;
    final /* synthetic */ Promise $promise;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$fileExists$1(Promise promise, String str, Continuation continuation) {
        super(2, continuation);
        this.$promise = promise;
        this.$path = str;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileModule$fileExists$1(this.$promise, this.$path, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            this.$promise.resolve(Boolean.valueOf(new File(this.$path).exists()));
        } catch (Throwable th2) {
            this.$promise.reject(th2);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$fileExists$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
