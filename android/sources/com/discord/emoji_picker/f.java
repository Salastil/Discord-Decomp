package com.discord.emoji_picker;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4173d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ EmojiPickerViewAdapter f4174e;

    public /* synthetic */ f(EmojiPickerViewAdapter emojiPickerViewAdapter, int i5) {
        this.f4173d = i5;
        this.f4174e = emojiPickerViewAdapter;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit emojis$lambda$1;
        Unit coreData$lambda$0;
        switch (this.f4173d) {
            case 0:
                emojis$lambda$1 = EmojiPickerViewAdapter.setEmojis$lambda$1(this.f4174e);
                return emojis$lambda$1;
            default:
                coreData$lambda$0 = EmojiPickerViewAdapter.setCoreData$lambda$0(this.f4174e);
                return coreData$lambda$0;
        }
    }
}
