package ws;

import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b0 extends IOException {

    /* renamed from: d, reason: collision with root package name */
    public final b f20066d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(b errorCode) {
        super(Intrinsics.stringPlus("stream was reset: ", errorCode));
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        this.f20066d = errorCode;
    }
}
