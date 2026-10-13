package ws;

import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class l extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f20098e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f20099f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ Buffer f20100g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ int f20101h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(String str, p pVar, int i5, Buffer buffer, int i6, boolean z5) {
        super(str, true);
        this.f20098e = pVar;
        this.f20099f = i5;
        this.f20100g = buffer;
        this.f20101h = i6;
    }

    @Override // ss.a
    public final long a() {
        try {
            z zVar = this.f20098e.H;
            Buffer source = this.f20100g;
            int i5 = this.f20101h;
            zVar.getClass();
            Intrinsics.checkNotNullParameter(source, "source");
            source.skip(i5);
            this.f20098e.T.q(this.f20099f, b.CANCEL);
            synchronized (this.f20098e) {
                this.f20098e.V.remove(Integer.valueOf(this.f20099f));
            }
            return -1L;
        } catch (IOException unused) {
            return -1L;
        }
    }
}
