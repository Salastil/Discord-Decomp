package com.discord.media.utils;

import com.facebook.imageutils.JfifUtil;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.utils.MediaResolver", f = "MediaResolver.kt", l = {204, JfifUtil.MARKER_SOI, 232}, m = "handleImage")
/* loaded from: classes.dex */
public final class MediaResolver$handleImage$1 extends c {
    Object L$0;
    boolean Z$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ MediaResolver this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaResolver$handleImage$1(MediaResolver mediaResolver, Continuation continuation) {
        super(continuation);
        this.this$0 = mediaResolver;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object handleImage;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        handleImage = this.this$0.handleImage(null, 0, false, false, false, this);
        return handleImage;
    }
}
