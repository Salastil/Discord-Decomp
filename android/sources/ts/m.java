package ts;

import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final IOException f18755d;

    /* renamed from: e, reason: collision with root package name */
    public IOException f18756e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(IOException firstConnectException) {
        super(firstConnectException);
        Intrinsics.checkNotNullParameter(firstConnectException, "firstConnectException");
        this.f18755d = firstConnectException;
        this.f18756e = firstConnectException;
    }
}
