package ws;

import java.io.IOException;

/* loaded from: classes3.dex */
public final class o extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f20110e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f20111f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ long f20112g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(String str, p pVar, int i5, long j) {
        super(str, true);
        this.f20110e = pVar;
        this.f20111f = i5;
        this.f20112g = j;
    }

    @Override // ss.a
    public final long a() {
        p pVar = this.f20110e;
        try {
            pVar.T.r(this.f20111f, this.f20112g);
            return -1L;
        } catch (IOException e9) {
            pVar.f(e9);
            return -1L;
        }
    }
}
