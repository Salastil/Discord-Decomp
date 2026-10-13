package com.discord.media.utils;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.utils.MediaResolver", f = "MediaResolver.kt", l = {152, 173, 176}, m = "handleVideo")
/* loaded from: classes.dex */
public final class MediaResolver$handleVideo$1 extends c {
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ MediaResolver this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaResolver$handleVideo$1(MediaResolver mediaResolver, Continuation continuation) {
        super(continuation);
        this.this$0 = mediaResolver;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object handleVideo;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        handleVideo = this.this$0.handleVideo(null, false, null, this);
        return handleVideo;
    }
}
