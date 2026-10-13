package ws;

import java.io.IOException;

/* loaded from: classes3.dex */
public final class k extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f20095e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f20096f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f20097g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(String str, p pVar, int i5, int i6) {
        super(str, true);
        this.f20095e = pVar;
        this.f20096f = i5;
        this.f20097g = i6;
    }

    @Override // ss.a
    public final long a() {
        p pVar = this.f20095e;
        try {
            pVar.T.o(this.f20096f, this.f20097g, true);
            return -1L;
        } catch (IOException e9) {
            pVar.f(e9);
            return -1L;
        }
    }
}
