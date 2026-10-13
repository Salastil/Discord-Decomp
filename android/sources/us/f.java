package us;

import hc.k;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Interceptor;
import okhttp3.Request;
import okhttp3.Response;
import ts.h;

/* loaded from: classes3.dex */
public final class f implements Interceptor.Chain {
    public final h a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f19113b;

    /* renamed from: c, reason: collision with root package name */
    public final int f19114c;

    /* renamed from: d, reason: collision with root package name */
    public final k f19115d;

    /* renamed from: e, reason: collision with root package name */
    public final Request f19116e;

    /* renamed from: f, reason: collision with root package name */
    public final int f19117f;

    /* renamed from: g, reason: collision with root package name */
    public final int f19118g;

    /* renamed from: h, reason: collision with root package name */
    public final int f19119h;

    /* renamed from: i, reason: collision with root package name */
    public int f19120i;

    public f(h call, ArrayList interceptors, int i5, k kVar, Request request, int i6, int i10, int i11) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(interceptors, "interceptors");
        Intrinsics.checkNotNullParameter(request, "request");
        this.a = call;
        this.f19113b = interceptors;
        this.f19114c = i5;
        this.f19115d = kVar;
        this.f19116e = request;
        this.f19117f = i6;
        this.f19118g = i10;
        this.f19119h = i11;
    }

    public static f b(f fVar, int i5, k kVar, Request request, int i6) {
        if ((i6 & 1) != 0) {
            i5 = fVar.f19114c;
        }
        int i10 = i5;
        if ((i6 & 2) != 0) {
            kVar = fVar.f19115d;
        }
        k kVar2 = kVar;
        if ((i6 & 4) != 0) {
            request = fVar.f19116e;
        }
        Request request2 = request;
        int i11 = fVar.f19117f;
        int i12 = fVar.f19118g;
        int i13 = fVar.f19119h;
        Intrinsics.checkNotNullParameter(request2, "request");
        return new f(fVar.a, fVar.f19113b, i10, kVar2, request2, i11, i12, i13);
    }

    @Override // okhttp3.Interceptor.Chain
    public final Response a(Request request) {
        Intrinsics.checkNotNullParameter(request, "request");
        ArrayList arrayList = this.f19113b;
        int size = arrayList.size();
        int i5 = this.f19114c;
        if (i5 >= size) {
            throw new IllegalStateException("Check failed.");
        }
        this.f19120i++;
        k kVar = this.f19115d;
        if (kVar != null) {
            if (!((ts.e) kVar.f9763v).b(request.a)) {
                throw new IllegalStateException(("network interceptor " + arrayList.get(i5 - 1) + " must retain the same host and port").toString());
            }
            if (this.f19120i != 1) {
                throw new IllegalStateException(("network interceptor " + arrayList.get(i5 - 1) + " must call proceed() exactly once").toString());
            }
        }
        int i6 = i5 + 1;
        f b10 = b(this, i6, null, request, 58);
        Interceptor interceptor = (Interceptor) arrayList.get(i5);
        Response intercept = interceptor.intercept(b10);
        if (intercept == null) {
            throw new NullPointerException("interceptor " + interceptor + " returned null");
        }
        if (kVar != null && i6 < arrayList.size() && b10.f19120i != 1) {
            throw new IllegalStateException(("network interceptor " + interceptor + " must call proceed() exactly once").toString());
        }
        if (intercept.f16091y != null) {
            return intercept;
        }
        throw new IllegalStateException(("interceptor " + interceptor + " returned a response with no body").toString());
    }

    @Override // okhttp3.Interceptor.Chain
    public final Request i() {
        return this.f19116e;
    }
}
