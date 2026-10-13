package et;

import java.security.MessageDigest;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;

/* loaded from: classes.dex */
public final class l extends h {

    /* renamed from: e, reason: collision with root package name */
    public final MessageDigest f8255e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(d sink) {
        super(sink);
        Intrinsics.checkNotNullParameter(sink, "sink");
        Intrinsics.checkNotNullParameter("MD5", "algorithm");
        MessageDigest digest = MessageDigest.getInstance("MD5");
        Intrinsics.checkNotNullExpressionValue(digest, "getInstance(algorithm)");
        Intrinsics.checkNotNullParameter(sink, "sink");
        Intrinsics.checkNotNullParameter(digest, "digest");
        this.f8255e = digest;
    }

    @Override // et.h, okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        y.f(source.f16114e, 0L, j);
        s sVar = source.f16113d;
        Intrinsics.checkNotNull(sVar);
        long j5 = 0;
        while (j5 < j) {
            int min = (int) Math.min(j - j5, sVar.f8276c - sVar.f8275b);
            MessageDigest messageDigest = this.f8255e;
            if (messageDigest == null) {
                Intrinsics.checkNotNull(null);
                throw null;
            }
            messageDigest.update(sVar.a, sVar.f8275b, min);
            j5 += min;
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
        }
        super.H(source, j);
    }
}
