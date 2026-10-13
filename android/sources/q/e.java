package q;

import android.net.Uri;
import android.os.Bundle;

/* loaded from: classes.dex */
public final class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16624d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Uri f16625e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f16626i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Bundle f16627v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ g f16628w;

    public e(g gVar, int i5, Uri uri, boolean z5, Bundle bundle) {
        this.f16628w = gVar;
        this.f16624d = i5;
        this.f16625e = uri;
        this.f16626i = z5;
        this.f16627v = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f16628w.f16637g.onRelationshipValidationResult(this.f16624d, this.f16625e, this.f16626i, this.f16627v);
    }
}
