package com.discord.emoji_picker;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4175d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ EmojiPickerViewAdapter f4176e;

    public /* synthetic */ g(EmojiPickerViewAdapter emojiPickerViewAdapter, int i5) {
        this.f4175d = i5;
        this.f4176e = emojiPickerViewAdapter;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit spacerTopHeight$lambda$2;
        Unit spacerBottomHeight$lambda$3;
        int i5 = this.f4175d;
        int intValue = ((Integer) obj).intValue();
        switch (i5) {
            case 0:
                spacerTopHeight$lambda$2 = EmojiPickerViewAdapter.setSpacerTopHeight$lambda$2(this.f4176e, intValue);
                return spacerTopHeight$lambda$2;
            default:
                spacerBottomHeight$lambda$3 = EmojiPickerViewAdapter.setSpacerBottomHeight$lambda$3(this.f4176e, intValue);
                return spacerBottomHeight$lambda$3;
        }
    }
}
