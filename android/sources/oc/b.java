package oc;

import a5.h0;
import org.chromium.net.UrlRequest;

/* loaded from: classes3.dex */
public final class b extends UrlRequest.StatusListener {
    public final /* synthetic */ int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ h0 f15819b;

    public b(int[] iArr, h0 h0Var) {
        this.a = iArr;
        this.f15819b = h0Var;
    }

    @Override // org.chromium.net.UrlRequest.StatusListener
    public final void onStatus(int i5) {
        this.a[0] = i5;
        this.f15819b.q();
    }
}
