package com.discord.external_pip;

import com.facebook.react.bridge.Promise;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ExternalPipModule$setActive$1$1 implements Function1<Result, Unit> {
    final /* synthetic */ Promise $onResultPromise;
    final /* synthetic */ ExternalPipModule this$0;

    public ExternalPipModule$setActive$1$1(ExternalPipModule externalPipModule, Promise promise) {
        this.this$0 = externalPipModule;
        this.$onResultPromise = promise;
    }

    @Override // kotlin.jvm.functions.Function1
    public /* synthetic */ Object invoke(Object obj) {
        m958invoke(((Result) obj).f13477d);
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m958invoke(Object obj) {
        Throwable a = Result.a(obj);
        if (a != null) {
            this.$onResultPromise.reject(a);
        } else {
            this.$onResultPromise.resolve(Boolean.TRUE);
        }
    }
}
