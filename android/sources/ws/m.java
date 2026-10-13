package ws;

import java.io.IOException;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f20102e = 1;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ p f20103f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f20104g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ List f20105h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(String str, p pVar, int i5, List list) {
        super(str, true);
        this.f20103f = pVar;
        this.f20104g = i5;
        this.f20105h = list;
    }

    @Override // ss.a
    public final long a() {
        switch (this.f20102e) {
            case 0:
                z zVar = this.f20103f.H;
                List responseHeaders = this.f20105h;
                zVar.getClass();
                Intrinsics.checkNotNullParameter(responseHeaders, "responseHeaders");
                try {
                    this.f20103f.T.q(this.f20104g, b.CANCEL);
                    synchronized (this.f20103f) {
                        this.f20103f.V.remove(Integer.valueOf(this.f20104g));
                    }
                    return -1L;
                } catch (IOException unused) {
                    return -1L;
                }
            default:
                z zVar2 = this.f20103f.H;
                List requestHeaders = this.f20105h;
                zVar2.getClass();
                Intrinsics.checkNotNullParameter(requestHeaders, "requestHeaders");
                try {
                    this.f20103f.T.q(this.f20104g, b.CANCEL);
                    synchronized (this.f20103f) {
                        this.f20103f.V.remove(Integer.valueOf(this.f20104g));
                    }
                    return -1L;
                } catch (IOException unused2) {
                    return -1L;
                }
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(String str, p pVar, int i5, List list, boolean z5) {
        super(str, true);
        this.f20103f = pVar;
        this.f20104g = i5;
        this.f20105h = list;
    }
}
