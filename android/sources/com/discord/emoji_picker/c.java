package com.discord.emoji_picker;

import com.discord.emoji_picker.EmojiPickerScroller;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4161d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f4162e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ EmojiPickerView f4163i;

    public /* synthetic */ c(Function2 function2, EmojiPickerView emojiPickerView, int i5) {
        this.f4161d = i5;
        this.f4162e = function2;
        this.f4163i = emojiPickerView;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit visibilityTracker_delegate$lambda$1$lambda$0;
        Unit scroller_delegate$lambda$5$lambda$2;
        switch (this.f4161d) {
            case 0:
                visibilityTracker_delegate$lambda$1$lambda$0 = EmojiPickerView.visibilityTracker_delegate$lambda$1$lambda$0(this.f4162e, this.f4163i, ((Boolean) obj).booleanValue());
                return visibilityTracker_delegate$lambda$1$lambda$0;
            default:
                scroller_delegate$lambda$5$lambda$2 = EmojiPickerView.scroller_delegate$lambda$5$lambda$2(this.f4162e, this.f4163i, (EmojiPickerScroller.ScrollEvent) obj);
                return scroller_delegate$lambda$5$lambda$2;
        }
    }
}
