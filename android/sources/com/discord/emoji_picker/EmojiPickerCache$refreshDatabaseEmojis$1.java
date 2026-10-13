package com.discord.emoji_picker;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.emoji_picker.EmojiPickerCache", f = "EmojiPickerCache.kt", l = {68}, m = "refreshDatabaseEmojis")
/* loaded from: classes.dex */
public final class EmojiPickerCache$refreshDatabaseEmojis$1 extends lo.c {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ EmojiPickerCache this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public EmojiPickerCache$refreshDatabaseEmojis$1(EmojiPickerCache emojiPickerCache, Continuation continuation) {
        super(continuation);
        this.this$0 = emojiPickerCache;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.refreshDatabaseEmojis(this);
    }
}
