package com.discord.chat.presentation.textutils;

import android.view.View;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4119d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ RenderContext f4120e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ LinkContentNode f4121i;

    public /* synthetic */ e(LinkContentNode linkContentNode, RenderContext renderContext) {
        this.f4121i = linkContentNode;
        this.f4120e = renderContext;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean spannable$lambda$72$lambda$23;
        Unit spannable$lambda$72$lambda$24;
        switch (this.f4119d) {
            case 0:
                spannable$lambda$72$lambda$23 = TextUtilsKt.toSpannable$lambda$72$lambda$23(this.f4121i, this.f4120e, (View) obj);
                return Boolean.valueOf(spannable$lambda$72$lambda$23);
            default:
                spannable$lambda$72$lambda$24 = TextUtilsKt.toSpannable$lambda$72$lambda$24(this.f4120e, this.f4121i, (View) obj);
                return spannable$lambda$72$lambda$24;
        }
    }

    public /* synthetic */ e(RenderContext renderContext, LinkContentNode linkContentNode) {
        this.f4120e = renderContext;
        this.f4121i = linkContentNode;
    }
}
