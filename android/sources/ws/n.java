package ws;

import java.io.IOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f20106e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ p f20107f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f20108g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ b f20109h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ n(String str, p pVar, int i5, b bVar, int i6) {
        super(str, true);
        this.f20106e = i6;
        this.f20107f = pVar;
        this.f20108g = i5;
        this.f20109h = bVar;
    }

    @Override // ss.a
    public final long a() {
        switch (this.f20106e) {
            case 0:
                z zVar = this.f20107f.H;
                b errorCode = this.f20109h;
                zVar.getClass();
                Intrinsics.checkNotNullParameter(errorCode, "errorCode");
                synchronized (this.f20107f) {
                    this.f20107f.V.remove(Integer.valueOf(this.f20108g));
                    Unit unit = Unit.a;
                }
                return -1L;
            default:
                p pVar = this.f20107f;
                try {
                    int i5 = this.f20108g;
                    b statusCode = this.f20109h;
                    Intrinsics.checkNotNullParameter(statusCode, "statusCode");
                    pVar.T.q(i5, statusCode);
                } catch (IOException e9) {
                    pVar.f(e9);
                }
                return -1L;
        }
    }
}
