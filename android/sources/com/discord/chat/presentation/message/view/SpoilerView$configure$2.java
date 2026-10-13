package com.discord.chat.presentation.message.view;

import com.discord.chat.bridge.spoiler.SpoilerConfig;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SpoilerView$configure$2 extends FunctionReferenceImpl implements Function0<Unit> {
    public SpoilerView$configure$2(Object obj) {
        super(0, obj, SpoilerConfig.class, "onHide", "onHide()V", 0);
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        m768invoke();
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m768invoke() {
        ((SpoilerConfig) this.receiver).onHide();
    }
}
