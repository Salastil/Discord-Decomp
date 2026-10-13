package com.discord.misc.utilities.coroutines;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.misc.utilities.coroutines.CollectWithLeadingDebounceKt", f = "CollectWithLeadingDebounce.kt", l = {27}, m = "collectWithLeadingDebounce")
/* loaded from: classes.dex */
public final class CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1<T> extends c {
    int label;
    /* synthetic */ Object result;

    public CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1(Continuation continuation) {
        super(continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return CollectWithLeadingDebounceKt.collectWithLeadingDebounce(null, 0L, null, this);
    }
}
