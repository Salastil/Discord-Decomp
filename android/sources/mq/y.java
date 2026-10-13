package mq;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y extends b {

    /* renamed from: c, reason: collision with root package name */
    public final yq.y f14582c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y(List value, yq.y type) {
        super(value, new aq.a(11, type));
        Intrinsics.checkNotNullParameter(value, "value");
        Intrinsics.checkNotNullParameter(type, "type");
        this.f14582c = type;
    }
}
