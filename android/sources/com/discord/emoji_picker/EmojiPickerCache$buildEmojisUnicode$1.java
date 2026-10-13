package com.discord.emoji_picker;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.emoji_picker.EmojiPickerCache", f = "EmojiPickerCache.kt", l = {156}, m = "buildEmojisUnicode")
/* loaded from: classes.dex */
public final class EmojiPickerCache$buildEmojisUnicode$1 extends lo.c {
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ EmojiPickerCache this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public EmojiPickerCache$buildEmojisUnicode$1(EmojiPickerCache emojiPickerCache, Continuation continuation) {
        super(continuation);
        this.this$0 = emojiPickerCache;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object buildEmojisUnicode;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        buildEmojisUnicode = this.this$0.buildEmojisUnicode(null, this);
        return buildEmojisUnicode;
    }
}
