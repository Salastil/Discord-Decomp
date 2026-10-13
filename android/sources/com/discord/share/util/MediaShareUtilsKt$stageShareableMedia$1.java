package com.discord.share.util;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.share.util.MediaShareUtilsKt", f = "MediaShareUtils.kt", l = {ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE}, m = "stageShareableMedia")
/* loaded from: classes.dex */
public final class MediaShareUtilsKt$stageShareableMedia$1 extends c {
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    int label;
    /* synthetic */ Object result;

    public MediaShareUtilsKt$stageShareableMedia$1(Continuation continuation) {
        super(continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return MediaShareUtilsKt.stageShareableMedia(null, null, null, null, this);
    }
}
