package com.discord.notifications.renderer;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class IncomingCallActivity$onCreate$1 extends FunctionReferenceImpl implements Function0<Unit> {
    public IncomingCallActivity$onCreate$1(Object obj) {
        super(0, obj, IncomingCallActivity.class, "performAcceptAction", "performAcceptAction$notification_renderer_release()V", 0);
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        m1147invoke();
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m1147invoke() {
        ((IncomingCallActivity) this.receiver).performAcceptAction$notification_renderer_release();
    }
}
