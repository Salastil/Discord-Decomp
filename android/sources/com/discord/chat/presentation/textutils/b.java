package com.discord.chat.presentation.textutils;

import com.facebook.drawee.generic.GenericDraweeHierarchyBuilder;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4113d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ RenderContext f4114e;

    public /* synthetic */ b(RenderContext renderContext, int i5) {
        this.f4113d = i5;
        this.f4114e = renderContext;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit renderEmoji$lambda$2$lambda$1;
        Unit spannable$lambda$72$lambda$71$lambda$70$lambda$69;
        switch (this.f4113d) {
            case 0:
                renderEmoji$lambda$2$lambda$1 = EmojiRendererKt.renderEmoji$lambda$2$lambda$1(this.f4114e, (GenericDraweeHierarchyBuilder) obj);
                return renderEmoji$lambda$2$lambda$1;
            default:
                spannable$lambda$72$lambda$71$lambda$70$lambda$69 = TextUtilsKt.toSpannable$lambda$72$lambda$71$lambda$70$lambda$69(this.f4114e, (GenericDraweeHierarchyBuilder) obj);
                return spannable$lambda$72$lambda$71$lambda$70$lambda$69;
        }
    }
}
