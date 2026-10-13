package mq;

import ip.a0;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j extends g {

    /* renamed from: b, reason: collision with root package name */
    public final String f14578b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(String message) {
        super(Unit.a);
        Intrinsics.checkNotNullParameter(message, "message");
        this.f14578b = message;
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        return ar.l.c(ar.k.Q, this.f14578b);
    }

    @Override // mq.g
    public final Object b() {
        throw new UnsupportedOperationException();
    }

    @Override // mq.g
    public final String toString() {
        return this.f14578b;
    }
}
