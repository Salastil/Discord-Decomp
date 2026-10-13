package com.discord.chat.presentation.message;

import android.text.style.ForegroundColorSpan;
import com.discord.chat.bridge.contentnode.SubtextContentNode;
import com.discord.chat.presentation.message.messagepart.EmbedMessageAccessory;
import com.discord.chat.presentation.message.viewholder.MessagePartViewHolder;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.emoji_picker.EmojiPickerScroller;
import com.discord.emoji_picker.EmojiPickerView;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class j implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3930d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3931e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3932i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3933v;

    public /* synthetic */ j(Object obj, Object obj2, Object obj3, int i5) {
        this.f3930d = i5;
        this.f3931e = obj;
        this.f3932i = obj2;
        this.f3933v = obj3;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit onBindViewHolder$lambda$8;
        Unit spannable$lambda$72$lambda$51;
        Unit scroller_delegate$lambda$5$lambda$4;
        switch (this.f3930d) {
            case 0:
                onBindViewHolder$lambda$8 = MessageAccessoriesAdapter.onBindViewHolder$lambda$8((MessagePartViewHolder) this.f3931e, (EmbedMessageAccessory) this.f3932i, (MessageAccessoriesAdapter) this.f3933v, (Double) obj, (Integer) obj2);
                return onBindViewHolder$lambda$8;
            case 1:
                spannable$lambda$72$lambda$51 = TextUtilsKt.toSpannable$lambda$72$lambda$51((DraweeSpanStringBuilder) this.f3931e, (ForegroundColorSpan) this.f3932i, (SubtextContentNode) this.f3933v, (DraweeSpanStringBuilder) obj, (RenderContext) obj2);
                return spannable$lambda$72$lambda$51;
            default:
                scroller_delegate$lambda$5$lambda$4 = EmojiPickerView.scroller_delegate$lambda$5$lambda$4((Function2) this.f3931e, (EmojiPickerView) this.f3932i, (Function2) this.f3933v, (EmojiPickerScroller.ScrollEvent) obj, ((Boolean) obj2).booleanValue());
                return scroller_delegate$lambda$5$lambda$4;
        }
    }
}
