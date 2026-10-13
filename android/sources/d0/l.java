package d0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class l implements h {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7374d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f7375e;

    public /* synthetic */ l(p pVar, int i5) {
        this.f7374d = i5;
        this.f7375e = pVar;
    }

    @Override // d0.h
    public final double invoke(double d6) {
        switch (this.f7374d) {
            case 0:
                p this$0 = this.f7375e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                return yo.j.b(this$0.k.invoke(d6), this$0.f7384e, this$0.f7385f);
            default:
                p this$02 = this.f7375e;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                return this$02.f7390m.invoke(yo.j.b(d6, this$02.f7384e, this$02.f7385f));
        }
    }
}
