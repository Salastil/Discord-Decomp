package com.discord.misc.utilities.backoff;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.misc.utilities.backoff.ExponentialBackoff", f = "ExponentialBackoff.kt", l = {65, 67, 78, 79}, m = "performBackoff")
/* loaded from: classes.dex */
public final class ExponentialBackoff$performBackoff$1<T> extends c {
    Object L$0;
    Object L$1;
    Object L$2;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ ExponentialBackoff this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ExponentialBackoff$performBackoff$1(ExponentialBackoff exponentialBackoff, Continuation continuation) {
        super(continuation);
        this.this$0 = exponentialBackoff;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.performBackoff(null, null, this);
    }
}
