package com.discord.emoji_picker;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4155d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f4156e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ EmojiPickerScroller f4157i;

    public /* synthetic */ a(Function2 function2, EmojiPickerScroller emojiPickerScroller, int i5) {
        this.f4155d = i5;
        this.f4156e = function2;
        this.f4157i = emojiPickerScroller;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit scrollListenerDebounced$lambda$2$lambda$1;
        Unit scrollListenerDebounced$lambda$3;
        Unit scrollViewLayoutChanged$lambda$5$lambda$4;
        switch (this.f4155d) {
            case 0:
                scrollListenerDebounced$lambda$2$lambda$1 = EmojiPickerScroller.scrollListenerDebounced$lambda$2$lambda$1(this.f4156e, this.f4157i, ((Integer) obj).intValue());
                return scrollListenerDebounced$lambda$2$lambda$1;
            case 1:
                scrollListenerDebounced$lambda$3 = EmojiPickerScroller.scrollListenerDebounced$lambda$3(this.f4156e, this.f4157i, ((Boolean) obj).booleanValue());
                return scrollListenerDebounced$lambda$3;
            default:
                scrollViewLayoutChanged$lambda$5$lambda$4 = EmojiPickerScroller.scrollViewLayoutChanged$lambda$5$lambda$4(this.f4156e, this.f4157i, ((Integer) obj).intValue());
                return scrollViewLayoutChanged$lambda$5$lambda$4;
        }
    }
}
