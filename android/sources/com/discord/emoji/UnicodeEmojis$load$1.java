package com.discord.emoji;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.emoji.UnicodeEmojis", f = "UnicodeEmojis.kt", l = {74, 24}, m = "load")
/* loaded from: classes.dex */
public final class UnicodeEmojis$load$1 extends c {
    Object L$0;
    Object L$1;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ UnicodeEmojis this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public UnicodeEmojis$load$1(UnicodeEmojis unicodeEmojis, Continuation continuation) {
        super(continuation);
        this.this$0 = unicodeEmojis;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.load(null, this);
    }
}
